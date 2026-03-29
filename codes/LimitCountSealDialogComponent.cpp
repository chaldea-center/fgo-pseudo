void LimitCountSealDialogComponent___ctor(LimitCountSealDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D34BD0 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D34BD0 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LimitCountSealDialogComponent__Callback(LimitCountSealDialogComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct LimitCountSealDialogComponent_CallbackFunc_o *v9; // x19
  struct LimitCountSealDialogComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void LimitCountSealDialogComponent__Close(
        LimitCountSealDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D34BCE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_LimitCountSealDialogComponent_EndClose__);
    byte_4D34BCE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_LimitCountSealDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void LimitCountSealDialogComponent__EndClose(LimitCountSealDialogComponent_o *this, const MethodInfo *method)
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

  LimitCountSealDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void LimitCountSealDialogComponent__Init(LimitCountSealDialogComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D34BCC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34BCC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.btnLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void LimitCountSealDialogComponent__OpenLimitCountSealDialog(
        LimitCountSealDialogComponent_o *this,
        System_String_o *title,
        System_String_o *message,
        LimitCountSealDialogComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v12; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *btnLabel; // x20

  if ( (byte_4D34BCD & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4D34BCD = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)message,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, title, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, message, 0);
  btnLabel = this->fields.btnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !btnLabel
    || (UILabel__set_text(btnLabel, (System_String_o *)titleLabel, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C93D2C(titleLabel, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void LimitCountSealDialogComponent__add_callbackFunc(
        LimitCountSealDialogComponent_o *this,
        LimitCountSealDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct LimitCountSealDialogComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct LimitCountSealDialogComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  LimitCountSealDialogComponent_o *v11; // x0
  LimitCountSealDialogComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D34BCA & 1) == 0 )
  {
    sub_1C93AD4(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    byte_4D34BCA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (LimitCountSealDialogComponent_CallbackFunc_c *)v8->klass != LimitCountSealDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  LimitCountSealDialogComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *LimitCountSealDialogComponent__get_closeBtnPath(
        LimitCountSealDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D34BCF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15752/*"Window/OkBtn"*/);
    byte_4D34BCF = 1;
  }
  return (System_String_o *)StringLiteral_15752/*"Window/OkBtn"*/;
}


void LimitCountSealDialogComponent__remove_callbackFunc(
        LimitCountSealDialogComponent_o *this,
        LimitCountSealDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct LimitCountSealDialogComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct LimitCountSealDialogComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  LimitCountSealDialogComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D34BCB & 1) == 0 )
  {
    sub_1C93AD4(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    byte_4D34BCB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (LimitCountSealDialogComponent_CallbackFunc_c *)v8->klass != LimitCountSealDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  LimitCountSealDialogComponent__Init(v11, v12);
}


void LimitCountSealDialogComponent_CallbackFunc___ctor(
        LimitCountSealDialogComponent_CallbackFunc_o *this,
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACDAC0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACDA80;
}


System_IAsyncResult_o *LimitCountSealDialogComponent_CallbackFunc__BeginInvoke(
        LimitCountSealDialogComponent_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void LimitCountSealDialogComponent_CallbackFunc__EndInvoke(
        LimitCountSealDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void LimitCountSealDialogComponent_CallbackFunc__Invoke(
        LimitCountSealDialogComponent_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}