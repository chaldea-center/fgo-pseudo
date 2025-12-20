void ScriptNotificationDialog___ctor(ScriptNotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E8E9 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D2E8E9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ScriptNotificationDialog__Callback(ScriptNotificationDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ScriptNotificationDialog_CallbackFunc_o *v9; // x19
  struct ScriptNotificationDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ScriptNotificationDialog__Close(ScriptNotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptNotificationDialog__Close_45676248(this, 0, v2);
}


void ScriptNotificationDialog__Close_45676248(
        ScriptNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2E8E6 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ScriptNotificationDialog_EndClose__);
    byte_4D2E8E6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptNotificationDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ScriptNotificationDialog__EndClose(ScriptNotificationDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ScriptNotificationDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C9403C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ScriptNotificationDialog__EndOpen(ScriptNotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ScriptNotificationDialog__Init(ScriptNotificationDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D2E8E3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E8E3 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.titledMessageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
    sub_1C942F0(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ScriptNotificationDialog__OnClickClose(ScriptNotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2E8E7 & 1) == 0 )
  {
    sub_1C94098(&Method_ScriptNotificationDialog_OnClickClose__);
    byte_4D2E8E7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ScriptNotificationDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ScriptNotificationDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ScriptNotificationDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.state = 3;
    ScriptNotificationDialog__Callback(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptNotificationDialog__Open(
        ScriptNotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        ScriptNotificationDialog_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        int32_t spacingY,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  __int64 v14; // x1
  UILabel_o *titledMessageLabel; // x0
  const MethodInfo *v16; // x3
  UILabel_o *closeLabel; // x21
  System_Action_o *v18; // x20

  if ( (byte_4D2E8E4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_ScriptNotificationDialog_EndOpen__);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4D2E8E4 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)message,
      (int32_t)callback,
      (System_String_o *)canMaskTouchClose,
      spacingY,
      (int64_t)method,
      v7);
    titledMessageLabel = this->fields.titledMessageLabel;
    if ( !titledMessageLabel )
      goto LABEL_10;
    UILabel__set_spacingY(titledMessageLabel, spacingY, 0);
    titledMessageLabel = (UILabel_o *)this->fields.closeButton;
    if ( !titledMessageLabel )
      goto LABEL_10;
    ((void (__fastcall *)(UILabel_o *, _QWORD, _QWORD, const MethodInfo *))titledMessageLabel->klass->vtable._14_OnEnable.methodPtr)(
      titledMessageLabel,
      0,
      0,
      titledMessageLabel->klass->vtable._14_OnEnable.method);
    ScriptNotificationDialog__SetMessage(this, title, message, v16);
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titledMessageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !closeLabel )
LABEL_10:
      sub_1C942F0(titledMessageLabel, v14);
    UILabel__set_text(closeLabel, (System_String_o *)titledMessageLabel, 0);
    BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
    this->fields.state = 1;
    v18 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptNotificationDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0, 0);
  }
}


void ScriptNotificationDialog__SetMessage(
        ScriptNotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  System_String_o *v9; // x1

  if ( (byte_4D2E8E5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E8E5 = 1;
  }
  IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(title, 0);
  if ( !this->fields.messageLabel )
    goto LABEL_12;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    UILabel__set_text(this->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    IsNullOrEmpty = this->fields.titleLabel;
    if ( IsNullOrEmpty )
    {
      UILabel__set_text(IsNullOrEmpty, title, 0);
      IsNullOrEmpty = this->fields.titledMessageLabel;
      if ( IsNullOrEmpty )
      {
        v9 = message;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C942F0(IsNullOrEmpty, v8);
  }
  UILabel__set_text(this->fields.messageLabel, message, 0);
  IsNullOrEmpty = this->fields.titleLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_12;
  UILabel__set_text(IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = this->fields.titledMessageLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_12;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_11:
  UILabel__set_text(IsNullOrEmpty, v9, 0);
}


void ScriptNotificationDialog__add_callbackFunc(
        ScriptNotificationDialog_o *this,
        ScriptNotificationDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptNotificationDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptNotificationDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptNotificationDialog_o *v11; // x0
  ScriptNotificationDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2E8E1 & 1) == 0 )
  {
    sub_1C94098(&ScriptNotificationDialog_CallbackFunc_TypeInfo);
    byte_4D2E8E1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptNotificationDialog_CallbackFunc_c *)v8->klass != ScriptNotificationDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  ScriptNotificationDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *ScriptNotificationDialog__get_closeBtnPath(ScriptNotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E8E8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15700/*"Window/CloseButton"*/);
    byte_4D2E8E8 = 1;
  }
  return (System_String_o *)StringLiteral_15700/*"Window/CloseButton"*/;
}


void ScriptNotificationDialog__remove_callbackFunc(
        ScriptNotificationDialog_o *this,
        ScriptNotificationDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptNotificationDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptNotificationDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptNotificationDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2E8E2 & 1) == 0 )
  {
    sub_1C94098(&ScriptNotificationDialog_CallbackFunc_TypeInfo);
    byte_4D2E8E2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptNotificationDialog_CallbackFunc_c *)v8->klass != ScriptNotificationDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  ScriptNotificationDialog__Init(v11, v12);
}


void ScriptNotificationDialog_CallbackFunc___ctor(
        ScriptNotificationDialog_CallbackFunc_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ACA618;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACA5D8;
}


System_IAsyncResult_o *ScriptNotificationDialog_CallbackFunc__BeginInvoke(
        ScriptNotificationDialog_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v5, callback, object);
}


void ScriptNotificationDialog_CallbackFunc__EndInvoke(
        ScriptNotificationDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void ScriptNotificationDialog_CallbackFunc__Invoke(
        ScriptNotificationDialog_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}