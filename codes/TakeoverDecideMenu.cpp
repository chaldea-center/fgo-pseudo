void TakeoverDecideMenu___ctor(TakeoverDecideMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5935DFB & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5935DFB = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TakeoverDecideMenu__Callback(TakeoverDecideMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct TakeoverDecideMenu_CallbackFunc_o *v9; // x20
  struct TakeoverDecideMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void TakeoverDecideMenu__Close(TakeoverDecideMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TakeoverDecideMenu__Close_44563728(this, 0, v2);
}


void TakeoverDecideMenu__Close_44563728(
        TakeoverDecideMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5935DF8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_TakeoverDecideMenu_EndClose__);
    byte_5935DF8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
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
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TakeoverDecideMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void TakeoverDecideMenu__EndClose(TakeoverDecideMenu_o *this, const MethodInfo *method)
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

  TakeoverDecideMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void TakeoverDecideMenu__EndOpen(TakeoverDecideMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void TakeoverDecideMenu__Init(TakeoverDecideMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_5935DF6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935DF6 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.info1Label;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.info2Label) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.warningLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_10:
    sub_21FFECC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TakeoverDecideMenu__OnClickClose(TakeoverDecideMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5935DF9 & 1) == 0 )
  {
    sub_21FFC50(&Method_TakeoverDecideMenu_OnClickClose__);
    byte_5935DF9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TakeoverDecideMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_TakeoverDecideMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_TakeoverDecideMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    TakeoverDecideMenu__Callback(this, 0, v5);
  }
}


void TakeoverDecideMenu__Open(
        TakeoverDecideMenu_o *this,
        System_String_o *userName,
        TakeoverDecideMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *closeLabel; // x21
  UILabel_o *messageLabel; // x21
  System_String_o *v17; // x0
  System_Action_o *v18; // x20

  if ( (byte_5935DF7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_TakeoverDecideMenu_EndOpen__);
    sub_21FFC50(&StringLiteral_3958/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935DF7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_15;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_15;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
    closeLabel = this->fields.closeLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !closeLabel
      || (UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0),
          messageLabel = this->fields.messageLabel,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3958/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/, 0),
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v17, (Il2CppObject *)userName, 0),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel) == 0) )
    {
LABEL_15:
      sub_21FFECC(gameObject, v12);
    }
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    this->fields.state = 1;
    v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_TakeoverDecideMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0, 0);
  }
}


void TakeoverDecideMenu__add_callbackFunc(
        TakeoverDecideMenu_o *this,
        TakeoverDecideMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct TakeoverDecideMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct TakeoverDecideMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  TakeoverDecideMenu_o *v13; // x0
  TakeoverDecideMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5935DF4 & 1) == 0 )
  {
    sub_21FFC50(&TakeoverDecideMenu_CallbackFunc_TypeInfo);
    byte_5935DF4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (TakeoverDecideMenu_CallbackFunc_c *)v8->klass != TakeoverDecideMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, TakeoverDecideMenu_CallbackFunc_TypeInfo, v9, v10);
  TakeoverDecideMenu__remove_callbackFunc(v13, v14, v15);
}


System_String_o *TakeoverDecideMenu__get_closeBtnPath(TakeoverDecideMenu_o *this, const MethodInfo *method)
{
  if ( (byte_5935DFA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    byte_5935DFA = 1;
  }
  return (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/;
}


void TakeoverDecideMenu__remove_callbackFunc(
        TakeoverDecideMenu_o *this,
        TakeoverDecideMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct TakeoverDecideMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct TakeoverDecideMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  TakeoverDecideMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5935DF5 & 1) == 0 )
  {
    sub_21FFC50(&TakeoverDecideMenu_CallbackFunc_TypeInfo);
    byte_5935DF5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (TakeoverDecideMenu_CallbackFunc_c *)v8->klass != TakeoverDecideMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, TakeoverDecideMenu_CallbackFunc_TypeInfo, v9, v10);
  TakeoverDecideMenu__Init(v13, v14);
}


void TakeoverDecideMenu_CallbackFunc___ctor(
        TakeoverDecideMenu_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF6338;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF62F0;
}


System_IAsyncResult_o *TakeoverDecideMenu_CallbackFunc__BeginInvoke(
        TakeoverDecideMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void TakeoverDecideMenu_CallbackFunc__EndInvoke(
        TakeoverDecideMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void TakeoverDecideMenu_CallbackFunc__Invoke(
        TakeoverDecideMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}