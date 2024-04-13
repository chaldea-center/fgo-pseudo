void __fastcall MasterMissionReceiveResultDialog___ctor(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E89F5 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89F5 = 1;
  }
  this->fields.state = 1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveResultDialog__Init(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  ListViewManager_o *receiveResultListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeLabel; // x20

  if ( (byte_42E89F2 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8734/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_8733/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/, v11, v12, v13);
    byte_42E89F2 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  receiveResultListViewManager = (ListViewManager_o *)this->fields.receiveResultListViewManager;
  if ( !receiveResultListViewManager )
    goto LABEL_11;
  ListViewManager__DestroyList(receiveResultListViewManager, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_8734/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/,
                                                        0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)receiveResultListViewManager, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8733/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/,
                                                              0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)receiveResultListViewManager, 0LL),
        closeLabel = this->fields.closeLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/,
                                                              0LL),
        !closeLabel) )
  {
LABEL_11:
    sub_B5D69C(receiveResultListViewManager, v14);
  }
  UILabel__set_text(closeLabel, (System_String_o *)receiveResultListViewManager, 0LL);
  this->fields.state = 1;
}


void __fastcall MasterMissionReceiveResultDialog__OnClickCloseButton(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_42E89F3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MasterMissionReceiveResultDialog_OnClickCloseButton__, v5, v6, v7);
    sub_B5D5C4(&Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__, v8, v9, v10);
    byte_42E89F3 = 1;
  }
  if ( !this->fields.state )
  {
    v11 = Method_MasterMissionReceiveResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveResultDialog_OnClickCloseButton__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    this->fields.state = 1;
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall MasterMissionReceiveResultDialog__Open(
        MasterMissionReceiveResultDialog_o *this,
        System_Int32_array *receiveMissionIds,
        System_Action_o *action,
        const MethodInfo *method)
{
  BaseDialog_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  MasterMissionReceiveResultListViewManager_o *panelDepthList; // x0

  v6 = (BaseDialog_o *)this;
  ((void (__fastcall *)(MasterMissionReceiveResultDialog_o *, void *, System_Action_o *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    action,
    method);
  BaseDialog__Open(v6, 0LL, 0, 0LL);
  v6[1].fields.baseWindow = (struct UnityEngine_GameObject_o *)action;
  v6 = (BaseDialog_o *)((char *)v6 + 128);
  sub_B5D560((BattleServantConfConponent_o *)v6, (System_Int32_array **)action, v7, v8, v9, v10, v11, v12);
  panelDepthList = (MasterMissionReceiveResultListViewManager_o *)v6[-1].fields.panelDepthList;
  LODWORD(v6[-1].fields._closeBtnObject) = 0;
  if ( !panelDepthList )
    sub_B5D69C(0LL, v13);
  MasterMissionReceiveResultListViewManager__CreateList(panelDepthList, receiveMissionIds, v14);
}


void __fastcall MasterMissionReceiveResultDialog___OnClickCloseButton_b__9_0(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *closeAction; // x0

  closeAction = this->fields.closeAction;
  if ( closeAction )
    System_Action__Invoke(closeAction, 0LL);
  ((void (__fastcall *)(MasterMissionReceiveResultDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


System_String_o *__fastcall MasterMissionReceiveResultDialog__get_closeBtnPath(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E89F4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15669/*"Window/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E89F4 = 1;
  }
  return (System_String_o *)StringLiteral_15669/*"Window/CloseButton"*/;
}