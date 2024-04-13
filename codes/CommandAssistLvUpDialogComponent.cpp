void __fastcall CommandAssistLvUpDialogComponent___ctor(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8B6A & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8B6A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__Init(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_42E8B66 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E8B66 = 1;
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
    sub_B5D69C(titleLabel, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__OnClickCloseButton(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_42E8B68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__, (_DWORD)method, v2, v3);
    byte_42E8B68 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v5 = Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x23
  UILabel_o *titleLabel; // x23
  UILabel_o *closeLabel; // x23
  UILabel_o *endEventMessageLabel; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v43; // x3
  System_Action_o *v44; // x20

  if ( (byte_42E8B67 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, missionId, closeCallback);
    sub_B5D5C4(&Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, v9, v10, v11);
    sub_B5D5C4(&CondType_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5666/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_5667/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v27, v28, v29);
    byte_42E8B67 = 1;
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
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)CondType__IsOpen(20, eventId, 0LL, 0, 0LL);
  if ( !v32 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v32, (unsigned __int8)gameObject & 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_COMMAND_ASSIST_LEVEL_UP_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_22;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  endEventMessageLabel = this->fields.endEventMessageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_COMMAND_ASSIST_EVENT_END_MSG"*/, 0LL);
  if ( !endEventMessageLabel )
    goto LABEL_22;
  UILabel__set_text(endEventMessageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
        v43);
      goto LABEL_21;
    }
LABEL_22:
    sub_B5D69C(gameObject, v31);
  }
LABEL_21:
  v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E8B69 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8B69 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}