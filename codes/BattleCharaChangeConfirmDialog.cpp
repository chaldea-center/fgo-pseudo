void BattleCharaChangeConfirmDialog___ctor(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D27786 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D27786 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BattleCharaChangeConfirmDialog__Awake(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void BattleCharaChangeConfirmDialog__Close(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewManager_o *listViewManager; // x0
  System_Action_o *v4; // x20

  if ( (byte_4D27782 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleCharaChangeConfirmDialog_EndClose__);
    byte_4D27782 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C942F0(0, method);
  BattleCharaChangeConfirmListViewManager__DestroyList(listViewManager, method);
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleCharaChangeConfirmDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v4, 0);
}


void BattleCharaChangeConfirmDialog__EndClose(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewManager_o *listViewManager; // x0
  const MethodInfo *v4; // x1

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(listViewManager, method),
        BattleCharaChangeConfirmDialog__Init(this, v4),
        (listViewManager = (BattleCharaChangeConfirmListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0)) == 0) )
  {
    sub_1C942F0(listViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void BattleCharaChangeConfirmDialog__EndOpen(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void BattleCharaChangeConfirmDialog__Init(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20

  if ( (byte_4D27780 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3693/*"COMMON_CONFIRM_NO"*/);
    sub_1C94098(&StringLiteral_3698/*"COMMON_CONFIRM_YES"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27780 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMON_CONFIRM_YES"*/, 0);
  if ( !buttonDecideLabel
    || (UILabel__set_text(buttonDecideLabel, (System_String_o *)messageLabel, 0),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_NO"*/, 0),
        !buttonCancelLabel)
    || (UILabel__set_text(buttonCancelLabel, (System_String_o *)messageLabel, 0),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C942F0(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void BattleCharaChangeConfirmDialog__OnClickCancel(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleCharaChangeConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D27784 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleCharaChangeConfirmDialog_OnClickCancel__);
    byte_4D27784 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BattleCharaChangeConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleCharaChangeConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_BattleCharaChangeConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void BattleCharaChangeConfirmDialog__OnClickDecide(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleCharaChangeConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D27783 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleCharaChangeConfirmDialog_OnClickDecide__);
    byte_4D27783 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BattleCharaChangeConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_BattleCharaChangeConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_BattleCharaChangeConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void BattleCharaChangeConfirmDialog__Open(
        BattleCharaChangeConfirmDialog_o *this,
        BattleCharaChangeConfirmDialog_ClickDelegate_o *func,
        BattleCharaChangeConfirmListViewItem_o *itemInfo,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UILabel_o *messageLabel; // x21
  System_String_o *listViewManager; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_4D27781 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleCharaChangeConfirmDialog_EndOpen__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11945/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE_ADD"*/);
    byte_4D27781 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)itemInfo,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  listViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11945/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE_ADD"*/, 0);
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, listViewManager, 0);
  listViewManager = (System_String_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_10;
  BattleCharaChangeConfirmListViewManager__CreateList(
    (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
    itemInfo,
    v14);
  listViewManager = (System_String_o *)this->fields.listViewManager;
  if ( !listViewManager
    || (BattleCharaChangeConfirmListViewManager__RequestListObject(
          (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
          2,
          v15),
        this->fields.isButtonEnable = 0,
        v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_BattleCharaChangeConfirmDialog_EndOpen__, 0),
        BaseDialog__SafeOpen((BaseDialog_o *)this, v16, 0, 0),
        (listViewManager = (System_String_o *)this->fields.listViewManager) == 0) )
  {
LABEL_10:
    sub_1C942F0(listViewManager, v13);
  }
  BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
    (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
    v13);
}


System_String_o *BattleCharaChangeConfirmDialog__get_closeBtnPath(
        BattleCharaChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D27785 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15698/*"Window/CancelButton"*/);
    byte_4D27785 = 1;
  }
  return (System_String_o *)StringLiteral_15698/*"Window/CancelButton"*/;
}


void BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC0E9C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0E54;
}


System_IAsyncResult_o *BattleCharaChangeConfirmDialog_ClickDelegate__BeginInvoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4D27787 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D27787 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void BattleCharaChangeConfirmDialog_ClickDelegate__EndInvoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void BattleCharaChangeConfirmDialog_ClickDelegate__Invoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}