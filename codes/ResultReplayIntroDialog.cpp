void __fastcall ResultReplayIntroDialog___ctor(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4218743 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4218743 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog__Close(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4218741 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ResultReplayIntroDialog_EndClose__, v4);
    byte_4218741 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ResultReplayIntroDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall ResultReplayIntroDialog__EndClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_onCloseCallback; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *onCloseCallback; // t1

  ResultReplayIntroDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onCloseCallback = this->fields.onCloseCallback;
  p_onCloseCallback = (BattleServantConfConponent_o *)&this->fields.onCloseCallback;
  v11 = onCloseCallback;
  if ( onCloseCallback )
  {
    p_onCloseCallback->klass = 0LL;
    sub_B0D840(p_onCloseCallback, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall ResultReplayIntroDialog__Init(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v5; // x20
  System_String_o *messageTextCode; // x21
  System_String_o *v7; // x0
  UnityEngine_Object_o *cancelLabel; // x20
  UILabel_o *v9; // x20
  System_String_o *cancelTextCode; // x21

  if ( (byte_421873E & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421873E = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.messageTextCode, 0LL) )
  {
    v5 = this->fields.messageLabel;
    messageTextCode = this->fields.messageTextCode;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get(messageTextCode, 0LL);
    if ( !v5 )
      goto LABEL_24;
    UILabel__set_text(v5, v7, 0LL);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0LL) )
  {
    v9 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, v7, 0LL);
      goto LABEL_23;
    }
LABEL_24:
    sub_B0D97C(v7);
  }
LABEL_23:
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog__OnClickClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4218740 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4218740 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  ResultReplayIntroDialog__Close(this, v3);
}


void __fastcall ResultReplayIntroDialog__Open(
        ResultReplayIntroDialog_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  ResultReplayIntroDialog___c_c *v14; // x0
  struct ResultReplayIntroDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__7_0; // x20
  Il2CppObject *v17; // x21
  struct ResultReplayIntroDialog___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_421873F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, onCloseCallback);
    sub_B0D8A4(&Method_ResultReplayIntroDialog___c__Open_b__7_0__, v10);
    sub_B0D8A4(&ResultReplayIntroDialog___c_TypeInfo, v11);
    byte_421873F = 1;
  }
  this->fields.onCloseCallback = onCloseCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onCloseCallback,
    (System_Int32_array **)onCloseCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = ResultReplayIntroDialog___c_TypeInfo;
  if ( (BYTE3(ResultReplayIntroDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResultReplayIntroDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResultReplayIntroDialog___c_TypeInfo);
    v14 = ResultReplayIntroDialog___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = ResultReplayIntroDialog___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(_9__7_0, v17, Method_ResultReplayIntroDialog___c__Open_b__7_0__, 0LL);
    v18 = ResultReplayIntroDialog___c_TypeInfo->static_fields;
    v18->__9__7_0 = _9__7_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__7_0, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall ResultReplayIntroDialog__get_closeBtnObject(
        ResultReplayIntroDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4218742 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218742 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall ResultReplayIntroDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ResultReplayIntroDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4212538 & 1) == 0 )
  {
    sub_B0D8A4(&ResultReplayIntroDialog___c_TypeInfo, v1);
    byte_4212538 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ResultReplayIntroDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ResultReplayIntroDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ResultReplayIntroDialog___c_o *)v3;
  sub_B0D840(static_fields, v3);
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