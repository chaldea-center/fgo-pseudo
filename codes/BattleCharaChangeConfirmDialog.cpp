void __fastcall BattleCharaChangeConfirmDialog___ctor(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B40296 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B40296 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmDialog__Awake(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleCharaChangeConfirmDialog__Close(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleCharaChangeConfirmListViewManager_o *listViewManager; // x0
  System_Action_o *v5; // x20

  if ( (byte_4B40292 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_BattleCharaChangeConfirmDialog_EndClose__, v3);
    byte_4B40292 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1BDBAD4(0LL, method);
  BattleCharaChangeConfirmListViewManager__DestroyList(listViewManager, method);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleCharaChangeConfirmDialog_EndClose__, 0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall BattleCharaChangeConfirmDialog__EndClose(
        BattleCharaChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewManager_o *listViewManager; // x0
  const MethodInfo *v4; // x1

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(listViewManager, method),
        BattleCharaChangeConfirmDialog__Init(this, v4),
        (listViewManager = (BattleCharaChangeConfirmListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0LL)) == 0LL) )
  {
    sub_1BDBAD4(listViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
}


void __fastcall BattleCharaChangeConfirmDialog__EndOpen(
        BattleCharaChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall BattleCharaChangeConfirmDialog__Init(BattleCharaChangeConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *buttonDecideLabel; // x20
  UILabel_o *buttonCancelLabel; // x20

  if ( (byte_4B40290 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, v3);
    sub_1BDB878(&StringLiteral_3725/*"COMMON_CONFIRM_YES"*/, v4);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B40290 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel
    || (UILabel__set_text(buttonDecideLabel, (System_String_o *)messageLabel, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, 0LL),
        !buttonCancelLabel)
    || (UILabel__set_text(buttonCancelLabel, (System_String_o *)messageLabel, 0LL),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmDialog__OnClickCancel(
        BattleCharaChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleCharaChangeConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B40294 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleCharaChangeConfirmDialog_OnClickCancel__, method);
    byte_4B40294 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BattleCharaChangeConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleCharaChangeConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_BattleCharaChangeConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall BattleCharaChangeConfirmDialog__OnClickDecide(
        BattleCharaChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleCharaChangeConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B40293 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleCharaChangeConfirmDialog_OnClickDecide__, method);
    byte_4B40293 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BattleCharaChangeConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_BattleCharaChangeConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_BattleCharaChangeConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall BattleCharaChangeConfirmDialog__Open(
        BattleCharaChangeConfirmDialog_o *this,
        BattleCharaChangeConfirmDialog_ClickDelegate_o *func,
        BattleCharaChangeConfirmListViewItem_o *itemInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *messageLabel; // x21
  System_String_o *listViewManager; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_4B40291 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, func);
    sub_1BDB878(&Method_BattleCharaChangeConfirmDialog_EndOpen__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_11867/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE_ADD"*/, v9);
    byte_4B40291 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, (int32_t)itemInfo, method);
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  listViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11867/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MESSAGE_ADD"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, listViewManager, 0LL);
  listViewManager = (System_String_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_10;
  BattleCharaChangeConfirmListViewManager__CreateList(
    (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
    itemInfo,
    v13);
  listViewManager = (System_String_o *)this->fields.listViewManager;
  if ( !listViewManager
    || (BattleCharaChangeConfirmListViewManager__RequestListObject(
          (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
          2,
          v14),
        this->fields.isButtonEnable = 0,
        v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleCharaChangeConfirmDialog_EndOpen__, 0LL),
        BaseDialog__SafeOpen((BaseDialog_o *)this, v15, 0, 0LL),
        (listViewManager = (System_String_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(listViewManager, v12);
  }
  BattleCharaChangeConfirmListViewManager__ResetScrollViewPosition(
    (BattleCharaChangeConfirmListViewManager_o *)listViewManager,
    v12);
}


System_String_o *__fastcall BattleCharaChangeConfirmDialog__get_closeBtnPath(
        BattleCharaChangeConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B40295 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15616/*"Window/CancelButton"*/, method);
    byte_4B40295 = 1;
  }
  return (System_String_o *)StringLiteral_15616/*"Window/CancelButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1E8E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1E8A0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleCharaChangeConfirmDialog_ClickDelegate__BeginInvoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B40297 & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, isDecide);
    byte_4B40297 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall BattleCharaChangeConfirmDialog_ClickDelegate__EndInvoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall BattleCharaChangeConfirmDialog_ClickDelegate__Invoke(
        BattleCharaChangeConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}