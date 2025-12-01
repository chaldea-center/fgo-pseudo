void CommandAssistLvUpDialogComponent___ctor(CommandAssistLvUpDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CC19F8 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC19F8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CommandAssistLvUpDialogComponent__Init(CommandAssistLvUpDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_4CC19F4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC19F4 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.endEventMessageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.endEventMessageLabel) == 0)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C71608(titleLabel, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
}


void CommandAssistLvUpDialogComponent__OnClickCloseButton(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CC19F6 & 1) == 0 )
  {
    sub_1C713B0(&Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__);
    byte_4CC19F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    BaseDialog__Close((BaseDialog_o *)this, this->fields.closeCallback, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CommandAssistLvUpDialogComponent__Open(
        CommandAssistLvUpDialogComponent_o *this,
        int32_t eventId,
        int32_t missionId,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x23
  UILabel_o *titleLabel; // x23
  UILabel_o *closeLabel; // x23
  UILabel_o *endEventMessageLabel; // x23
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4CC19F5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CommandAssistLvUpDialogComponent__Open_b__11_0__);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_5550/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/);
    sub_1C713B0(&StringLiteral_5551/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CC19F5 = 1;
  }
  CommandAssistLvUpDialogComponent__Init(this, *(const MethodInfo **)&eventId);
  this->fields.state = 1;
  this->fields.eventId = eventId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.endEventMessageLabel;
  if ( !gameObject )
    goto LABEL_19;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)CondType__IsOpen(20, eventId, 0, 0, 0, 0);
  if ( !v11 )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(v11, (unsigned __int8)gameObject & 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5551/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_19;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
  endEventMessageLabel = this->fields.endEventMessageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5550/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, 0);
  if ( !endEventMessageLabel )
    goto LABEL_19;
  UILabel__set_text(endEventMessageLabel, (System_String_o *)gameObject, 0);
  this->fields.closeCallback = closeCallback;
  sub_1C71354(&this->fields.closeCallback, closeCallback);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      CommandAssistLvUpListViewManager__CreateList(
        (CommandAssistLvUpListViewManager_o *)gameObject,
        eventId,
        missionId,
        v16);
      goto LABEL_18;
    }
LABEL_19:
    sub_1C71608(gameObject, v10);
  }
LABEL_18:
  v17 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0, 0);
}


void CommandAssistLvUpDialogComponent__SerializeFieldNotNullCheck(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void CommandAssistLvUpDialogComponent___Open_b__11_0(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *CommandAssistLvUpDialogComponent__get_closeBtnObject(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CC19F7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC19F7 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C71608(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}