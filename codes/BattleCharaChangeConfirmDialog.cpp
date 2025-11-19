void BattleCharaChangeConfirmDialog___ctor(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB1501 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB1501 = 1;
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

  if ( (byte_4CB14FD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleCharaChangeConfirmDialog_EndClose__);
    byte_4CB14FD = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C6BC60(0, method);
  BattleCharaChangeConfirmListViewManager__DestroyList(listViewManager, method);
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
    sub_1C6BC60(listViewManager, method);
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

  if ( (byte_4CB14FB & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3680/*"COMMON_CONFIRM_NO"*/);
    sub_1C6BA08(&StringLiteral_3685/*"COMMON_CONFIRM_YES"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB14FB = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_YES"*/, 0);
  if ( !buttonDecideLabel
    || (UILabel__set_text(buttonDecideLabel, (System_String_o *)messageLabel, 0),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_NO"*/, 0),
        !buttonCancelLabel)
    || (UILabel__set_text(buttonCancelLabel, (System_String_o *)messageLabel, 0),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C6BC60(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void BattleCharaChangeConfirmDialog__OnClickCancel(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleCharaChangeConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB14FF & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleCharaChangeConfirmDialog_OnClickCancel__);
    byte_4CB14FF = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BattleCharaChangeConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleCharaChangeConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_BattleCharaChangeConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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

  if ( (byte_4CB14FE & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleCharaChangeConfirmDialog_OnClickDecide__);
    byte_4CB14FE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BattleCharaChangeConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_BattleCharaChangeConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_BattleCharaChangeConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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
  UILabel_o *messageLabel; // x21
  System_String_o *listViewManager; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_4CB14FC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleCharaChangeConfirmDialog_EndOpen__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11897/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE_ADD"*/);
    byte_4CB14FC = 1;
  }
  this->fields.clickFunc = func;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, (int32_t)itemInfo, method);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  listViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11897/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE_ADD"*/, 0);
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, listViewManager, 0);
  listViewManager = (System_String_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_10;
  BattleCharaChangeConfirmListViewManager__CreateList(
    (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
    itemInfo,
    v10);
  listViewManager = (System_String_o *)this->fields.listViewManager;
  if ( !listViewManager
    || (BattleCharaChangeConfirmListViewManager__RequestListObject(
          (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
          2,
          v11),
        this->fields.isButtonEnable = 0,
        v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleCharaChangeConfirmDialog_EndOpen__, 0),
        BaseDialog__SafeOpen((BaseDialog_o *)this, v12, 0, 0),
        (listViewManager = (System_String_o *)this->fields.listViewManager) == 0) )
  {
LABEL_10:
    sub_1C6BC60(listViewManager, v9);
  }
  BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
    (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
    v9);
}


System_String_o *BattleCharaChangeConfirmDialog__get_closeBtnPath(
        BattleCharaChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB1500 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4CB1500 = 1;
  }
  return (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/;
}


void BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9A6B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9A66C;
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
  if ( (byte_4CB1502 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB1502 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void BattleCharaChangeConfirmDialog_ClickDelegate__EndInvoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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