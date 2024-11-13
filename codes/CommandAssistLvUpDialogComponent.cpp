void __fastcall CommandAssistLvUpDialogComponent___ctor(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A3C0 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A3C0 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__Init(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_4B1A3BC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1A3BC = 1;
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
    sub_1BCAA3C(titleLabel, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__OnClickCloseButton(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B1A3BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__, method, v2);
    byte_4B1A3BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v4 = Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  __int64 v10; // x2
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x23
  __int64 v27; // x1
  UILabel_o *titleLabel; // x23
  UILabel_o *closeLabel; // x23
  UILabel_o *endEventMessageLabel; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  UnityEngine_Object_o *listViewManager; // x22
  __int64 v39; // x2
  const MethodInfo *v40; // x3
  System_Action_o *v41; // x20

  if ( (byte_4B1A3BD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&missionId);
    sub_1BCA7E0(&Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_5658/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_5659/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v21, v22);
    byte_4B1A3BD = 1;
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
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v25);
  gameObject = (UnityEngine_GameObject_o *)CondType__IsOpen(20, eventId, 0LL, 0, 0LL, 0LL);
  if ( !v26 )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(v26, (unsigned __int8)gameObject & 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_19;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  endEventMessageLabel = this->fields.endEventMessageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, 0LL);
  if ( !endEventMessageLabel )
    goto LABEL_19;
  UILabel__set_text(endEventMessageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallback,
    (int64_t)closeCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      CommandAssistLvUpListViewManager__CreateList(
        (CommandAssistLvUpListViewManager_o *)gameObject,
        eventId,
        missionId,
        v40);
      goto LABEL_18;
    }
LABEL_19:
    sub_1BCAA3C(gameObject, v24);
  }
LABEL_18:
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v39, v40);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A3BF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A3BF = 1;
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