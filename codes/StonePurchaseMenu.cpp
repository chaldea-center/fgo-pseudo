void StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC52BD & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC52BD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC52AC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC52AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.1,
      0);
  }
}


void StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4CC52B2 & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4CC52B2 = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0),
          ItemListViewManager = this->fields.ItemListViewManager,
          v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C715FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v7),
          !ItemListViewManager) )
    {
      sub_1C71608(buyItemMask, v3);
    }
    ItemListViewManager->fields.callbackFunc = v6;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
      (int32_t)v6,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    StonePurchaseListViewManager__SetMode_38778432(ItemListViewManager, 1, v14);
    this->fields.state = 2;
  }
}


void StonePurchaseMenu__Callback(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct StonePurchaseMenu_CallbackFunc_o *v9; // x20
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
}


void StonePurchaseMenu__Close(StonePurchaseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_4CC52AB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_StonePurchaseMenu_OnMoveEnd__);
    byte_4CC52AB = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0);
      BaseDialog__Close((BaseDialog_o *)this, v12, 0);
      return;
    }
LABEL_10:
    sub_1C71608(Instance, v11);
  }
  if ( callback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    BYTE1(Instance[2].klass) = 0;
  }
}


void StonePurchaseMenu__CloseStonePurchaseWarningDialog(
        StonePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4CC52B6 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass42_0__CloseStonePurchaseWarningDialog_b__0__);
    sub_1C713B0(&StonePurchaseMenu___c__DisplayClass42_0_TypeInfo);
    byte_4CC52B6 = 1;
  }
  v5 = sub_1C715FC(StonePurchaseMenu___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isDecide,
        *(_QWORD *)(v5 + 24) = this,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_StonePurchaseMenu___c__DisplayClass42_0__CloseStonePurchaseWarningDialog_b__0__,
          0),
        !Instance) )
  {
    sub_1C71608(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v15, 0);
}


void StonePurchaseMenu__EndBuyBankItemNotificationCancel(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x1

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1C71608(0, method);
  StonePurchaseNotificationMenu__Close_38800872(stonePurchaseNotificationMenu, 0, v2);
  StonePurchaseMenu__BackBuyBankItemConfirm(this, v5);
}


void StonePurchaseMenu__EndBuyBankItemNotificationSuccess(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1C71608(0, method);
  StonePurchaseNotificationMenu__Close_38800872(stonePurchaseNotificationMenu, 0, v2);
  StonePurchaseMenu__Callback(this, 2, v5);
}


void StonePurchaseMenu__EndBuyBankItemNotificationSuspend(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1C71608(0, method);
  StonePurchaseNotificationMenu__Close_38800872(stonePurchaseNotificationMenu, 0, v2);
  StonePurchaseMenu__Callback(this, 1, v5);
}


void StonePurchaseMenu__EndBuyBankItemNotificationWait(
        StonePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ErrorDialog_o *warningDialog; // x0
  const MethodInfo *v5; // x2

  if ( this->fields.state == 14 )
  {
    warningDialog = this->fields.warningDialog;
    if ( !warningDialog )
      sub_1C71608(0, isDecide);
    ErrorDialog__Close(warningDialog, 0);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4CC52AE & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4CC52AE = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close(spendLimitMenu, 0),
        ItemListViewManager = this->fields.ItemListViewManager,
        v5 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C715FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v6),
        !ItemListViewManager) )
  {
    sub_1C71608(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v5;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  StonePurchaseListViewManager__SetMode_38778432(ItemListViewManager, 1, v13);
  this->fields.state = 2;
}


void StonePurchaseMenu__Init(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_4CC52A9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC52A9 = 1;
  }
  this->fields.callbackFunc = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.refreshCallbackFunc, 0, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0) )
  {
    sub_1C71608(stoneDataLabel, v15);
  }
  ListViewManager__DestroyList((ListViewManager_o *)stoneDataLabel, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void StonePurchaseMenu__OnApplicationPause(StonePurchaseMenu_o *this, bool pauseStatus, const MethodInfo *method)
{
  if ( (byte_4CC52BB & 1) != 0 )
  {
    if ( pauseStatus )
      return;
  }
  else
  {
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    byte_4CC52BB = 1;
    if ( pauseStatus )
      return;
  }
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PurchaseBehaviour__ActivateExternal(0);
}


void StonePurchaseMenu__OnClickAnxOnline(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_String_o *Empty; // x19
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  System_String_o *v9; // x0
  __int64 v10; // x1
  StonePurchaseMenu___c_c *v11; // x8
  System_String_o *v12; // x23
  CommonConfirmDialog_ClickDelegate_o *_9__48_0; // x24
  Il2CppObject *v14; // x25
  struct StonePurchaseMenu___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BalanceConfig_c *v22; // x0
  BalanceConfig_c *v23; // x0
  System_String_o *anxOnlineUrl; // x19

  if ( (byte_4CC52BA & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_StonePurchaseMenu_OnClickAnxOnline__);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu___c__OnClickAnxOnline_b__48_0__);
    sub_1C713B0(&StonePurchaseMenu___c_TypeInfo);
    sub_1C713B0(&StringLiteral_12379/*"STONE_PURCHASE_ACCESS_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_12380/*"STONE_PURCHASE_ACCESS_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_12378/*"STONE_PURCHASE_ACCESS_CONFIRM_CANCEL"*/);
    byte_4CC52BA = 1;
  }
  v3 = Method_StonePurchaseMenu_OnClickAnxOnline__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickAnxOnline__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_OnClickAnxOnline__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.isEnableAccessConfirmation )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12380/*"STONE_PURCHASE_ACCESS_CONFIRM_MESSAGE"*/, 0);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12379/*"STONE_PURCHASE_ACCESS_CONFIRM_DECIDE"*/, 0);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12378/*"STONE_PURCHASE_ACCESS_CONFIRM_CANCEL"*/, 0);
    v11 = StonePurchaseMenu___c_TypeInfo;
    v12 = v9;
    if ( !StonePurchaseMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StonePurchaseMenu___c_TypeInfo);
      v11 = StonePurchaseMenu___c_TypeInfo;
    }
    _9__48_0 = v11->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = StonePurchaseMenu___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__48_0 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        _9__48_0,
        v14,
        Method_StonePurchaseMenu___c__OnClickAnxOnline_b__48_0__,
        0);
      static_fields = StonePurchaseMenu___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = _9__48_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__48_0,
        (int32_t)_9__48_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !Instance )
      sub_1C71608(v22, v10);
    CommonUI__OpenConfirmDialog_31440768(
      (CommonUI_o *)Instance,
      Empty,
      v7,
      v8,
      v12,
      0,
      _9__48_0,
      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
      0,
      26,
      26,
      0);
  }
  else
  {
    v23 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    anxOnlineUrl = v23->static_fields->anxOnlineUrl;
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(anxOnlineUrl, 0);
  }
}


void StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC52B7 & 1) == 0 )
  {
    sub_1C713B0(&Method_StonePurchaseMenu_OnClickBack__);
    byte_4CC52B7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    StonePurchaseMenu__Callback(this, 0, v5);
  }
}


void StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *WebViewAddress_41656216; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22

  if ( (byte_4CC52B8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_OnClickExplanation__);
    sub_1C713B0(&Method_StonePurchaseMenu_OnEndWebView__);
    sub_1C713B0(&WebViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15557/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/);
    byte_4CC52B8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_OnClickExplanation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_41656216 = NetworkManager__getWebViewAddress_41656216(8, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15557/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0);
    v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v6, WebViewAddress_41656216, v7, 0);
  }
}


void StonePurchaseMenu__OnClickHistory(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4CC52B9 & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_OnClickHistory__);
    sub_1C713B0(&Method_StonePurchaseMenu__OnClickHistory_b__46_0__);
    byte_4CC52B9 = 1;
  }
  v3 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_OnClickHistory__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__46_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_1C71608(0, v7);
  PaymentHistoryRequest__beginRequest((PaymentHistoryRequest_o *)Request_object, 1, 0);
}


void StonePurchaseMenu__OnEndWebView(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  ;
}


void StonePurchaseMenu__OnMoveEnd(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4CC52B4 & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4CC52B4 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v15 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C715FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v16);
      if ( !ItemListViewManager )
        sub_1C71608(v17, v18);
      ItemListViewManager->fields.callbackFunc = v15;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
        (int32_t)v15,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      StonePurchaseListViewManager__SetMode_38778432(ItemListViewManager, 1, v25);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
      v12 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0;
        sub_1C71354(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
        ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
      }
    }
  }
  else if ( state == 7 )
  {
    this->fields.state = 9;
  }
  else if ( state == 9 )
  {
    StonePurchaseMenu__OnSelectAgeVerification(this, this->fields.ageVerificationResult, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseMenu__OnSelectAgeVerification(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  int32_t state; // w8
  AgeVerificationMenu_o *ageVerificationMenu; // x0
  const MethodInfo *v7; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4CC52B3 & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4CC52B3 = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close(ageVerificationMenu, 0);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v7);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v9 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C715FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v10);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v9;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
          (int32_t)v9,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        StonePurchaseListViewManager__SetMode_38778432(ItemListViewManager, 1, v17);
        return;
      }
    }
    sub_1C71608(ageVerificationMenu, *(_QWORD *)&result);
  }
  if ( state == 7 )
  {
    this->fields.state = 9;
    this->fields.ageVerificationResult = result;
  }
}


void StonePurchaseMenu__OnSelectBuyItem(StonePurchaseMenu_o *this, int32_t n, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v8; // x1
  int32_t freeStone; // w23
  int32_t chargeStone; // w22
  Il2CppObject *Instance; // x20
  System_String_o *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  CommonConfirmDialog_ClickDelegate_o *v18; // x24
  int32_t v19; // [xsp+48h] [xbp-38h] BYREF
  int32_t v20; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4CC52B5 & 1) == 0 )
  {
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__);
    sub_1C713B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_1C713B0(&StringLiteral_12381/*"STONE_PURCHASE_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_12383/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_12382/*"STONE_PURCHASE_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC52B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    this->fields.selectItemNum = n;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_14;
    freeStone = SelfUserGame->fields.freeStone;
    if ( (freeStone & 0x80000000) == 0 )
    {
      StonePurchaseMenu__SelectBuyBankItemConfirm(this, v8);
      return;
    }
    chargeStone = SelfUserGame->fields.chargeStone;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12383/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/, 0);
    v20 = chargeStone;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v19 = freeStone;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v15 = System_String__Format_64073032(v12, v13, v14, 0);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12382/*"STONE_PURCHASE_CONFIRM_DECIDE"*/, 0);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12381/*"STONE_PURCHASE_CONFIRM_CANCEL"*/, 0);
    v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v18,
      (Il2CppObject *)this,
      Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__,
      0);
    if ( !Instance )
LABEL_14:
      sub_1C71608(SelfUserGame, v8);
    CommonUI__OpenConfirmDecideDlg(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v15,
      v16,
      v17,
      v18,
      25,
      0.0,
      15.0,
      0,
      0,
      0,
      240,
      0,
      1,
      0,
      0,
      0);
  }
}


void StonePurchaseMenu__OnSelectWarning(StonePurchaseMenu_o *this, bool isDecide, const MethodInfo *method)
{
  ErrorDialog_o *warningDialog; // x0
  const MethodInfo *v5; // x2

  if ( this->fields.state == 14 )
  {
    warningDialog = this->fields.warningDialog;
    if ( !warningDialog )
      sub_1C71608(0, isDecide);
    ErrorDialog__Close(warningDialog, 0);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void StonePurchaseMenu__Open(
        StonePurchaseMenu_o *this,
        StonePurchaseMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        bool isEnableAccessConfirmation,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UILabel_o *stoneDataLabel; // x20
  int32_t v24; // w21
  UnityEngine_GameObject_o *v25; // x20
  System_Action_int__o *v26; // x21
  const MethodInfo *v27; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v39; // x21
  UnityEngine_GameObject_o *v40; // x20
  BalanceConfig_c *v41; // x8
  UISprite_o *anxOnlineRedirectButtonSprite; // x20
  System_Action_o *v43; // x20

  if ( (byte_4CC52AA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__TypeInfo);
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AgeVerificationMenu_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_StonePurchaseMenu_OnMoveEnd__);
    sub_1C713B0(&Method_StonePurchaseMenu_OnSelectAgeVerification__);
    sub_1C713B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_1C713B0(&Method_StonePurchaseMenu__Open_b__25_0__);
    sub_1C713B0(&StringLiteral_17452/*"btn_anx_shop"*/);
    byte_4CC52AA = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      this->fields.callbackFunc = callback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.refreshCallbackFunc,
        (int32_t)refreshCallback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      gameObject = this->fields.ItemListViewManager;
      this->fields.isEnableAccessConfirmation = isEnableAccessConfirmation;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0);
        gameObject = UserGameMaster__getSelfUserGame(0);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v24 = *((_DWORD *)gameObject + 46);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__GetNumberFormat(v24, 0);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0);
            v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            v26 = (System_Action_int__o *)sub_1C715FC(System_Action_int__TypeInfo);
            System_Action_int____ctor(v26, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__25_0__, 0);
            StoneCountRefreshComponent__AttachToGameObject(v25, v26, 0, 0);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v27);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              PurchaseBehaviour__ActivateBoth(0);
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              if ( AgeVerificationMenu__IsConcent(0) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v29 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C715FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v29,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v30);
                if ( !ItemListViewManager )
                  goto LABEL_28;
                ItemListViewManager->fields.callbackFunc = v29;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
                  (int32_t)v29,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36);
                StonePurchaseListViewManager__SetMode_38778432(ItemListViewManager, 1, v37);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v39 = (AgeVerificationMenu_CallbackFunc_o *)sub_1C715FC(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v39,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  0);
                if ( !ageVerificationMenu )
                  goto LABEL_28;
                AgeVerificationMenu__Open(ageVerificationMenu, v39, 0);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                *((_BYTE *)gameObject + 33) = 1;
                gameObject = this->fields.anxOnlineRedirectButton;
                if ( gameObject )
                {
                  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  v41 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v41 = BalanceConfig_TypeInfo;
                  }
                  gameObject = (void *)System_String__IsNullOrEmpty(v41->static_fields->anxOnlineUrl, 0);
                  if ( v40 )
                  {
                    UnityEngine_GameObject__SetActive(v40, ((unsigned __int8)gameObject & 1) == 0, 0);
                    anxOnlineRedirectButtonSprite = this->fields.anxOnlineRedirectButtonSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetDownloadCommonSprite(
                      anxOnlineRedirectButtonSprite,
                      (System_String_o *)StringLiteral_17452/*"btn_anx_shop"*/,
                      0);
                    v43 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                    System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C71608(gameObject, v10);
  }
}


void StonePurchaseMenu__RequestCancelPurchaseByBank(
        StonePurchaseMenu_o *this,
        int32_t shopId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  CancelPurchaseByBankRequest_o *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_4CC52B1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C713B0(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass33_0__RequestCancelPurchaseByBank_b__0__);
    sub_1C713B0(&StonePurchaseMenu___c__DisplayClass33_0_TypeInfo);
    byte_4CC52B1 = 1;
  }
  v5 = sub_1C715FC(StonePurchaseMenu___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_StonePurchaseMenu___c__DisplayClass33_0__RequestCancelPurchaseByBank_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v15,
                                                        (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0);
      return;
    }
LABEL_13:
    sub_1C71608(Request_object, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0);
}


void StonePurchaseMenu__SelectBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseListViewManager_o *ItemListViewManager; // x0
  StonePurchaseListViewItem_o *Item; // x20
  StonePurchaseListViewManager_o *v6; // x21
  UnityEngine_Object_o *Instance; // x21
  BankShopEntity_o *bankShop; // x20
  PurchaseLogic_ProductFinishedAction_o *v9; // x22

  if ( (byte_4CC52AD & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
    byte_4CC52AD = 1;
  }
  if ( this->fields.state == 2 )
  {
    ItemListViewManager = this->fields.ItemListViewManager;
    if ( !ItemListViewManager )
      goto LABEL_22;
    Item = StonePurchaseListViewManager__GetItem(ItemListViewManager, this->fields.selectItemNum, v2);
    ItemListViewManager = (StonePurchaseListViewManager_o *)this->fields.buyItemMask;
    this->fields.state = 5;
    if ( !ItemListViewManager )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemListViewManager, 1, 0);
    ItemListViewManager = (StonePurchaseListViewManager_o *)this->fields.buyItemMask;
    if ( !ItemListViewManager )
      goto LABEL_22;
    ItemListViewManager = (StonePurchaseListViewManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)ItemListViewManager,
                                                              (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v6 = ItemListViewManager;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    if ( !v6 )
      goto LABEL_22;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, const MethodInfo *, float))v6->klass->vtable._8_ItemDragStart.methodPtr)(
      v6,
      v6->klass->vtable._8_ItemDragStart.method,
      ManagerConfig_TypeInfo->static_fields->MINIMUM_ENABLE_ALPHA);
    TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 1.0, 0);
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0) )
    {
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance(0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ItemListViewManager = (StonePurchaseListViewManager_o *)UnityEngine_Object__op_Inequality(Instance, 0, 0);
      if ( ((unsigned __int8)ItemListViewManager & 1) != 0 )
      {
        if ( Item )
        {
          bankShop = Item->fields.bankShop;
          v9 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C715FC(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184,
            0);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v9, 0);
            return;
          }
        }
LABEL_22:
        sub_1C71608(ItemListViewManager, method);
      }
    }
  }
}


void StonePurchaseMenu__SelectedBuyBankItemConfirm(
        StonePurchaseMenu_o *this,
        int32_t result,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  StonePurchaseMenu_o *v24; // x0
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  System_Action_o *v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t v30; // w21
  System_Action_o *v31; // x0
  intptr_t *v32; // x8
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  System_Action_o *v36; // x25
  const MethodInfo *v37; // x7
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  int32_t v46; // w20
  System_Action_o *v47; // x21
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  System_Action_o *v54; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4CC52AF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__);
    sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_1C713B0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__0__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__1__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__2__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__3__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__4__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__5__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__6__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__7__);
    sub_1C713B0(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__8__);
    sub_1C713B0(&StonePurchaseMenu___c__DisplayClass31_0_TypeInfo);
    byte_4CC52AF = 1;
  }
  v15 = sub_1C715FC(StonePurchaseMenu___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
LABEL_41:
    sub_1C71608(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = shopId;
  *(_DWORD *)(v15 + 28) = perMonthAmount;
  v24 = (StonePurchaseMenu_o *)TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0);
  switch ( result )
  {
    case 2:
      v33 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v34 = (System_Reflection_MethodBase_o *)sub_1C71394(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 8, 0, 0);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v36 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v36, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_41;
      StonePurchaseNotificationMenu__Open(
        stonePurchaseNotificationMenu,
        1,
        v36,
        freeStoneNum,
        chargeStoneNum,
        *(_DWORD *)(v15 + 24),
        isSentGift,
        v37);
      break;
    case 4:
      break;
    case 5:
      v40 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v40 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v41 = (System_Reflection_MethodBase_o *)sub_1C71394(v40, v40[4]);
      OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0, 0);
      this->fields.state = 14;
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v42 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v43 = (System_Reflection_MethodBase_o *)sub_1C71394(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0, 0);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v44 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v44 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v45 = (System_Reflection_MethodBase_o *)sub_1C71394(v44, v44[4]);
      OverwriteAssetSoundName__PlaySystemSe(v45, 2, 0, 0);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v46 = *(_DWORD *)(v15 + 24);
      v47 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v47, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0);
      v26 = v46;
      v27 = v47;
      goto LABEL_37;
    case 10:
      this->fields.state = 10;
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v28 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v29 = (System_Reflection_MethodBase_o *)sub_1C71394(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v48 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v48 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v49 = (System_Reflection_MethodBase_o *)sub_1C71394(v48, v48[4]);
      OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0, 0);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v50 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v51 = (System_Reflection_MethodBase_o *)sub_1C71394(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v51, 2, 0, 0);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v52 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v53 = (System_Reflection_MethodBase_o *)sub_1C71394(v52, v52[4]);
      OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0, 0);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v26 = *(_DWORD *)(v15 + 24);
      v27 = 0;
      goto LABEL_37;
    default:
      v38 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184 + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78747184);
      v39 = (System_Reflection_MethodBase_o *)sub_1C71394(v38, v38[4]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0, 0);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v54 = v31;
      System_Action___ctor(v31, (Il2CppObject *)v15, *v32, 0);
      v26 = v30;
      v27 = v54;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v24, v26, v27, v25);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))refreshCallbackFunc->fields.invoke_impl)(
      refreshCallbackFunc->fields.method_code,
      refreshCallbackFunc->fields.method);
}


void StonePurchaseMenu__SelectedBuyBankItemConfirm_38792544(
        StonePurchaseMenu_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  int32_t v13; // w21
  System_Action_o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7
  int32_t v18; // w1
  StonePurchaseNotificationMenu_o *v19; // x0
  System_Action_o *v20; // x2
  int32_t v21; // w3
  int32_t v22; // w4
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v26; // x21
  ErrorDialog_ClickDelegate_o *v27; // x22
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct StonePurchaseNotificationMenu_o *v30; // x20
  System_Action_o *v31; // x21
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  struct StonePurchaseNotificationMenu_o *v34; // x20
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v38; // x22
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v40; // 0:x6.12

  if ( (byte_4CC52B0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&SpendLimitMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    sub_1C713B0(&Method_StonePurchaseMenu_EndSpendLimit__);
    sub_1C713B0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_1C713B0(&StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_4CC52B0 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0);
  switch ( result )
  {
    case 2:
      v8 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v13 = TotalAddedChargeStoneNum;
      v14 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_35;
      v18 = 1;
      v19 = stonePurchaseNotificationMenu;
      v20 = v14;
      v21 = TotalAddedFreeStoneNum;
      v22 = v13;
      goto LABEL_29;
    case 3:
      v23 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v24 = (System_Reflection_MethodBase_o *)sub_1C71394(v23, v23[4]);
      OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/, 0);
      v27 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v27,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v40.fields.hasValue = 0;
      v40.fields.value.fields.y = 0.0;
      ErrorDialog__Open_42542404(warningDialog, 0, v26, v27, 1, -1.0, 1, v40, 0);
      goto LABEL_32;
    case 4:
      v28 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v29 = (System_Reflection_MethodBase_o *)sub_1C71394(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0, 0);
      v30 = this->fields.stonePurchaseNotificationMenu;
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0);
      if ( !v30 )
        goto LABEL_35;
      v19 = v30;
      v18 = 0;
      goto LABEL_28;
    case 6:
      v35 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v36 = (System_Reflection_MethodBase_o *)sub_1C71394(v35, v35[4]);
      OverwriteAssetSoundName__PlaySystemSe(v36, 2, 0, 0);
      v34 = this->fields.stonePurchaseNotificationMenu;
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0);
      if ( !v34 )
        goto LABEL_35;
      v18 = 5;
      goto LABEL_27;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v7);
      goto LABEL_32;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v38 = (SpendLimitMenu_CallbackFunc_o *)sub_1C715FC(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v38, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v38, 0);
      goto LABEL_32;
    default:
      v32 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1C713C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v33 = (System_Reflection_MethodBase_o *)sub_1C71394(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0, 0);
      v34 = this->fields.stonePurchaseNotificationMenu;
      v31 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0);
      if ( !v34 )
LABEL_35:
        sub_1C71608(v15, v16);
      v18 = 4;
LABEL_27:
      v19 = v34;
LABEL_28:
      v20 = v31;
      v21 = 0;
      v22 = 0;
LABEL_29:
      StonePurchaseNotificationMenu__Open(v19, v18, v20, v21, v22, 0, 0, v17);
LABEL_32:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        ((void (__fastcall *)(intptr_t, intptr_t))refreshCallbackFunc->fields.invoke_impl)(
          refreshCallbackFunc->fields.method_code,
          refreshCallbackFunc->fields.method);
      return;
  }
}


void StonePurchaseMenu__UpdateListView(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *ItemListViewManager; // x0
  const MethodInfo *v4; // x2

  ItemListViewManager = (ListViewManager_o *)this->fields.ItemListViewManager;
  if ( !ItemListViewManager
    || (ListViewManager__set_IsInput(ItemListViewManager, 0, 0),
        (ItemListViewManager = (ListViewManager_o *)this->fields.ItemListViewManager) == 0)
    || (ListViewManager__DestroyList(ItemListViewManager, 0),
        (ItemListViewManager = (ListViewManager_o *)this->fields.ItemListViewManager) == 0) )
  {
    sub_1C71608(ItemListViewManager, method);
  }
  StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)ItemListViewManager, 0, v4);
}


void StonePurchaseMenu___OnClickHistory_b__46_0(
        StonePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PaymentHistoryDialog_o *paymentHistoryDialog; // x0

  paymentHistoryDialog = this->fields.paymentHistoryDialog;
  if ( !paymentHistoryDialog )
    sub_1C71608(0, result);
  PaymentHistoryDialog__Open(paymentHistoryDialog, 0);
}


void StonePurchaseMenu___Open_b__25_0(StonePurchaseMenu_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4CC52BE & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC52BE = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !stoneDataLabel )
    sub_1C71608(NumberFormat, v7);
  UILabel__set_text(stoneDataLabel, NumberFormat, 0);
}


void StonePurchaseMenu__add_callbackFunc(
        StonePurchaseMenu_o *this,
        StonePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct StonePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseMenu_o *v11; // x0
  StonePurchaseMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC52A7 & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4CC52A7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (StonePurchaseMenu_CallbackFunc_c *)v8->klass != StonePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC52BC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_8873/*"MainPanel/BaseView/CloseButton"*/);
    byte_4CC52BC = 1;
  }
  return (System_String_o *)StringLiteral_8873/*"MainPanel/BaseView/CloseButton"*/;
}


void StonePurchaseMenu__remove_callbackFunc(
        StonePurchaseMenu_o *this,
        StonePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct StonePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC52A8 & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4CC52A8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (StonePurchaseMenu_CallbackFunc_c *)v8->klass != StonePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  StonePurchaseMenu__Init(v11, v12);
}


void StonePurchaseMenu_CallbackFunc___ctor(
        StonePurchaseMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1AA5830;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA57E8;
}


System_IAsyncResult_o *StonePurchaseMenu_CallbackFunc__BeginInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CC52BF & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseMenu_Result_TypeInfo);
    byte_4CC52BF = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void StonePurchaseMenu_CallbackFunc__Invoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void StonePurchaseMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC52C0 & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseMenu___c_TypeInfo);
    byte_4CC52C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(StonePurchaseMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StonePurchaseMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseMenu___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)StonePurchaseMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void StonePurchaseMenu___c___ctor(StonePurchaseMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseMenu___c___OnClickAnxOnline_b__48_0(
        StonePurchaseMenu___c_o *this,
        bool result,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  System_String_o *anxOnlineUrl; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4CC52C1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC52C1 = 1;
  }
  if ( result )
  {
    v4 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    anxOnlineUrl = v4->static_fields->anxOnlineUrl;
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(anxOnlineUrl, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v7);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void StonePurchaseMenu___c__DisplayClass31_0___ctor(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__0(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *klass; // x20
  System_Action_o *v5; // x22
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4CC52C2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4CC52C2 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C71608(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 0, v5, 0, 0, v2->fields.shopId, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__1(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  struct StonePurchaseMenu_o *_4__this; // x8
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v5; // x0
  Il2CppObject *v6; // x22
  System_String_o *v7; // x19
  ErrorDialog_ClickDelegate_o *v8; // x21
  System_Nullable_Vector2__o v9; // 0:x6.12

  v2 = this;
  if ( (byte_4CC52C3 & 1) == 0 )
  {
    sub_1C713B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_4CC52C3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/, 0);
  v6 = (Il2CppObject *)v2->fields.__4__this;
  v7 = v5;
  v8 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v8, v6, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0);
  if ( !warningDialog )
LABEL_8:
    sub_1C71608(this, method);
  *(_QWORD *)&v9.fields.hasValue = 0;
  v9.fields.value.fields.y = 0.0;
  ErrorDialog__Open_42542404(warningDialog, 0, v7, v8, 1, -1.0, 1, v9, 0);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__2(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4CC52C4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    byte_4CC52C4 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0),
        !klass) )
  {
    sub_1C71608(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 5, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__3(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4CC52C5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4CC52C5 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C71608(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 6, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__4(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  SpendLimitMenu_o *klass; // x20
  int32_t perMonthAmount; // w19
  SpendLimitMenu_CallbackFunc_o *v6; // x22

  v2 = this;
  if ( (byte_4CC52C6 & 1) == 0 )
  {
    sub_1C713B0(&SpendLimitMenu_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_EndSpendLimit__);
    byte_4CC52C6 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (SpendLimitMenu_o *)_4__this[9].klass,
        perMonthAmount = v2->fields.perMonthAmount,
        v6 = (SpendLimitMenu_CallbackFunc_o *)sub_1C715FC(SpendLimitMenu_CallbackFunc_TypeInfo),
        SpendLimitMenu_CallbackFunc___ctor(v6, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, 0),
        !klass) )
  {
    sub_1C71608(this, method);
  }
  SpendLimitMenu__Open(klass, perMonthAmount, v6, 0);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__5(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4CC52C7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4CC52C7 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C71608(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 7, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__6(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4CC52C8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4CC52C8 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C71608(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 8, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__7(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4CC52C9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4CC52C9 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C71608(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 9, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__8(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass31_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4CC52CA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4CC52CA = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C71608(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 4, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass33_0___ctor(
        StonePurchaseMenu___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseMenu___c__DisplayClass33_0___RequestCancelPurchaseByBank_b__0(
        StonePurchaseMenu___c__DisplayClass33_0_o *this,
        System_String_o *responseResult,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0);
}


void StonePurchaseMenu___c__DisplayClass42_0___ctor(
        StonePurchaseMenu___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseMenu___c__DisplayClass42_0___CloseStonePurchaseWarningDialog_b__0(
        StonePurchaseMenu___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass42_0_o *v2; // x19
  struct StonePurchaseMenu_o *_4__this; // x20
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x19
  StonePurchaseListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_4CC52CB & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass42_0_o *)sub_1C713B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4CC52CB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( v2->fields.isDecide )
  {
    StonePurchaseMenu__SelectBuyBankItemConfirm(v2->fields.__4__this, method);
    return;
  }
  _4__this->fields.state = 2;
  ItemListViewManager = _4__this->fields.ItemListViewManager;
  v5 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C715FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
  StonePurchaseListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
    v6);
  if ( !ItemListViewManager )
LABEL_8:
    sub_1C71608(this, method);
  ItemListViewManager->fields.callbackFunc = v5;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  StonePurchaseListViewManager__SetMode_38778432(ItemListViewManager, 1, v13);
}