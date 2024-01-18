void __fastcall CommandAssistConfirmDialogComponent___ctor(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188075 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4188075 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandAssistConfirmDialogComponent__Init(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4188071 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188071 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B2C434(titleLabel, v3);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.closeCallback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallback, 0LL, v5, v6, v7, v8, v9, v10);
}


void __fastcall CommandAssistConfirmDialogComponent__OnClickCloseButton(
        CommandAssistConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *closeCallback; // x0

  if ( (byte_4188073 & 1) == 0 )
  {
    sub_B2C35C(&Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__, method);
    byte_4188073 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_CommandAssistConfirmDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeCallback = this->fields.closeCallback;
    if ( closeCallback )
      System_Action__Invoke(closeCallback, 0LL);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v25; // x2
  System_Action_o *v26; // x20

  if ( (byte_4188072 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, closeCallback);
    sub_B2C35C(&Method_CommandAssistConfirmDialogComponent__Open_b__11_0__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5584/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, v10);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_B2C35C(&StringLiteral_5585/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_TITLE"*/, v12);
    byte_4188072 = 1;
  }
  CommandAssistConfirmDialogComponent__Init(this, (const MethodInfo *)closeCallback);
  this->fields.eventId = eventId;
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5585/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5584/*"EVENT_COMMAND_ASSIST_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_17;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_17;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      CommandAssistListViewManager__CreateList((CommandAssistListViewManager_o *)gameObject, eventId, v25);
      goto LABEL_16;
    }
LABEL_17:
    sub_B2C434(gameObject, v14);
  }
LABEL_16:
  v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_CommandAssistConfirmDialogComponent__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
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

  if ( (byte_4188074 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188074 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}