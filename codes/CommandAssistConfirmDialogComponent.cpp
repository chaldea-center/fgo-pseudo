void __fastcall CommandAssistConfirmDialogComponent___ctor(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10DE4 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10DE4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall CommandAssistConfirmDialogComponent__Init(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_4B10DE0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B10DE0 = 1;
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
    sub_1BCAA3C(titleLabel, v4);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1BCA784(&this->fields.closeCallback, 0LL);
}


void __fastcall CommandAssistConfirmDialogComponent__OnClickCloseButton(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_o *closeCallback; // x8

  if ( (byte_4B10DE2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__, method, v2);
    byte_4B10DE2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v4 = Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8();
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    closeCallback = this->fields.closeCallback;
    if ( closeCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
        closeCallback->fields.original_method_info,
        *(_QWORD *)&closeCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandAssistConfirmDialogComponent__Open(
        CommandAssistConfirmDialogComponent_o *this,
        System_Action_o *closeCallback,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  __int64 v25; // x1
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x3

  if ( (byte_4B10DE1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, closeCallback, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_CommandAssistConfirmDialogComponent__Open_b__11_0__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5653/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5654/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_TITLE"*/, v17, v18);
    byte_4B10DE1 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5654/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5653/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_1BCA784(&this->fields.closeCallback, closeCallback);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      CommandAssistListViewManager__CreateList((CommandAssistListViewManager_o *)gameObject, eventId, v27);
      goto LABEL_14;
    }
LABEL_15:
    sub_1BCAA3C(gameObject, v20);
  }
LABEL_14:
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v27, v28);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_CommandAssistConfirmDialogComponent__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, v30);
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
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B10DE3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B10DE3 = 1;
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