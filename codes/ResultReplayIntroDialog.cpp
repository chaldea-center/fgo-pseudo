void ResultReplayIntroDialog___ctor(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2AE7A & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2AE7A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ResultReplayIntroDialog__Close(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2AE78 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ResultReplayIntroDialog_EndClose__);
    byte_4D2AE78 = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ResultReplayIntroDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void ResultReplayIntroDialog__EndClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_onCloseCallback; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *onCloseCallback; // t1

  ResultReplayIntroDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  onCloseCallback = this->fields.onCloseCallback;
  p_onCloseCallback = &this->fields.onCloseCallback;
  v6 = onCloseCallback;
  if ( onCloseCallback )
  {
    *p_onCloseCallback = 0;
    sub_1C93A78(p_onCloseCallback, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void ResultReplayIntroDialog__Init(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *messageTextCode; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  UILabel_o *v9; // x20
  System_String_o *cancelTextCode; // x21

  if ( (byte_4D2AE75 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AE75 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.messageTextCode, 0) )
  {
    v4 = this->fields.messageLabel;
    messageTextCode = this->fields.messageTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get(messageTextCode, 0);
    if ( !v4 )
      goto LABEL_20;
    UILabel__set_text(v4, v6, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0) )
  {
    v9 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get(cancelTextCode, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, v6, 0);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C93D2C(v6, v7);
  }
LABEL_19:
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ResultReplayIntroDialog__OnClickClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2AE77 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ResultReplayIntroDialog_OnClickClose__);
    byte_4D2AE77 = 1;
  }
  v3 = Method_ResultReplayIntroDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ResultReplayIntroDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ResultReplayIntroDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  ResultReplayIntroDialog__Close(this, v5);
}


void ResultReplayIntroDialog__Open(
        ResultReplayIntroDialog_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  ResultReplayIntroDialog___c_c *v5; // x0
  System_Action_o *_9__7_0; // x20
  Il2CppObject *v7; // x21
  struct ResultReplayIntroDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4D2AE76 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ResultReplayIntroDialog___c__Open_b__7_0__);
    sub_1C93AD4(&ResultReplayIntroDialog___c_TypeInfo);
    byte_4D2AE76 = 1;
  }
  this->fields.onCloseCallback = onCloseCallback;
  sub_1C93A78(&this->fields.onCloseCallback, onCloseCallback);
  v5 = ResultReplayIntroDialog___c_TypeInfo;
  if ( !ResultReplayIntroDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResultReplayIntroDialog___c_TypeInfo);
    v5 = ResultReplayIntroDialog___c_TypeInfo;
  }
  _9__7_0 = v5->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ResultReplayIntroDialog___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__7_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__7_0, v7, Method_ResultReplayIntroDialog___c__Open_b__7_0__, 0);
    static_fields = ResultReplayIntroDialog___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1C93A78(&static_fields->__9__7_0, _9__7_0);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__7_0, 0, 0, 0);
}


UnityEngine_GameObject_o *ResultReplayIntroDialog__get_closeBtnObject(
        ResultReplayIntroDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2AE79 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AE79 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void ResultReplayIntroDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D2AE7B & 1) == 0 )
  {
    sub_1C93AD4(&ResultReplayIntroDialog___c_TypeInfo);
    byte_4D2AE7B = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ResultReplayIntroDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ResultReplayIntroDialog___c_TypeInfo->static_fields->__9 = (struct ResultReplayIntroDialog___c_o *)v1;
  sub_1C93A78(ResultReplayIntroDialog___c_TypeInfo->static_fields, v1);
}


void ResultReplayIntroDialog___c___ctor(ResultReplayIntroDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ResultReplayIntroDialog___c___Open_b__7_0(ResultReplayIntroDialog___c_o *this, const MethodInfo *method)
{
  ;
}