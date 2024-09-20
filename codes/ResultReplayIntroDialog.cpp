void __fastcall ResultReplayIntroDialog___ctor(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F1BB & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5F1BB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog__Close(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5F1B9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ResultReplayIntroDialog_EndClose__);
    byte_4A5F1B9 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ResultReplayIntroDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall ResultReplayIntroDialog__EndClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_onCloseCallback; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *onCloseCallback; // t1

  ResultReplayIntroDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onCloseCallback = this->fields.onCloseCallback;
  p_onCloseCallback = (ServantStatusBattleListViewItem_o *)&this->fields.onCloseCallback;
  v8 = onCloseCallback;
  if ( onCloseCallback )
  {
    p_onCloseCallback->klass = 0LL;
    sub_1B88554(p_onCloseCallback, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall ResultReplayIntroDialog__Init(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *messageTextCode; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  UILabel_o *v9; // x20
  System_String_o *cancelTextCode; // x21

  if ( (byte_4A5F1B6 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1B6 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.messageTextCode, 0LL) )
  {
    v4 = this->fields.messageLabel;
    messageTextCode = this->fields.messageTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get(messageTextCode, 0LL);
    if ( !v4 )
      goto LABEL_20;
    UILabel__set_text(v4, v6, 0LL);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0LL) )
  {
    v9 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, v6, 0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_1B8880C(v6, v7);
  }
LABEL_19:
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog__OnClickClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5F1B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_ResultReplayIntroDialog_OnClickClose__);
    byte_4A5F1B8 = 1;
  }
  v3 = Method_ResultReplayIntroDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ResultReplayIntroDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ResultReplayIntroDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  ResultReplayIntroDialog__Close(this, v5);
}


void __fastcall ResultReplayIntroDialog__Open(
        ResultReplayIntroDialog_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ResultReplayIntroDialog___c_c *v6; // x0
  System_Action_o *_9__7_0; // x20
  Il2CppObject *v8; // x21
  struct ResultReplayIntroDialog___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5F1B7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ResultReplayIntroDialog___c__Open_b__7_0__);
    sub_1B885B0(&ResultReplayIntroDialog___c_TypeInfo);
    byte_4A5F1B7 = 1;
  }
  this->fields.onCloseCallback = onCloseCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onCloseCallback,
    (int32_t)onCloseCallback,
    (int32_t)method,
    v3);
  v6 = ResultReplayIntroDialog___c_TypeInfo;
  if ( !ResultReplayIntroDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResultReplayIntroDialog___c_TypeInfo);
    v6 = ResultReplayIntroDialog___c_TypeInfo;
  }
  _9__7_0 = v6->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ResultReplayIntroDialog___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__7_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__7_0, v8, Method_ResultReplayIntroDialog___c__Open_b__7_0__, 0LL);
    static_fields = ResultReplayIntroDialog___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v10, v11);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__7_0, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall ResultReplayIntroDialog__get_closeBtnObject(
        ResultReplayIntroDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5F1BA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1BA = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall ResultReplayIntroDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F1BC & 1) == 0 )
  {
    sub_1B885B0(&ResultReplayIntroDialog___c_TypeInfo);
    byte_4A5F1BC = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ResultReplayIntroDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ResultReplayIntroDialog___c_TypeInfo->static_fields->__9 = (struct ResultReplayIntroDialog___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ResultReplayIntroDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ResultReplayIntroDialog___c___ctor(ResultReplayIntroDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog___c___Open_b__7_0(
        ResultReplayIntroDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}