void __fastcall ScriptSkipDialog___ctor(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17EB9 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B17EB9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ScriptSkipDialog__Close(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptSkipDialog__Close_42469612(this, 0LL, v2);
}


void __fastcall ScriptSkipDialog__Close_42469612(
        ScriptSkipDialog_o *this,
        System_Action_o *callback,
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
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B17EB4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ScriptSkipDialog_EndClose__, v10, v11);
    byte_4B17EB4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ScriptSkipDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ScriptSkipDialog__EndClose(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ScriptSkipDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall ScriptSkipDialog__EndOpen(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ScriptSkipDialog__Init(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *messageLabel; // x0

  if ( (byte_4B17EB2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17EB2 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.message2Label;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.buttonDecideLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.buttonDecide2Label;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.buttonCancelLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.buttonCancel2Label) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.buttonExitLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ScriptSkipDialog__OnClickCancel(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ScriptSkipDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B17EB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ScriptSkipDialog_OnClickCancel__, method, v2);
    byte_4B17EB6 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ScriptSkipDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ScriptSkipDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ScriptSkipDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall ScriptSkipDialog__OnClickDecide(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ScriptSkipDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B17EB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ScriptSkipDialog_OnClickDecide__, method, v2);
    byte_4B17EB5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ScriptSkipDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ScriptSkipDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ScriptSkipDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall ScriptSkipDialog__OnClickExit(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ScriptSkipDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B17EB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ScriptSkipDialog_OnClickExit__, method, v2);
    byte_4B17EB7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ScriptSkipDialog_OnClickExit__;
    if ( (*((_BYTE *)Method_ScriptSkipDialog_OnClickExit__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ScriptSkipDialog_OnClickExit__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        2LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall ScriptSkipDialog__OnEnable(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_4B17EB8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15815/*"Window/NormalBase/CancelButton"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_15811/*"Window/ExitBase/CancelButton"*/, v4, v5);
    byte_4B17EB8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15815/*"Window/NormalBase/CancelButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(v7, (System_String_o *)StringLiteral_15811/*"Window/ExitBase/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSkipDialog__Open(
        ScriptSkipDialog_o *this,
        bool isUseExit,
        ScriptSkipDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  UnityEngine_GameObject_o *normalBase; // x0
  __int64 v25; // x1
  UILabel_o *message2Label; // x20
  UILabel_o *buttonDecide2Label; // x20
  UILabel_o *buttonCancel2Label; // x20
  UILabel_o *buttonExitLabel; // x20
  __int64 *v30; // x8
  UILabel_o *messageLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x20

  if ( (byte_4B17EB3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isUseExit, func);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ScriptSkipDialog_EndOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11617/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11618/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v21, v22);
    byte_4B17EB3 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickFunc,
    (int64_t)func,
    (int64_t)func,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  normalBase = this->fields.normalBase;
  if ( !normalBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(normalBase, !isUseExit, 0LL);
  normalBase = this->fields.exitBase;
  if ( !normalBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(normalBase, isUseExit, 0LL);
  if ( isUseExit )
  {
    message2Label = this->fields.message2Label;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11617/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, 0LL);
    if ( message2Label )
    {
      UILabel__set_text(message2Label, (System_String_o *)normalBase, 0LL);
      buttonDecide2Label = this->fields.buttonDecide2Label;
      normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
      if ( buttonDecide2Label )
      {
        UILabel__set_text(buttonDecide2Label, (System_String_o *)normalBase, 0LL);
        buttonCancel2Label = this->fields.buttonCancel2Label;
        normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
        if ( buttonCancel2Label )
        {
          UILabel__set_text(buttonCancel2Label, (System_String_o *)normalBase, 0LL);
          buttonExitLabel = this->fields.buttonExitLabel;
          v30 = &StringLiteral_11618/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/;
          goto LABEL_17;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(normalBase, v23);
  }
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11617/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_19;
  UILabel__set_text(messageLabel, (System_String_o *)normalBase, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_19;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)normalBase, 0LL);
  buttonExitLabel = this->fields.buttonCancelLabel;
  v30 = &StringLiteral_3790/*"COMMON_CONFIRM_NO"*/;
LABEL_17:
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v30, 0LL);
  if ( !buttonExitLabel )
    goto LABEL_19;
  UILabel__set_text(buttonExitLabel, (System_String_o *)normalBase, 0LL);
  this->fields.isButtonEnable = 0;
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_ScriptSkipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSkipDialog_ClickDelegate___ctor(
        ScriptSkipDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0E81C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E7D4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptSkipDialog_ClickDelegate__BeginInvoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B17EBA & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptSkipDialog_ResultKind_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B17EBA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ScriptSkipDialog_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ScriptSkipDialog_ClickDelegate__EndInvoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ScriptSkipDialog_ClickDelegate__Invoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}