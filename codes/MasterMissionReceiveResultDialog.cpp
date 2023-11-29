void __fastcall MasterMissionReceiveResultDialog___ctor(
        MasterMissionReceiveResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB274 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB274 = 1;
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
  ListViewManager_o *receiveResultListViewManager; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v8; // x0
  UILabel_o *subTitleLabel; // x20
  System_String_o *v10; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v12; // x0

  if ( (byte_40FB271 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8618, v3);
    sub_B16FFC(&StringLiteral_3252, v4);
    sub_B16FFC(&StringLiteral_8617, v5);
    byte_40FB271 = 1;
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8618, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v8, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8617, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, v10, 0LL),
        closeLabel = this->fields.closeLabel,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL),
        !closeLabel) )
  {
LABEL_11:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, v12, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40FB272 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MasterMissionReceiveResultDialog_OnClickCloseButton__, v3);
    sub_B16FFC(&Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__, v4);
    byte_40FB272 = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_MasterMissionReceiveResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveResultDialog_OnClickCloseButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_MasterMissionReceiveResultDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    this->fields.state = 1;
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveResultDialog__OnClickCloseButton_b__9_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  const MethodInfo *v13; // x2
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
  sub_B16F98((BattleServantConfConponent_o *)v6, (System_Int32_array **)action, v7, v8, v9, v10, v11, v12);
  panelDepthList = (MasterMissionReceiveResultListViewManager_o *)v6[-1].fields.panelDepthList;
  LODWORD(v6[-1].fields._closeBtnObject) = 0;
  if ( !panelDepthList )
    sub_B170D4();
  MasterMissionReceiveResultListViewManager__CreateList(panelDepthList, receiveMissionIds, v13);
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
  if ( (byte_40FB273 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15416, method);
    byte_40FB273 = 1;
  }
  return (System_String_o *)StringLiteral_15416;
}