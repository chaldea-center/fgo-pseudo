void BattleCharaChangeConfirmDialog___ctor(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BAB4 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596BAB4 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BattleCharaChangeConfirmDialog__Awake(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void BattleCharaChangeConfirmDialog__Close(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewManager_o *listViewManager; // x0
  System_Action_c *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596BAB0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmDialog_EndClose__);
    byte_596BAB0 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_2213CDC(0, method);
  BattleCharaChangeConfirmListViewManager__DestroyList(listViewManager, method);
  v4 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_2213CCC(v4);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleCharaChangeConfirmDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
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
    sub_2213CDC(listViewManager, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20

  if ( (byte_596BAAE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BAAE = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
  if ( !buttonDecideLabel
    || (UILabel__set_text(buttonDecideLabel, (System_String_o *)messageLabel, 0),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0),
        !buttonCancelLabel)
    || (UILabel__set_text(buttonCancelLabel, (System_String_o *)messageLabel, 0),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_2213CDC(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void BattleCharaChangeConfirmDialog__OnClickCancel(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleCharaChangeConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596BAB2 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleCharaChangeConfirmDialog_OnClickCancel__);
    byte_596BAB2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BattleCharaChangeConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleCharaChangeConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_BattleCharaChangeConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596BAB1 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleCharaChangeConfirmDialog_OnClickDecide__);
    byte_596BAB1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BattleCharaChangeConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_BattleCharaChangeConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_BattleCharaChangeConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *messageLabel; // x21
  System_String_o *listViewManager; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  System_Action_c *v18; // x0
  System_Action_o *v19; // x20

  if ( (byte_596BAAF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmDialog_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12409/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE_ADD"*/);
    byte_596BAAF = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (System_String_o *)itemInfo,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  messageLabel = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  listViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_12409/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE_ADD"*/, 0);
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, listViewManager, 0);
  listViewManager = (System_String_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_10;
  BattleCharaChangeConfirmListViewManager__CreateList(
    (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
    itemInfo,
    v16);
  listViewManager = (System_String_o *)this->fields.listViewManager;
  if ( !listViewManager
    || (BattleCharaChangeConfirmListViewManager__RequestListObject(
          (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
          2,
          v17),
        v18 = System_Action_TypeInfo,
        this->fields.isButtonEnable = 0,
        v19 = (System_Action_o *)sub_2213CCC(v18),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_BattleCharaChangeConfirmDialog_EndOpen__, 0),
        BaseDialog__SafeOpen((BaseDialog_o *)this, v19, 0, 0),
        (listViewManager = (System_String_o *)this->fields.listViewManager) == 0) )
  {
LABEL_10:
    sub_2213CDC(listViewManager, v15);
  }
  BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
    (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
    v15);
}


System_String_o *BattleCharaChangeConfirmDialog__get_closeBtnPath(
        BattleCharaChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_596BAB3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596BAB3 = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


void BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2002B40;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2002AF8;
}


System_IAsyncResult_o *BattleCharaChangeConfirmDialog_ClickDelegate__BeginInvoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void BattleCharaChangeConfirmDialog_ClickDelegate__EndInvoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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