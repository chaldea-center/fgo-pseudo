void __fastcall SummonInfoDlgComponent___ctor(SummonInfoDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A6C744 & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A6C744 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonInfoDlgComponent__Callback(SummonInfoDlgComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct SummonInfoDlgComponent_CallbackFunc_o *v5; // x19
  struct SummonInfoDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B8FFB4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall SummonInfoDlgComponent__Close(
        SummonInfoDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A6C742 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_SummonInfoDlgComponent_EndClose__, v6);
    byte_4A6C742 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonInfoDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SummonInfoDlgComponent__EndClose(SummonInfoDlgComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SummonInfoDlgComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B8FFB4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SummonInfoDlgComponent__Init(SummonInfoDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A6C740 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A6C740 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.cautionInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B9026C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonInfoDlgComponent__OpenInfoMessageDlg(
        SummonInfoDlgComponent_o *this,
        System_String_o *title,
        System_String_o *message,
        SummonInfoDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *confirmBtnLabel; // x20

  if ( (byte_4A6C741 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, title);
    sub_1B90010(&StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, v9);
    byte_4A6C741 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)message,
    (int32_t)callback);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, title, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, message, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !confirmBtnLabel
    || (UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL),
        (titleLabel = (UILabel_o *)this->fields.cautionInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B9026C(titleLabel, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall SummonInfoDlgComponent__add_callbackFunc(
        SummonInfoDlgComponent_o *this,
        SummonInfoDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonInfoDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonInfoDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonInfoDlgComponent_o *v11; // x0
  SummonInfoDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A6C73E & 1) == 0 )
  {
    sub_1B90010(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A6C73E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonInfoDlgComponent_CallbackFunc_c *)v8->klass != SummonInfoDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B9052C(v8);
  SummonInfoDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SummonInfoDlgComponent__get_closeBtnPath(
        SummonInfoDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6C743 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_4682/*"ConfirmWindow/ConfirmBntInfo/DecideButton"*/, method);
    byte_4A6C743 = 1;
  }
  return (System_String_o *)StringLiteral_4682/*"ConfirmWindow/ConfirmBntInfo/DecideButton"*/;
}


void __fastcall SummonInfoDlgComponent__remove_callbackFunc(
        SummonInfoDlgComponent_o *this,
        SummonInfoDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonInfoDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonInfoDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonInfoDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A6C73F & 1) == 0 )
  {
    sub_1B90010(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A6C73F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonInfoDlgComponent_CallbackFunc_c *)v8->klass != SummonInfoDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B9052C(v8);
  SummonInfoDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoDlgComponent_CallbackFunc___ctor(
        SummonInfoDlgComponent_CallbackFunc_o *this,
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D20B0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_19D2070;
}


System_IAsyncResult_o *__fastcall SummonInfoDlgComponent_CallbackFunc__BeginInvoke(
        SummonInfoDlgComponent_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, &v5, callback, object);
}


void __fastcall SummonInfoDlgComponent_CallbackFunc__EndInvoke(
        SummonInfoDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall SummonInfoDlgComponent_CallbackFunc__Invoke(
        SummonInfoDlgComponent_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}