void MasterMissionReceiveResultDialog___ctor(MasterMissionReceiveResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C46133 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C46133 = 1;
  }
  this->fields.state = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MasterMissionReceiveResultDialog__Init(MasterMissionReceiveResultDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *receiveResultListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeLabel; // x20

  if ( (byte_4C46130 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_8565/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_8564/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/);
    byte_4C46130 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  receiveResultListViewManager = (ListViewManager_o *)this->fields.receiveResultListViewManager;
  if ( !receiveResultListViewManager )
    goto LABEL_10;
  ListViewManager__DestroyList(receiveResultListViewManager, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8565/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)receiveResultListViewManager, 0),
        subTitleLabel = this->fields.subTitleLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8564/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/,
                                                              0),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)receiveResultListViewManager, 0),
        closeLabel = this->fields.closeLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/,
                                                              0),
        !closeLabel) )
  {
LABEL_10:
    sub_1C372B4(receiveResultListViewManager);
  }
  UILabel__set_text(closeLabel, (System_String_o *)receiveResultListViewManager, 0);
  this->fields.state = 1;
}


void MasterMissionReceiveResultDialog__OnClickCloseButton(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C46131 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    sub_1C37058(&Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__);
    byte_4C46131 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_MasterMissionReceiveResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.state = 1;
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void MasterMissionReceiveResultDialog__Open(
        MasterMissionReceiveResultDialog_o *this,
        System_Int32_array *receiveMissionIds,
        System_Action_o *action,
        const MethodInfo *method)
{
  BaseDialog_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  MasterMissionReceiveResultListViewManager_o *v10; // x0

  v6 = (BaseDialog_o *)this;
  ((void (__fastcall *)(MasterMissionReceiveResultDialog_o *, const MethodInfo *, System_Action_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method,
    action,
    method);
  BaseDialog__Open(v6, 0, 0, 0, 0);
  v6[1].fields.basePanelList = (struct UIPanel_array *)action;
  v6 = (BaseDialog_o *)((char *)v6 + 144);
  sub_1C36FFC((CGThumbnailListItem_o *)v6, (int32_t)action, v7, v8);
  v10 = *(MasterMissionReceiveResultListViewManager_o **)&v6[-1].fields.baseState;
  LODWORD(v6[-1].fields._closeBtnObject) = 0;
  if ( !v10 )
    sub_1C372B4(0);
  MasterMissionReceiveResultListViewManager__CreateList(v10, receiveMissionIds, v9);
}


void MasterMissionReceiveResultDialog___OnClickCloseButton_b__9_0(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeAction; // x8

  closeAction = this->fields.closeAction;
  if ( closeAction )
    ((void (__fastcall *)(intptr_t, intptr_t))closeAction->fields.invoke_impl)(
      closeAction->fields.method_code,
      closeAction->fields.method);
  ((void (__fastcall *)(MasterMissionReceiveResultDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}


System_String_o *MasterMissionReceiveResultDialog__get_closeBtnPath(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46132 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4C46132 = 1;
  }
  return (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/;
}