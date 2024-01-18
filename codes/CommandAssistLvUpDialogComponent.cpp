void __fastcall CommandAssistLvUpDialogComponent___ctor(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418807F & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418807F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__Init(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_418807B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418807B = 1;
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
    sub_B2C434(titleLabel, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__OnClickCloseButton(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_418807D & 1) == 0 )
  {
    sub_B2C35C(&Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__, method);
    byte_418807D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v29; // x3
  System_Action_o *v30; // x20

  if ( (byte_418807C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, v9);
    sub_B2C35C(&CondType_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_5589/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, v13);
    sub_B2C35C(&StringLiteral_5590/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, v14);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v15);
    byte_418807C = 1;
  }
  CommandAssistLvUpDialogComponent__Init(this, *(const MethodInfo **)&eventId);
  this->fields.state = 1;
  this->fields.eventId = eventId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.endEventMessageLabel;
  if ( !gameObject )
    goto LABEL_22;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)CondType__IsOpen(20, eventId, 0LL, 0, 0LL);
  if ( !v18 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v18, (unsigned __int8)gameObject & 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5590/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_22;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  endEventMessageLabel = this->fields.endEventMessageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5589/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, 0LL);
  if ( !endEventMessageLabel )
    goto LABEL_22;
  UILabel__set_text(endEventMessageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
      CommandAssistLvUpListViewManager__CreateList(
        (CommandAssistLvUpListViewManager_o *)gameObject,
        eventId,
        missionId,
        v29);
      goto LABEL_21;
    }
LABEL_22:
    sub_B2C434(gameObject, v17);
  }
LABEL_21:
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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

  if ( (byte_418807E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418807E = 1;
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