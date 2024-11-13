void __fastcall TermsOfUseDlg___ctor(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B144BC & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B144BC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TermsOfUseDlg__Callback(TermsOfUseDlg_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct TermsOfUseDlg_CallbackFunc_o *v9; // x20
  struct TermsOfUseDlg_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall TermsOfUseDlg__Close(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TermsOfUseDlg__Close_36892680(this, 0LL, v2);
}


void __fastcall TermsOfUseDlg__Close_36892680(
        TermsOfUseDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B144B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_TermsOfUseDlg_EndClose__, v10, v11);
    byte_4B144B8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TermsOfUseDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall TermsOfUseDlg__EndClose(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TermsOfUseDlg__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall TermsOfUseDlg__EndOpen(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall TermsOfUseDlg__Init(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B144B6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B144B6 = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TermsOfUseDlg__OnClickCancel(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B144BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TermsOfUseDlg_OnClickCancel__, method, v2);
    byte_4B144BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_TermsOfUseDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_TermsOfUseDlg_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    TermsOfUseDlg__Callback(this, 0, v6);
  }
}


void __fastcall TermsOfUseDlg__OnClickDecide(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B144BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TermsOfUseDlg_OnClickDecide__, method, v2);
    sub_1BCA7E0(&TermsOfUseMenu_TypeInfo, v4, v5);
    byte_4B144BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v6 = Method_TermsOfUseDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_TermsOfUseDlg_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, v8);
    TermsOfUseMenu__Save(0LL);
    TermsOfUseDlg__Callback(this, 1, v9);
  }
}


void __fastcall TermsOfUseDlg__OnClickShow(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  System_String_o *wvTitle; // x20
  int32_t wvAddress; // w21
  System_String_o *WebViewAddress_39282648; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x22
  __int64 v22; // x1

  if ( (byte_4B144B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_TermsOfUseDlg_OnClickShow__, v6, v7);
    sub_1BCA7E0(&Method_TermsOfUseDlg_OnEndShowWebView__, v8, v9);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v10, v11);
    byte_4B144B9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v12 = Method_TermsOfUseDlg_OnClickShow__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickShow__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_TermsOfUseDlg_OnClickShow__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    wvTitle = this->fields.wvTitle;
    wvAddress = this->fields.wvAddress;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(wvAddress, 0LL);
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_TermsOfUseDlg_OnEndShowWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v22);
    WebViewManager__OpenView(wvTitle, WebViewAddress_39282648, v21, 0LL);
  }
}


void __fastcall TermsOfUseDlg__OnEndShowWebView(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x20

  if ( (byte_4B144B7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message);
    sub_1BCA7E0(&Method_TermsOfUseDlg_EndOpen__, v19, v20);
    byte_4B144B7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)message,
      (int32_t)showMessage,
      cancelMessage,
      (BattleSetupInfo_o *)decideMessage,
      *(FollowerInfo_o **)&address,
      (PartyListViewItem_o *)webViewTitle);
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
      sub_1BCAA3C(gameObject, v22);
    }
    UILabel__set_text((UILabel_o *)gameObject, decideMessage, 0LL);
    this->fields.wvAddress = address;
    this->fields.wvTitle = webViewTitle;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.wvTitle,
      (int64_t)webViewTitle,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
    this->fields.state = 1;
    v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_TermsOfUseDlg_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
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

  if ( (byte_4B144B4 & 1) == 0 )
  {
    sub_1BCA7E0(&TermsOfUseDlg_CallbackFunc_TypeInfo, value, method);
    byte_4B144B4 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B144B5 & 1) == 0 )
  {
    sub_1BCA7E0(&TermsOfUseDlg_CallbackFunc_TypeInfo, value, method);
    byte_4B144B5 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  TermsOfUseDlg__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TermsOfUseDlg_CallbackFunc___ctor(
        TermsOfUseDlg_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0BCC0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0BC78;
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
  if ( (byte_4B144BD & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B144BD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall TermsOfUseDlg_CallbackFunc__EndInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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