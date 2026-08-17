void SummonInfoDlgComponent___ctor(SummonInfoDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CB16 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596CB16 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SummonInfoDlgComponent__Callback(SummonInfoDlgComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct SummonInfoDlgComponent_CallbackFunc_o *v9; // x19
  struct SummonInfoDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void SummonInfoDlgComponent__Close(SummonInfoDlgComponent_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_596CB14 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonInfoDlgComponent_EndClose__);
    byte_596CB14 = 1;
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
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonInfoDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void SummonInfoDlgComponent__EndClose(SummonInfoDlgComponent_o *this, const MethodInfo *method)
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

  SummonInfoDlgComponent__Init(this, method);
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


void SummonInfoDlgComponent__Init(SummonInfoDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596CB12 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CB12 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)this->fields.cautionInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SummonInfoDlgComponent__OpenInfoMessageDlg(
        SummonInfoDlgComponent_o *this,
        System_String_o *title,
        System_String_o *message,
        SummonInfoDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  UILabel_o *titleLabel; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *confirmBtnLabel; // x20

  if ( (byte_596CB13 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_596CB13 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    message,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, title, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, message, 0);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !confirmBtnLabel
    || (UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0),
        (titleLabel = (UILabel_o *)this->fields.cautionInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_2213CDC(titleLabel, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void SummonInfoDlgComponent__add_callbackFunc(
        SummonInfoDlgComponent_o *this,
        SummonInfoDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonInfoDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonInfoDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SummonInfoDlgComponent_o *v13; // x0
  SummonInfoDlgComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596CB10 & 1) == 0 )
  {
    sub_2213A60(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    byte_596CB10 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SummonInfoDlgComponent_CallbackFunc_c *)v8->klass != SummonInfoDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, SummonInfoDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  SummonInfoDlgComponent__remove_callbackFunc(v13, v14, v15);
}


System_String_o *SummonInfoDlgComponent__get_closeBtnPath(SummonInfoDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_596CB15 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4830/*"ConfirmWindow/ConfirmBntInfo/DecideButton"*/);
    byte_596CB15 = 1;
  }
  return (System_String_o *)StringLiteral_4830/*"ConfirmWindow/ConfirmBntInfo/DecideButton"*/;
}


void SummonInfoDlgComponent__remove_callbackFunc(
        SummonInfoDlgComponent_o *this,
        SummonInfoDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonInfoDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonInfoDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SummonInfoDlgComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596CB11 & 1) == 0 )
  {
    sub_2213A60(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    byte_596CB11 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SummonInfoDlgComponent_CallbackFunc_c *)v8->klass != SummonInfoDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, SummonInfoDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  SummonInfoDlgComponent__Init(v13, v14);
}


void SummonInfoDlgComponent_CallbackFunc___ctor(
        SummonInfoDlgComponent_CallbackFunc_o *this,
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
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20069E8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20069A8;
}


System_IAsyncResult_o *SummonInfoDlgComponent_CallbackFunc__BeginInvoke(
        SummonInfoDlgComponent_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void SummonInfoDlgComponent_CallbackFunc__EndInvoke(
        SummonInfoDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void SummonInfoDlgComponent_CallbackFunc__Invoke(SummonInfoDlgComponent_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}