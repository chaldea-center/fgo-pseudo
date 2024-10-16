void __fastcall CommandAssistConfirmDialogComponent___ctor(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB0AB4 & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB0AB4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall CommandAssistConfirmDialogComponent__Init(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_4AB0AB0 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, method);
    byte_4AB0AB0 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, method);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_1BAB678(titleLabel, v3);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1BAB3C0(&this->fields.closeCallback);
}


void __fastcall CommandAssistConfirmDialogComponent__OnClickCloseButton(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *closeCallback; // x8

  if ( (byte_4AB0AB2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__, method);
    byte_4AB0AB2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434();
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeCallback = this->fields.closeCallback;
    if ( closeCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
        closeCallback->fields.original_method_info,
        *(_QWORD *)&closeCallback->fields.extra_arg);
  }
}


void __fastcall CommandAssistConfirmDialogComponent__Open(
        CommandAssistConfirmDialogComponent_o *this,
        System_Action_o *closeCallback,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v19; // x2
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4AB0AB1 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, closeCallback);
    sub_1BAB41C(&Method_CommandAssistConfirmDialogComponent__Open_b__11_0__, v7);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v8);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_5578/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, v10);
    sub_1BAB41C(&StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_1BAB41C(&StringLiteral_5579/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_TITLE"*/, v12);
    byte_4AB0AB1 = 1;
  }
  CommandAssistConfirmDialogComponent__Init(this, (const MethodInfo *)closeCallback);
  this->fields.eventId = eventId;
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5579/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5578/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_1BAB3C0(&this->fields.closeCallback);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      CommandAssistListViewManager__CreateList((CommandAssistListViewManager_o *)gameObject, eventId, v19);
      goto LABEL_14;
    }
LABEL_15:
    sub_1BAB678(gameObject, v14);
  }
LABEL_14:
  v20 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_CommandAssistConfirmDialogComponent__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, v21);
}


void __fastcall CommandAssistConfirmDialogComponent__SerializeFieldNotNullCheck(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommandAssistConfirmDialogComponent___Open_b__11_0(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall CommandAssistConfirmDialogComponent__get_closeBtnObject(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4AB0AB3 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB0AB3 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BAB678(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}