void ResultReplayIntroDialog___ctor(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AA1E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596AA1E = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ResultReplayIntroDialog__Close(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_596AA1C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ResultReplayIntroDialog_EndClose__);
    byte_596AA1C = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ResultReplayIntroDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void ResultReplayIntroDialog__EndClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_onCloseCallback; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *onCloseCallback; // t1

  ResultReplayIntroDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  onCloseCallback = this->fields.onCloseCallback;
  p_onCloseCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.onCloseCallback;
  v12 = onCloseCallback;
  if ( onCloseCallback )
  {
    p_onCloseCallback->klass = 0;
    sub_2213A04(p_onCloseCallback, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ResultReplayIntroDialog__Init(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *v7; // x20
  System_String_o *messageTextCode; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *v14; // x20
  System_String_o *cancelTextCode; // x21

  if ( (byte_596AA19 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA19 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.messageTextCode, 0) )
  {
    v7 = this->fields.messageLabel;
    messageTextCode = this->fields.messageTextCode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v9 = LocalizationManager__Get(messageTextCode, 0);
    if ( !v7 )
      goto LABEL_20;
    UILabel__set_text(v7, v9, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0) )
  {
    v14 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    v9 = LocalizationManager__Get(cancelTextCode, 0);
    if ( v14 )
    {
      UILabel__set_text(v14, v9, 0);
      goto LABEL_19;
    }
LABEL_20:
    sub_2213CDC(v9, v10);
  }
LABEL_19:
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ResultReplayIntroDialog__OnClickClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596AA1B & 1) == 0 )
  {
    sub_2213A60(&Method_ResultReplayIntroDialog_OnClickClose__);
    byte_596AA1B = 1;
  }
  v3 = Method_ResultReplayIntroDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ResultReplayIntroDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ResultReplayIntroDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  ResultReplayIntroDialog__Close(this, v5);
}


void ResultReplayIntroDialog__Open(
        ResultReplayIntroDialog_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  ResultReplayIntroDialog___c_c *v12; // x0
  struct ResultReplayIntroDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__7_0; // x20
  Il2CppObject *v15; // x21
  struct ResultReplayIntroDialog___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596AA1A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ResultReplayIntroDialog___c__Open_b__7_0__);
    sub_2213A60(&ResultReplayIntroDialog___c_TypeInfo);
    byte_596AA1A = 1;
  }
  this->fields.onCloseCallback = onCloseCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onCloseCallback,
    (int32_t)onCloseCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = ResultReplayIntroDialog___c_TypeInfo;
  if ( !*(&ResultReplayIntroDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResultReplayIntroDialog___c_TypeInfo, v10, v11);
    v12 = ResultReplayIntroDialog___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
      static_fields = ResultReplayIntroDialog___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__7_0, v15, Method_ResultReplayIntroDialog___c__Open_b__7_0__, 0);
    v16 = ResultReplayIntroDialog___c_TypeInfo->static_fields;
    v16->__9__7_0 = _9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__7_0, (int32_t)_9__7_0, v17, v18, v19, v20, v21, v22);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__7_0, 0, 0, 0);
}


UnityEngine_GameObject_o *ResultReplayIntroDialog__get_closeBtnObject(
        ResultReplayIntroDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596AA1D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA1D = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void ResultReplayIntroDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AA1F & 1) == 0 )
  {
    sub_2213A60(&ResultReplayIntroDialog___c_TypeInfo);
    byte_596AA1F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ResultReplayIntroDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ResultReplayIntroDialog___c_TypeInfo->static_fields->__9 = (struct ResultReplayIntroDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ResultReplayIntroDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ResultReplayIntroDialog___c___ctor(ResultReplayIntroDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ResultReplayIntroDialog___c___Open_b__7_0(ResultReplayIntroDialog___c_o *this, const MethodInfo *method)
{
  ;
}