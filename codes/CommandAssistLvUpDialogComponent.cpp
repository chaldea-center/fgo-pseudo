void __fastcall CommandAssistLvUpDialogComponent___ctor(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BCBD58 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BCBD58 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__Init(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_4BCBD54 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BCBD54 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.endEventMessageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.endEventMessageLabel) == 0LL)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1C1AE30(titleLabel, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__OnClickCloseButton(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4BCBD56 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__, method);
    byte_4BCBD56 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, this->fields.closeCallback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandAssistLvUpDialogComponent__Open(
        CommandAssistLvUpDialogComponent_o *this,
        int32_t eventId,
        int32_t missionId,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x23
  UILabel_o *titleLabel; // x23
  UILabel_o *closeLabel; // x23
  UILabel_o *endEventMessageLabel; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v29; // x3
  System_Action_o *v30; // x20

  if ( (byte_4BCBD55 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, v9);
    sub_1C1ABD4(&CondType_TypeInfo, v10);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v11);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_5687/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, v13);
    sub_1C1ABD4(&StringLiteral_5688/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, v14);
    sub_1C1ABD4(&StringLiteral_3802/*"COMMON_CONFIRM_CLOSE"*/, v15);
    byte_4BCBD55 = 1;
  }
  CommandAssistLvUpDialogComponent__Init(this, *(const MethodInfo **)&eventId);
  this->fields.state = 1;
  this->fields.eventId = eventId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.endEventMessageLabel;
  if ( !gameObject )
    goto LABEL_19;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)CondType__IsOpen(20, eventId, 0LL, 0, 0LL, 0LL);
  if ( !v18 )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(v18, (unsigned __int8)gameObject & 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_19;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  endEventMessageLabel = this->fields.endEventMessageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, 0LL);
  if ( !endEventMessageLabel )
    goto LABEL_19;
  UILabel__set_text(endEventMessageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeCallback,
    (int64_t)closeCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      CommandAssistLvUpListViewManager__CreateList(
        (CommandAssistLvUpListViewManager_o *)gameObject,
        eventId,
        missionId,
        v29);
      goto LABEL_18;
    }
LABEL_19:
    sub_1C1AE30(gameObject, v17);
  }
LABEL_18:
  v30 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__SerializeFieldNotNullCheck(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommandAssistLvUpDialogComponent___Open_b__11_0(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall CommandAssistLvUpDialogComponent__get_closeBtnObject(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BCBD57 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCBD57 = 1;
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