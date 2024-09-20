void __fastcall MasterMissionReceiveConfirmDialog___ctor(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5DC51 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5DC51 = 1;
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
  const MethodInfo *v3; // x1
  MasterMissionReceiveConfirmListViewManager_o *receiveConfirmListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *subTitleSmallLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20

  if ( (byte_4A5DC4D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8530/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_8533/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/);
    sub_1B885B0(&StringLiteral_8532/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/);
    sub_1B885B0(&StringLiteral_8531/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8534/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/);
    byte_4A5DC4D = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  receiveConfirmListViewManager = this->fields.receiveConfirmListViewManager;
  if ( !receiveConfirmListViewManager )
    goto LABEL_12;
  MasterMissionReceiveConfirmListViewManager__DestroyList(receiveConfirmListViewManager, v3);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8534/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/,
                                                                                    0LL);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8532/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/,
                                                                                    0LL);
  if ( !subTitleLabel )
    goto LABEL_12;
  UILabel__set_text(subTitleLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  subTitleSmallLabel = this->fields.subTitleSmallLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8533/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/,
                                                                                    0LL);
  if ( !subTitleSmallLabel
    || (UILabel__set_text(subTitleSmallLabel, (System_String_o *)receiveConfirmListViewManager, 0LL),
        cancelLabel = this->fields.cancelLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8530/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/,
                                                                                          0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)receiveConfirmListViewManager, 0LL),
        decideLabel = this->fields.decideLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8531/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/,
                                                                                          0LL),
        !decideLabel) )
  {
LABEL_12:
    sub_1B8880C(receiveConfirmListViewManager, v3);
  }
  UILabel__set_text(decideLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  this->fields.state = 2;
}


void __fastcall MasterMissionReceiveConfirmDialog__OnClickCancelButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5DC4E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__);
    sub_1B885B0(&Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__);
    byte_4A5DC4E = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MasterMissionReceiveConfirmDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmDialog__OnClickDecideButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5DC4F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__);
    sub_1B885B0(&Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__);
    byte_4A5DC4F = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MasterMissionReceiveConfirmDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmDialog__Open(
        MasterMissionReceiveConfirmDialog_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *receiveItems,
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmDialog_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0

  v6 = this;
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, void *, MasterMissionReceiveConfirmDialog_ClickDelegate_o *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    callback,
    method);
  BaseDialog__Open((BaseDialog_o *)v6, 0LL, 0, 0LL);
  v6->fields.clickFunc = callback;
  v6 = (MasterMissionReceiveConfirmDialog_o *)((char *)v6 + 144);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v6, (int32_t)callback, v7, v8);
  v11 = *(MasterMissionReceiveConfirmListViewManager_o **)&v6[-1].fields.state;
  LODWORD(v6->monitor) = 0;
  if ( !v11 )
    sub_1B8880C(0LL, v9);
  MasterMissionReceiveConfirmListViewManager__CreateList(v11, receiveItems, v10);
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
  if ( (byte_4A5DC50 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A5DC50 = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D1904;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D18BC;
}


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
  if ( (byte_4A5DC52 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5DC52 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__EndInvoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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