void __fastcall MasterMissionReceiveResultDialog___ctor(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189CCD & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189CCD = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewManager_o *receiveResultListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeLabel; // x20

  if ( (byte_4189CCA & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8647/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/, v3);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v4);
    sub_B2C35C(&StringLiteral_8646/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/, v5);
    byte_4189CCA = 1;
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
                                                        (System_String_o *)StringLiteral_8647/*"MASTER_MISSION_RECEIVE_RESULT_DLG_TITLE"*/,
                                                        0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)receiveResultListViewManager, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8646/*"MASTER_MISSION_RECEIVE_RESULT_DLG_MSG"*/,
                                                              0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)receiveResultListViewManager, 0LL),
        closeLabel = this->fields.closeLabel,
        receiveResultListViewManager = (ListViewManager_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/,
                                                              0LL),
        !closeLabel) )
  {
LABEL_11:
    sub_B2C434(receiveResultListViewManager, v6);
  }
  UILabel__set_text(closeLabel, (System_String_o *)receiveResultListViewManager, 0LL);
  this->fields.state = 1;
}


void __fastcall MasterMissionReceiveResultDialog__OnClickCloseButton(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4189CCB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MasterMissionReceiveResultDialog_OnClickCloseButton__, v3);
    sub_B2C35C(&Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__, v4);
    byte_4189CCB = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_MasterMissionReceiveResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveResultDialog_OnClickCloseButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    this->fields.state = 1;
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  sub_B2C2F8((BattleServantConfConponent_o *)v6, (System_Int32_array **)action, v7, v8, v9, v10, v11, v12);
  panelDepthList = (MasterMissionReceiveResultListViewManager_o *)v6[-1].fields.panelDepthList;
  LODWORD(v6[-1].fields._closeBtnObject) = 0;
  if ( !panelDepthList )
    sub_B2C434(0LL, v13);
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
  if ( (byte_4189CCC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15479/*"Window/CloseButton"*/, method);
    byte_4189CCC = 1;
  }
  return (System_String_o *)StringLiteral_15479/*"Window/CloseButton"*/;
}