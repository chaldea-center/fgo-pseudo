void __fastcall MasterMissionReceiveConfirmDialog___ctor(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B69DCA & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B69DCA = 1;
  }
  this->fields.state = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveConfirmDialog__Init(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  MasterMissionReceiveConfirmListViewManager_o *receiveConfirmListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *subTitleSmallLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20

  if ( (byte_4B69DC6 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_8676/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/, v3);
    sub_1BE4ACC(&StringLiteral_8679/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/, v4);
    sub_1BE4ACC(&StringLiteral_8678/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/, v5);
    sub_1BE4ACC(&StringLiteral_8677/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/, v6);
    sub_1BE4ACC(&StringLiteral_8680/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/, v7);
    byte_4B69DC6 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  receiveConfirmListViewManager = this->fields.receiveConfirmListViewManager;
  if ( !receiveConfirmListViewManager )
    goto LABEL_12;
  MasterMissionReceiveConfirmListViewManager__DestroyList(receiveConfirmListViewManager, v8);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8680/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/,
                                                                                    0LL);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8678/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/,
                                                                                    0LL);
  if ( !subTitleLabel )
    goto LABEL_12;
  UILabel__set_text(subTitleLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  subTitleSmallLabel = this->fields.subTitleSmallLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8679/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/,
                                                                                    0LL);
  if ( !subTitleSmallLabel
    || (UILabel__set_text(subTitleSmallLabel, (System_String_o *)receiveConfirmListViewManager, 0LL),
        cancelLabel = this->fields.cancelLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8676/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/,
                                                                                          0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)receiveConfirmListViewManager, 0LL),
        decideLabel = this->fields.decideLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8677/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/,
                                                                                          0LL),
        !decideLabel) )
  {
LABEL_12:
    sub_1BE4D28(receiveConfirmListViewManager, v8);
  }
  UILabel__set_text(decideLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  this->fields.state = 2;
}


void __fastcall MasterMissionReceiveConfirmDialog__OnClickCancelButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B69DC7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__, v3);
    sub_1BE4ACC(&Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__, v4);
    byte_4B69DC7 = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    this->fields.state = 2;
    v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmDialog__OnClickDecideButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B69DC8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__, v3);
    sub_1BE4ACC(&Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__, v4);
    byte_4B69DC8 = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    this->fields.state = 2;
    v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmDialog__Open(
        MasterMissionReceiveConfirmDialog_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *receiveItems,
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmDialog_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  MasterMissionReceiveConfirmListViewManager_o *v15; // x0

  v6 = this;
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, void *, MasterMissionReceiveConfirmDialog_ClickDelegate_o *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    callback,
    method);
  BaseDialog__Open((BaseDialog_o *)v6, 0LL, 0, 0LL);
  v6->fields.clickFunc = callback;
  v6 = (MasterMissionReceiveConfirmDialog_o *)((char *)v6 + 144);
  sub_1BE4A70((PartyOrganizationUtility_o *)v6, (int64_t)callback, v7, v8, v9, v10, v11, v12);
  v15 = *(MasterMissionReceiveConfirmListViewManager_o **)&v6[-1].fields.state;
  LODWORD(v6->monitor) = 0;
  if ( !v15 )
    sub_1BE4D28(0LL, v13);
  MasterMissionReceiveConfirmListViewManager__CreateList(v15, receiveItems, v14);
}


void __fastcall MasterMissionReceiveConfirmDialog___OnClickCancelButton_b__12_0(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmDialog_ClickDelegate_o *clickFunc; // x8

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&clickFunc->fields.extra_arg);
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall MasterMissionReceiveConfirmDialog___OnClickDecideButton_b__13_0(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmDialog_ClickDelegate_o *clickFunc; // x8

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&clickFunc->fields.extra_arg);
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


System_String_o *__fastcall MasterMissionReceiveConfirmDialog__get_closeBtnPath(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B69DC9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15848/*"Window/CancelButton"*/, method);
    byte_4B69DC9 = 1;
  }
  return (System_String_o *)StringLiteral_15848/*"Window/CancelButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2A728;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2A6E0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__BeginInvoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B69DCB & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isDecide);
    byte_4B69DCB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__EndInvoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__Invoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}