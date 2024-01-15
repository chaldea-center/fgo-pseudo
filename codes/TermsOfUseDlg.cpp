void __fastcall TermsOfUseDlg___ctor(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  if ( (byte_40F71F9 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F71F9 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TermsOfUseDlg__Callback(TermsOfUseDlg_o *this, bool result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  TermsOfUseDlg_CallbackFunc_o *v9; // x19
  struct TermsOfUseDlg_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    TermsOfUseDlg_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall TermsOfUseDlg__Close(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TermsOfUseDlg__Close_19582628(this, 0LL, v2);
}


void __fastcall TermsOfUseDlg__Close_19582628(
        TermsOfUseDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F71F5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_TermsOfUseDlg_EndClose__, v10);
    byte_40F71F5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TermsOfUseDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall TermsOfUseDlg__EndClose(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TermsOfUseDlg__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall TermsOfUseDlg__EndOpen(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall TermsOfUseDlg__Init(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0

  if ( (byte_40F71F3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F71F3 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TermsOfUseDlg__OnClickCancel(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F71F8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F71F8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    TermsOfUseDlg__Callback(this, 0, v3);
  }
}


void __fastcall TermsOfUseDlg__OnClickDecide(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TermsOfUseMenu_c *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40F71F7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&TermsOfUseMenu_TypeInfo, v3);
    byte_40F71F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v4 = TermsOfUseMenu_TypeInfo;
    if ( (BYTE3(TermsOfUseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
    }
    TermsOfUseMenu__Save((const MethodInfo *)v4);
    TermsOfUseDlg__Callback(this, 1, v5);
  }
}


void __fastcall TermsOfUseDlg__OnClickShow(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *wvTitle; // x20
  int32_t wvAddress; // w21
  System_String_o *WebViewAddress_23699452; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x22

  if ( (byte_40F71F6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_TermsOfUseDlg_OnEndShowWebView__, v5);
    sub_B16FFC(&WebViewManager_TypeInfo, v6);
    byte_40F71F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    wvTitle = this->fields.wvTitle;
    wvAddress = this->fields.wvAddress;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(wvAddress, 0LL);
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_TermsOfUseDlg_OnEndShowWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(wvTitle, WebViewAddress_23699452, v14, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *showLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *decideLabel; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *v36; // x20

  if ( (byte_40F71F4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&Method_TermsOfUseDlg_EndOpen__, v19);
    byte_40F71F4 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)message,
      (System_String_array **)showMessage,
      (System_Boolean_array **)cancelMessage,
      (System_Int32_array **)decideMessage,
      *(System_Int32_array **)&address,
      (System_Int32_array *)webViewTitle);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_11;
    UILabel__set_text(titleLabel, title, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, message, 0LL), (showLabel = this->fields.showLabel) == 0LL)
      || (UILabel__set_text(showLabel, showMessage, 0LL), (cancelLabel = this->fields.cancelLabel) == 0LL)
      || (UILabel__set_text(cancelLabel, cancelMessage, 0LL), (decideLabel = this->fields.decideLabel) == 0LL) )
    {
LABEL_11:
      sub_B170D4();
    }
    UILabel__set_text(decideLabel, decideMessage, 0LL);
    this->fields.wvAddress = address;
    this->fields.wvTitle = webViewTitle;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.wvTitle,
      (System_Int32_array **)webViewTitle,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
    this->fields.state = 1;
    v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_TermsOfUseDlg_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
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

  if ( (byte_40F71F1 & 1) == 0 )
  {
    sub_B16FFC(&TermsOfUseDlg_CallbackFunc_TypeInfo, value);
    byte_40F71F1 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (TermsOfUseDlg_o *)sub_B173C8(v8);
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

  if ( (byte_40F71F2 & 1) == 0 )
  {
    sub_B16FFC(&TermsOfUseDlg_CallbackFunc_TypeInfo, value);
    byte_40F71F2 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (TermsOfUseDlg_o *)sub_B173C8(v8);
  TermsOfUseDlg__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TermsOfUseDlg_CallbackFunc___ctor(
        TermsOfUseDlg_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall TermsOfUseDlg_CallbackFunc__BeginInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F77E4 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F77E4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall TermsOfUseDlg_CallbackFunc__EndInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TermsOfUseDlg_CallbackFunc__Invoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  TermsOfUseDlg_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  TermsOfUseDlg_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  TermsOfUseDlg_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (TermsOfUseDlg_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}