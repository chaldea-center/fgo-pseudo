void MasterMissionReceiveConfirmDialog___ctor(MasterMissionReceiveConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CCA617 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CCA617 = 1;
  }
  this->fields.state = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MasterMissionReceiveConfirmDialog__Init(MasterMissionReceiveConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  MasterMissionReceiveConfirmListViewManager_o *receiveConfirmListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *subTitleSmallLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20

  if ( (byte_4CCA613 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8559/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_8562/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/);
    sub_1C713B0(&StringLiteral_8561/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/);
    sub_1C713B0(&StringLiteral_8560/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_8563/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/);
    byte_4CCA613 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  receiveConfirmListViewManager = this->fields.receiveConfirmListViewManager;
  if ( !receiveConfirmListViewManager )
    goto LABEL_12;
  MasterMissionReceiveConfirmListViewManager__DestroyList(receiveConfirmListViewManager, v3);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8563/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/,
                                                                                    0);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)receiveConfirmListViewManager, 0);
  subTitleLabel = this->fields.subTitleLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8561/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/,
                                                                                    0);
  if ( !subTitleLabel )
    goto LABEL_12;
  UILabel__set_text(subTitleLabel, (System_String_o *)receiveConfirmListViewManager, 0);
  subTitleSmallLabel = this->fields.subTitleSmallLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8562/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/,
                                                                                    0);
  if ( !subTitleSmallLabel
    || (UILabel__set_text(subTitleSmallLabel, (System_String_o *)receiveConfirmListViewManager, 0),
        cancelLabel = this->fields.cancelLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8559/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/,
                                                                                          0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)receiveConfirmListViewManager, 0),
        decideLabel = this->fields.decideLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8560/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/,
                                                                                          0),
        !decideLabel) )
  {
LABEL_12:
    sub_1C71608(receiveConfirmListViewManager, v3);
  }
  UILabel__set_text(decideLabel, (System_String_o *)receiveConfirmListViewManager, 0);
  this->fields.state = 2;
}


void MasterMissionReceiveConfirmDialog__OnClickCancelButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CCA614 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__);
    sub_1C713B0(&Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__);
    byte_4CCA614 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void MasterMissionReceiveConfirmDialog__OnClickDecideButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CCA615 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__);
    sub_1C713B0(&Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__);
    byte_4CCA615 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void MasterMissionReceiveConfirmDialog__Open(
        MasterMissionReceiveConfirmDialog_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *receiveItems,
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmDialog_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  MasterMissionReceiveConfirmListViewManager_o *v15; // x0

  v6 = this;
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, const MethodInfo *, MasterMissionReceiveConfirmDialog_ClickDelegate_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method,
    callback,
    method);
  BaseDialog__Open((BaseDialog_o *)v6, 0, 0, 0, 0);
  v6->fields.clickFunc = callback;
  v6 = (MasterMissionReceiveConfirmDialog_o *)((char *)v6 + 152);
  sub_1C71354((GrandQuestFolderBoardItem_o *)v6, (int32_t)callback, v7, v8, v9, v10, v11, v12);
  v15 = *(MasterMissionReceiveConfirmListViewManager_o **)&v6[-1].fields.state;
  LODWORD(v6->monitor) = 0;
  if ( !v15 )
    sub_1C71608(0, v13);
  MasterMissionReceiveConfirmListViewManager__CreateList(v15, receiveItems, v14);
}


void MasterMissionReceiveConfirmDialog___OnClickCancelButton_b__12_0(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmDialog_ClickDelegate_o *clickFunc; // x8

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      0,
      clickFunc->fields.method);
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}


void MasterMissionReceiveConfirmDialog___OnClickDecideButton_b__13_0(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmDialog_ClickDelegate_o *clickFunc; // x8

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      1,
      clickFunc->fields.method);
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}


System_String_o *MasterMissionReceiveConfirmDialog__get_closeBtnPath(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CCA616 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15645/*"Window/CancelButton"*/);
    byte_4CCA616 = 1;
  }
  return (System_String_o *)StringLiteral_15645/*"Window/CancelButton"*/;
}


void MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAA6F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAA6AC;
}


System_IAsyncResult_o *MasterMissionReceiveConfirmDialog_ClickDelegate__BeginInvoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CCA618 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CCA618 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void MasterMissionReceiveConfirmDialog_ClickDelegate__EndInvoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void MasterMissionReceiveConfirmDialog_ClickDelegate__Invoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}