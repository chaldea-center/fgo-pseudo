void __fastcall MasterMissionReceiveResultDialog___ctor(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E3A4 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5E3A4 = 1;
  }
  this->fields.state = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveResultDialog__Init(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *receiveResultListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeLabel; // x20

  if ( (byte_4A5E3A1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8537/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_8536/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/);
    byte_4A5E3A1 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  receiveResultListViewManager = (ListViewManager_o *)this->fields.receiveResultListViewManager;
  if ( !receiveResultListViewManager )
    goto LABEL_10;
  ListViewManager__DestroyList(receiveResultListViewManager, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_8537/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/,
                                                        0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)receiveResultListViewManager, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8536/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/,
                                                              0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)receiveResultListViewManager, 0LL),
        closeLabel = this->fields.closeLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/,
                                                              0LL),
        !closeLabel) )
  {
LABEL_10:
    sub_1B8880C(receiveResultListViewManager, v3);
  }
  UILabel__set_text(closeLabel, (System_String_o *)receiveResultListViewManager, 0LL);
  this->fields.state = 1;
}


void __fastcall MasterMissionReceiveResultDialog__OnClickCloseButton(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5E3A2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__);
    byte_4A5E3A2 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_MasterMissionReceiveResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.state = 1;
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall MasterMissionReceiveResultDialog__Open(
        MasterMissionReceiveResultDialog_o *this,
        System_Int32_array *receiveMissionIds,
        System_Action_o *action,
        const MethodInfo *method)
{
  BaseDialog_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  MasterMissionReceiveResultListViewManager_o *panelDepthList; // x0

  v6 = (BaseDialog_o *)this;
  ((void (__fastcall *)(MasterMissionReceiveResultDialog_o *, void *, System_Action_o *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    action,
    method);
  BaseDialog__Open(v6, 0LL, 0, 0LL);
  v6[1].fields.basePanelList = (struct UIPanel_array *)action;
  v6 = (BaseDialog_o *)((char *)v6 + 136);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v6, (int32_t)action, v7, v8);
  panelDepthList = (MasterMissionReceiveResultListViewManager_o *)v6[-1].fields.panelDepthList;
  LODWORD(v6[-1].fields._closeBtnObject) = 0;
  if ( !panelDepthList )
    sub_1B8880C(0LL, v9);
  MasterMissionReceiveResultListViewManager__CreateList(panelDepthList, receiveMissionIds, v10);
}


void __fastcall MasterMissionReceiveResultDialog___OnClickCloseButton_b__9_0(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeAction; // x8

  closeAction = this->fields.closeAction;
  if ( closeAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeAction->fields.m_target)(
      closeAction->fields.original_method_info,
      *(_QWORD *)&closeAction->fields.extra_arg);
  ((void (__fastcall *)(MasterMissionReceiveResultDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


System_String_o *__fastcall MasterMissionReceiveResultDialog__get_closeBtnPath(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E3A3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4A5E3A3 = 1;
  }
  return (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/;
}