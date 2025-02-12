void __fastcall ResultReplayIntroDialog___ctor(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BCBD45 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BCBD45 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog__Close(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4BCBD43 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_ResultReplayIntroDialog_EndClose__, v3);
    byte_4BCBD43 = 1;
  }
  v4 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ResultReplayIntroDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall ResultReplayIntroDialog__EndClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_onCloseCallback; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *onCloseCallback; // t1

  ResultReplayIntroDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onCloseCallback = this->fields.onCloseCallback;
  p_onCloseCallback = (PartyOrganizationUtility_o *)&this->fields.onCloseCallback;
  v12 = onCloseCallback;
  if ( onCloseCallback )
  {
    p_onCloseCallback->klass = 0LL;
    sub_1C1AB78(p_onCloseCallback, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall ResultReplayIntroDialog__Init(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v5; // x20
  System_String_o *messageTextCode; // x21
  System_String_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  UILabel_o *v10; // x20
  System_String_o *cancelTextCode; // x21

  if ( (byte_4BCBD40 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BCBD40 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.messageTextCode, 0LL) )
  {
    v5 = this->fields.messageLabel;
    messageTextCode = this->fields.messageTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get(messageTextCode, 0LL);
    if ( !v5 )
      goto LABEL_20;
    UILabel__set_text(v5, v7, 0LL);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0LL) )
  {
    v10 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v10 )
    {
      UILabel__set_text(v10, v7, 0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C1AE30(v7, v8);
  }
LABEL_19:
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog__OnClickClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BCBD42 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ResultReplayIntroDialog_OnClickClose__, method);
    byte_4BCBD42 = 1;
  }
  v3 = Method_ResultReplayIntroDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ResultReplayIntroDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_ResultReplayIntroDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  ResultReplayIntroDialog__Close(this, v5);
}


void __fastcall ResultReplayIntroDialog__Open(
        ResultReplayIntroDialog_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  ResultReplayIntroDialog___c_c *v12; // x0
  System_Action_o *_9__7_0; // x20
  Il2CppObject *v14; // x21
  struct ResultReplayIntroDialog___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BCBD41 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, onCloseCallback);
    sub_1C1ABD4(&Method_ResultReplayIntroDialog___c__Open_b__7_0__, v10);
    sub_1C1ABD4(&ResultReplayIntroDialog___c_TypeInfo, v11);
    byte_4BCBD41 = 1;
  }
  this->fields.onCloseCallback = onCloseCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.onCloseCallback,
    (int64_t)onCloseCallback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = ResultReplayIntroDialog___c_TypeInfo;
  if ( !ResultReplayIntroDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResultReplayIntroDialog___c_TypeInfo);
    v12 = ResultReplayIntroDialog___c_TypeInfo;
  }
  _9__7_0 = v12->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ResultReplayIntroDialog___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__7_0 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(_9__7_0, v14, Method_ResultReplayIntroDialog___c__Open_b__7_0__, 0LL);
    static_fields = ResultReplayIntroDialog___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4BCBD44 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCBD44 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C1AE30(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall ResultReplayIntroDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCBD46 & 1) == 0 )
  {
    sub_1C1ABD4(&ResultReplayIntroDialog___c_TypeInfo, v1);
    byte_4BCBD46 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(ResultReplayIntroDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ResultReplayIntroDialog___c_TypeInfo->static_fields->__9 = (struct ResultReplayIntroDialog___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ResultReplayIntroDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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