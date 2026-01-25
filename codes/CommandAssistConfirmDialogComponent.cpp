void CommandAssistConfirmDialogComponent___ctor(CommandAssistConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CE8266 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE8266 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void CommandAssistConfirmDialogComponent__Init(CommandAssistConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_4CE8262 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE8262 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, method);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
    sub_1C7BD40(titleLabel, v3);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.closeCallback = 0;
  sub_1C7BA8C(&this->fields.closeCallback, 0);
}


void CommandAssistConfirmDialogComponent__OnClickCloseButton(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *closeCallback; // x8

  if ( (byte_4CE8264 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__);
    byte_4CE8264 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeCallback = this->fields.closeCallback;
    if ( closeCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
        closeCallback->fields.method_code,
        closeCallback->fields.method);
  }
}


void CommandAssistConfirmDialogComponent__Open(
        CommandAssistConfirmDialogComponent_o *this,
        System_Action_o *closeCallback,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v13; // x2
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x4

  if ( (byte_4CE8263 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_CommandAssistConfirmDialogComponent__Open_b__11_0__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5559/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_5560/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_TITLE"*/);
    byte_4CE8263 = 1;
  }
  CommandAssistConfirmDialogComponent__Init(this, (const MethodInfo *)closeCallback);
  this->fields.eventId = eventId;
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5559/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
  this->fields.closeCallback = closeCallback;
  sub_1C7BA8C(&this->fields.closeCallback, closeCallback);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      CommandAssistListViewManager__CreateList((CommandAssistListViewManager_o *)gameObject, eventId, v13);
      goto LABEL_14;
    }
LABEL_15:
    sub_1C7BD40(gameObject, v8);
  }
LABEL_14:
  v14 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CommandAssistConfirmDialogComponent__Open_b__11_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0, v15);
}


void CommandAssistConfirmDialogComponent__SerializeFieldNotNullCheck(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void CommandAssistConfirmDialogComponent___Open_b__11_0(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *CommandAssistConfirmDialogComponent__get_closeBtnObject(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CE8265 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8265 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C7BD40(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}