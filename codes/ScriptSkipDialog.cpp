void ScriptSkipDialog___ctor(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5972923 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5972923 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ScriptSkipDialog__Close(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptSkipDialog__Close_51915012(this, 0, v2);
}


void ScriptSkipDialog__Close_51915012(ScriptSkipDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_597291E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScriptSkipDialog_EndClose__);
    byte_597291E = 1;
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
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptSkipDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ScriptSkipDialog__EndClose(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ScriptSkipDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ScriptSkipDialog__EndOpen(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ScriptSkipDialog__Init(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_597291C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597291C = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.message2Label;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.buttonDecideLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.buttonDecide2Label;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.buttonCancelLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.buttonCancel2Label) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.buttonExitLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_12:
    sub_2213CDC(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ScriptSkipDialog__OnClickCancel(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ScriptSkipDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5972920 & 1) == 0 )
  {
    sub_2213A60(&Method_ScriptSkipDialog_OnClickCancel__);
    byte_5972920 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScriptSkipDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ScriptSkipDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ScriptSkipDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void ScriptSkipDialog__OnClickDecide(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ScriptSkipDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_597291F & 1) == 0 )
  {
    sub_2213A60(&Method_ScriptSkipDialog_OnClickDecide__);
    byte_597291F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScriptSkipDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ScriptSkipDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ScriptSkipDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void ScriptSkipDialog__OnClickExit(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ScriptSkipDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5972921 & 1) == 0 )
  {
    sub_2213A60(&Method_ScriptSkipDialog_OnClickExit__);
    byte_5972921 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScriptSkipDialog_OnClickExit__;
    if ( (*((_BYTE *)Method_ScriptSkipDialog_OnClickExit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ScriptSkipDialog_OnClickExit__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        2,
        clickFunc->fields.method);
  }
}


void ScriptSkipDialog__OnEnable(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_5972922 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16266/*"Window/NormalBase/CancelButton"*/);
    sub_2213A60(&StringLiteral_16262/*"Window/ExitBase/CancelButton"*/);
    byte_5972922 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16266/*"Window/NormalBase/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v4, (System_String_o *)StringLiteral_16262/*"Window/ExitBase/CancelButton"*/, 0);
}


void ScriptSkipDialog__Open(
        ScriptSkipDialog_o *this,
        bool isUseExit,
        ScriptSkipDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  UnityEngine_GameObject_o *normalBase; // x0
  __int64 v13; // x1
  int v14; // w8
  UILabel_o *message2Label; // x20
  UILabel_o *buttonDecide2Label; // x20
  UILabel_o *buttonCancel2Label; // x20
  __int64 *v18; // x8
  UILabel_o *buttonExitLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  System_Action_o *v22; // x20

  if ( (byte_597291D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ScriptSkipDialog_EndOpen__);
    sub_2213A60(&StringLiteral_12012/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/);
    sub_2213A60(&StringLiteral_12013/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    byte_597291D = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (System_String_o *)func,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  normalBase = this->fields.normalBase;
  if ( !normalBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(normalBase, !isUseExit, 0);
  normalBase = this->fields.exitBase;
  if ( !normalBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(normalBase, isUseExit, 0);
  v14 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isUseExit )
  {
    message2Label = this->fields.message2Label;
    if ( !v14 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, 0);
    if ( message2Label )
    {
      UILabel__set_text(message2Label, (System_String_o *)normalBase, 0);
      buttonDecide2Label = this->fields.buttonDecide2Label;
      normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
      if ( buttonDecide2Label )
      {
        UILabel__set_text(buttonDecide2Label, (System_String_o *)normalBase, 0);
        buttonCancel2Label = this->fields.buttonCancel2Label;
        normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
        if ( buttonCancel2Label )
        {
          UILabel__set_text(buttonCancel2Label, (System_String_o *)normalBase, 0);
          v18 = &StringLiteral_12013/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/;
          buttonExitLabel = this->fields.buttonExitLabel;
          goto LABEL_17;
        }
      }
    }
LABEL_19:
    sub_2213CDC(normalBase, v11);
  }
  messageLabel = this->fields.messageLabel;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, 0);
  if ( !messageLabel )
    goto LABEL_19;
  UILabel__set_text(messageLabel, (System_String_o *)normalBase, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_19;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)normalBase, 0);
  v18 = &StringLiteral_3831/*"COMMON_CONFIRM_NO"*/;
  buttonExitLabel = this->fields.buttonCancelLabel;
LABEL_17:
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v18, 0);
  if ( !buttonExitLabel )
    goto LABEL_19;
  UILabel__set_text(buttonExitLabel, (System_String_o *)normalBase, 0);
  this->fields.isButtonEnable = 0;
  v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ScriptSkipDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
}


void ScriptSkipDialog_ClickDelegate___ctor(
        ScriptSkipDialog_ClickDelegate_o *this,
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
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_201016C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2010124;
}


System_IAsyncResult_o *ScriptSkipDialog_ClickDelegate__BeginInvoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_5972924 & 1) == 0 )
  {
    sub_2213A60(&ScriptSkipDialog_ResultKind_TypeInfo);
    byte_5972924 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ScriptSkipDialog_ResultKind_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void ScriptSkipDialog_ClickDelegate__EndInvoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScriptSkipDialog_ClickDelegate__Invoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}