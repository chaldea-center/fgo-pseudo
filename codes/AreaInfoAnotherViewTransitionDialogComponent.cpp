void AreaInfoAnotherViewTransitionDialogComponent___ctor(
        AreaInfoAnotherViewTransitionDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5969E40 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969E40 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AreaInfoAnotherViewTransitionDialogComponent__Close(
        AreaInfoAnotherViewTransitionDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
  {
    this->fields.baseState = 3;
    BaseDialog__Close((BaseDialog_o *)this, 0, v2);
  }
}


void AreaInfoAnotherViewTransitionDialogComponent__Initialize(
        AreaInfoAnotherViewTransitionDialogComponent_o *this,
        System_String_o *message,
        WarReleaseEntity_TransitionDialogData_o *data,
        System_Action_string__Dictionary_string__object___o *transitionCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  UILabel_o *messageLabel; // x0
  UILabel_o *cancelBtnLabel; // x22
  __int64 v11; // x1
  __int64 v12; // x2

  v7 = message;
  if ( (byte_5969E3C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    byte_5969E3C = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, v7, 0);
  this->fields.dialogData = data;
  messageLabel = (UILabel_o *)sub_2213A04(&this->fields.dialogData, data);
  if ( !data )
    goto LABEL_13;
  messageLabel = this->fields.gotoBtnLabel;
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, data->fields.gotoButtonText, 0);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  messageLabel = (UILabel_o *)System_String__IsNullOrEmpty(data->fields.cancelButtonText, 0);
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
    message = (System_String_o *)messageLabel;
  }
  else
  {
    message = data->fields.cancelButtonText;
  }
  if ( !cancelBtnLabel )
LABEL_13:
    sub_2213CDC(messageLabel, message);
  UILabel__set_text(cancelBtnLabel, message, 0);
  this->fields.decideTransitionCallback = transitionCallback;
  sub_2213A04(&this->fields.decideTransitionCallback, transitionCallback);
}


void AreaInfoAnotherViewTransitionDialogComponent__OnClickCancelButton(
        AreaInfoAnotherViewTransitionDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5969E3E & 1) == 0 )
  {
    sub_2213A60(&Method_AreaInfoAnotherViewTransitionDialogComponent_OnClickCancelButton__);
    byte_5969E3E = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_AreaInfoAnotherViewTransitionDialogComponent_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_AreaInfoAnotherViewTransitionDialogComponent_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78();
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.baseState == 2 )
    {
      this->fields.baseState = 3;
      BaseDialog__Close((BaseDialog_o *)this, 0, v5);
    }
  }
}


void AreaInfoAnotherViewTransitionDialogComponent__OnClickDecideButton(
        AreaInfoAnotherViewTransitionDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct WarReleaseEntity_TransitionDialogData_o *dialogData; // x8
  const MethodInfo *v8; // x2

  if ( (byte_5969E3D & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_string__Dictionary_string__object____);
    sub_2213A60(&Method_AreaInfoAnotherViewTransitionDialogComponent_OnClickDecideButton__);
    byte_5969E3D = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_AreaInfoAnotherViewTransitionDialogComponent_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_AreaInfoAnotherViewTransitionDialogComponent_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78();
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    dialogData = this->fields.dialogData;
    if ( !dialogData )
      sub_2213CDC(v5, v6);
    ActionExtensions__Call_object__object_(
      (System_Action_T1__T2__o *)this->fields.decideTransitionCallback,
      (Il2CppObject *)dialogData->fields.transitionParam,
      (Il2CppObject *)dialogData->fields.script,
      (const MethodInfo_37002AC *)Method_ActionExtensions_Call_string__Dictionary_string__object____);
    if ( this->fields.baseState == 2 )
    {
      this->fields.baseState = 3;
      BaseDialog__Close((BaseDialog_o *)this, 0, v8);
    }
  }
}


System_String_o *AreaInfoAnotherViewTransitionDialogComponent__get_closeBtnPath(
        AreaInfoAnotherViewTransitionDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5969E3F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_5969E3F = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}