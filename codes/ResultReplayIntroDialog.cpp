void __fastcall ResultReplayIntroDialog___ctor(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A3AD & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A3AD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog__Close(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A3AB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ResultReplayIntroDialog_EndClose__, v5, v6);
    byte_4B1A3AB = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ResultReplayIntroDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onCloseCallback = this->fields.onCloseCallback;
  p_onCloseCallback = (PartyOrganizationUtility_o *)&this->fields.onCloseCallback;
  v12 = onCloseCallback;
  if ( onCloseCallback )
  {
    p_onCloseCallback->klass = 0LL;
    sub_1BCA784(p_onCloseCallback, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall ResultReplayIntroDialog__Init(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v7; // x1
  UILabel_o *v8; // x20
  System_String_o *messageTextCode; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  __int64 v13; // x1
  UILabel_o *v14; // x20
  System_String_o *cancelTextCode; // x21

  if ( (byte_4B1A3A8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1A3A8 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.messageTextCode, 0LL) )
  {
    v8 = this->fields.messageLabel;
    messageTextCode = this->fields.messageTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    v10 = LocalizationManager__Get(messageTextCode, 0LL);
    if ( !v8 )
      goto LABEL_20;
    UILabel__set_text(v8, v10, 0LL);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0LL) )
  {
    v14 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v10 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v14 )
    {
      UILabel__set_text(v14, v10, 0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_1BCAA3C(v10, v11);
  }
LABEL_19:
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultReplayIntroDialog__OnClickClose(ResultReplayIntroDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1A3AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ResultReplayIntroDialog_OnClickClose__, method, v2);
    byte_4B1A3AA = 1;
  }
  v4 = Method_ResultReplayIntroDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ResultReplayIntroDialog_OnClickClose__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ResultReplayIntroDialog_OnClickClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  ResultReplayIntroDialog__Close(this, v6);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  ResultReplayIntroDialog___c_c *v17; // x0
  System_Action_o *_9__7_0; // x20
  Il2CppObject *v19; // x21
  struct ResultReplayIntroDialog___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B1A3A9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, onCloseCallback, method);
    sub_1BCA7E0(&Method_ResultReplayIntroDialog___c__Open_b__7_0__, v10, v11);
    sub_1BCA7E0(&ResultReplayIntroDialog___c_TypeInfo, v12, v13);
    byte_4B1A3A9 = 1;
  }
  this->fields.onCloseCallback = onCloseCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onCloseCallback,
    (int64_t)onCloseCallback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = ResultReplayIntroDialog___c_TypeInfo;
  if ( !ResultReplayIntroDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResultReplayIntroDialog___c_TypeInfo, v14);
    v17 = ResultReplayIntroDialog___c_TypeInfo;
  }
  _9__7_0 = v17->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v14);
      v17 = ResultReplayIntroDialog___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__7_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
    System_Action___ctor(_9__7_0, v19, Method_ResultReplayIntroDialog___c__Open_b__7_0__, 0LL);
    static_fields = ResultReplayIntroDialog___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v21, v22, v23, v24, v25, v26);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__7_0, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall ResultReplayIntroDialog__get_closeBtnObject(
        ResultReplayIntroDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A3AC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A3AC = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall ResultReplayIntroDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A3AE & 1) == 0 )
  {
    sub_1BCA7E0(&ResultReplayIntroDialog___c_TypeInfo, v1, v2);
    byte_4B1A3AE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ResultReplayIntroDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ResultReplayIntroDialog___c_TypeInfo->static_fields->__9 = (struct ResultReplayIntroDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ResultReplayIntroDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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