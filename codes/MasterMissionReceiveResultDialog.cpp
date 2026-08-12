void MasterMissionReceiveResultDialog___ctor(MasterMissionReceiveResultDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0

  if ( (byte_597438E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_597438E = 1;
  }
  v3 = BaseDialog_TypeInfo;
  this->fields.state = 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MasterMissionReceiveResultDialog__Init(MasterMissionReceiveResultDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *receiveResultListViewManager; // x0
  __int64 v5; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeLabel; // x20

  if ( (byte_597438B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8928/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_8927/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/);
    byte_597438B = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  receiveResultListViewManager = (ListViewManager_o *)this->fields.receiveResultListViewManager;
  if ( !receiveResultListViewManager )
    goto LABEL_10;
  ListViewManager__DestroyList(receiveResultListViewManager, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8928/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)receiveResultListViewManager, 0),
        subTitleLabel = this->fields.subTitleLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8927/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/,
                                                              0),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)receiveResultListViewManager, 0),
        closeLabel = this->fields.closeLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/,
                                                              0),
        !closeLabel) )
  {
LABEL_10:
    sub_2213CDC(receiveResultListViewManager, v3);
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

  if ( (byte_597438C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    sub_2213A60(&Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__);
    byte_597438C = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_MasterMissionReceiveResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.state = 1;
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  MasterMissionReceiveResultListViewManager_o *v15; // x0

  v6 = (BaseDialog_o *)this;
  ((void (__fastcall *)(MasterMissionReceiveResultDialog_o *, const MethodInfo *, System_Action_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method,
    action,
    method);
  BaseDialog__Open(v6, 0, 0, 0, 0);
  v6[1].fields.basePanelList = (struct UIPanel_array *)action;
  v6 = (BaseDialog_o *)((char *)v6 + 144);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)action, v7, v8, v9, v10, v11, v12);
  v15 = *(MasterMissionReceiveResultListViewManager_o **)&v6[-1].fields.baseState;
  LODWORD(v6[-1].fields._closeBtnObject) = 0;
  if ( !v15 )
    sub_2213CDC(0, v13);
  MasterMissionReceiveResultListViewManager__CreateList(v15, receiveMissionIds, v14);
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
  if ( (byte_597438D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16261/*"Window/CloseButton"*/);
    byte_597438D = 1;
  }
  return (System_String_o *)StringLiteral_16261/*"Window/CloseButton"*/;
}