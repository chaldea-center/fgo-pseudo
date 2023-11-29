void __fastcall CommandAssistLvUpDialogComponent___ctor(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA536 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA536 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__Init(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x0
  UILabel_o *endEventMessageLabel; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_40FA532 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FA532 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1, 0LL),
        (endEventMessageLabel = this->fields.endEventMessageLabel) == 0LL)
    || (UILabel__set_text(endEventMessageLabel, (System_String_o *)StringLiteral_1, 0LL),
        (v6 = (UnityEngine_Component_o *)this->fields.endEventMessageLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
}


void __fastcall CommandAssistLvUpDialogComponent__OnClickCloseButton(
        CommandAssistLvUpDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_40FA534 & 1) == 0 )
  {
    sub_B16FFC(&Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__, method);
    byte_40FA534 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_CommandAssistLvUpDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
  UnityEngine_Component_o *endEventMessageLabel; // x0
  UnityEngine_GameObject_o *v18; // x23
  bool IsOpen; // w0
  UILabel_o *titleLabel; // x23
  System_String_o *v21; // x0
  UILabel_o *closeLabel; // x23
  System_String_o *v23; // x0
  UILabel_o *v24; // x23
  System_String_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *listViewManager; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  __int64 v36; // x4
  CommandAssistLvUpListViewManager_o *v37; // x0
  System_Action_o *v38; // x20

  if ( (byte_40FA533 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, v9);
    sub_B16FFC(&CondType_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_5574, v13);
    sub_B16FFC(&StringLiteral_5575, v14);
    sub_B16FFC(&StringLiteral_3252, v15);
    byte_40FA533 = 1;
  }
  CommandAssistLvUpDialogComponent__Init(this, *(const MethodInfo **)&eventId);
  this->fields.state = 1;
  this->fields.eventId = eventId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  endEventMessageLabel = (UnityEngine_Component_o *)this->fields.endEventMessageLabel;
  if ( !endEventMessageLabel )
    goto LABEL_22;
  v18 = UnityEngine_Component__get_gameObject(endEventMessageLabel, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(20, eventId, 0LL, 0, 0LL);
  if ( !v18 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v18, IsOpen, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5575, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, v21, 0LL);
  closeLabel = this->fields.closeLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !closeLabel )
    goto LABEL_22;
  UILabel__set_text(closeLabel, v23, 0LL);
  v24 = this->fields.endEventMessageLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5574, 0LL);
  if ( !v24 )
    goto LABEL_22;
  UILabel__set_text(v24, v25, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    v37 = this->fields.listViewManager;
    if ( v37 )
    {
      CommandAssistLvUpListViewManager__CreateList(v37, eventId, missionId, v35);
      goto LABEL_21;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_21:
  v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_CommandAssistLvUpDialogComponent__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FA535 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA535 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}