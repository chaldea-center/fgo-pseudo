void StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E73B & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596E73B = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1

  if ( (byte_596E72A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596E72A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v3, 0.1, 0);
  }
}


void StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596E730 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_596E730 = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0),
          ItemListViewManager = this->fields.ItemListViewManager,
          v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_2213CCC(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v7),
          !ItemListViewManager) )
    {
      sub_2213CDC(buyItemMask, v3);
    }
    ItemListViewManager->fields.callbackFunc = v6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
      (int32_t)v6,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    StonePurchaseListViewManager__SetMode_45586320(ItemListViewManager, 1, v14);
    this->fields.state = 2;
  }
}


void StonePurchaseMenu__Callback(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct StonePurchaseMenu_CallbackFunc_o *v10; // x20
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      v10->fields.method);
}


void StonePurchaseMenu__Close(StonePurchaseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo_47A29F8 *v10; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_596E729 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_StonePurchaseMenu_OnMoveEnd__);
    byte_596E729 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v10 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance(v10);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0);
      BaseDialog__Close((BaseDialog_o *)this, v13, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Instance, v12);
  }
  if ( callback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_596E734 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass42_0__CloseStonePurchaseWarningDialog_b__0__);
    sub_2213A60(&StonePurchaseMenu___c__DisplayClass42_0_TypeInfo);
    byte_596E734 = 1;
  }
  v5 = sub_2213CCC(StonePurchaseMenu___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isDecide,
        *(_QWORD *)(v5 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_StonePurchaseMenu___c__DisplayClass42_0__CloseStonePurchaseWarningDialog_b__0__,
          0),
        !Instance) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v15, 0);
}


void StonePurchaseMenu__EndBuyBankItemNotificationCancel(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x1

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_2213CDC(0, method);
  StonePurchaseNotificationMenu__Close_45608896(stonePurchaseNotificationMenu, 0, v2);
  StonePurchaseMenu__BackBuyBankItemConfirm(this, v5);
}


void StonePurchaseMenu__EndBuyBankItemNotificationSuccess(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_2213CDC(0, method);
  StonePurchaseNotificationMenu__Close_45608896(stonePurchaseNotificationMenu, 0, v2);
  StonePurchaseMenu__Callback(this, 2, v5);
}


void StonePurchaseMenu__EndBuyBankItemNotificationSuspend(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_2213CDC(0, method);
  StonePurchaseNotificationMenu__Close_45608896(stonePurchaseNotificationMenu, 0, v2);
  StonePurchaseMenu__Callback(this, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, isDecide);
    ErrorDialog__Close(warningDialog, 0);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596E72C & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_596E72C = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close_45578924(spendLimitMenu, 0, v2),
        ItemListViewManager = this->fields.ItemListViewManager,
        v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_2213CCC(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v7),
        !ItemListViewManager) )
  {
    sub_2213CDC(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
    (int32_t)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  StonePurchaseListViewManager__SetMode_45586320(ItemListViewManager, 1, v14);
  this->fields.state = 2;
}


void StonePurchaseMenu__Init(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_596E727 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E727 = 1;
  }
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.refreshCallbackFunc, 0, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0) )
  {
    sub_2213CDC(stoneDataLabel, v15);
  }
  ListViewManager__DestroyList((ListViewManager_o *)stoneDataLabel, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseMenu__OnApplicationPause(StonePurchaseMenu_o *this, bool pauseStatus, const MethodInfo *method)
{
  if ( (byte_596E739 & 1) == 0 )
  {
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    byte_596E739 = 1;
  }
  if ( !pauseStatus )
  {
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, pauseStatus, method);
    PurchaseBehaviour__ActivateExternal(0);
  }
}


void StonePurchaseMenu__OnClickAnxOnline(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x21
  System_String_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x23
  StonePurchaseMenu___c_c *v18; // x8
  struct StonePurchaseMenu___c_StaticFields *static_fields; // x9
  CommonConfirmDialog_ClickDelegate_o *_9__48_0; // x24
  Il2CppObject *v21; // x25
  struct StonePurchaseMenu___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  BalanceConfig_c *v29; // x0
  BalanceConfig_c *v30; // x0
  System_String_o *anxOnlineUrl; // x19

  if ( (byte_596E738 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_StonePurchaseMenu_OnClickAnxOnline__);
    sub_2213A60(&Method_StonePurchaseMenu___c__OnClickAnxOnline_b__48_0__);
    sub_2213A60(&StonePurchaseMenu___c_TypeInfo);
    sub_2213A60(&StringLiteral_12892/*"STONE_PURCHASE_ACCESS_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12893/*"STONE_PURCHASE_ACCESS_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12891/*"STONE_PURCHASE_ACCESS_CONFIRM_CANCEL"*/);
    byte_596E738 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( !System_String__IsNullOrEmpty(v4->static_fields->anxOnlineUrl, 0) )
  {
    v5 = Method_StonePurchaseMenu_OnClickAnxOnline__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickAnxOnline__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_OnClickAnxOnline__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( this->fields.isEnableAccessConfirmation )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = **(System_String_o ***)(qword_5984390 + 184);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12893/*"STONE_PURCHASE_ACCESS_CONFIRM_MESSAGE"*/, 0);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12892/*"STONE_PURCHASE_ACCESS_CONFIRM_DECIDE"*/, 0);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12891/*"STONE_PURCHASE_ACCESS_CONFIRM_CANCEL"*/, 0);
      v18 = StonePurchaseMenu___c_TypeInfo;
      if ( !*(&StonePurchaseMenu___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(StonePurchaseMenu___c_TypeInfo, v15, v16);
        v18 = StonePurchaseMenu___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__48_0 = static_fields->__9__48_0;
      if ( !_9__48_0 )
      {
        if ( !*(&v18->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v18, v15, v16);
          static_fields = StonePurchaseMenu___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__48_0 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          _9__48_0,
          v21,
          Method_StonePurchaseMenu___c__OnClickAnxOnline_b__48_0__,
          0);
        v22 = StonePurchaseMenu___c_TypeInfo->static_fields;
        v22->__9__48_0 = _9__48_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v22->__9__48_0,
          (int32_t)_9__48_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      v29 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15, v16);
      if ( !Instance )
        sub_2213CDC(v29, v15);
      CommonUI__OpenConfirmDialog_37373676(
        (CommonUI_o *)Instance,
        v12,
        v13,
        v14,
        v17,
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
      v30 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v8);
        v30 = BalanceConfig_TypeInfo;
      }
      anxOnlineUrl = v30->static_fields->anxOnlineUrl;
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7, v8);
      UnityEngine_Application__OpenURL(anxOnlineUrl, 0);
    }
  }
}


void StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596E735 & 1) == 0 )
  {
    sub_2213A60(&Method_StonePurchaseMenu_OnClickBack__);
    byte_596E735 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    StonePurchaseMenu__Callback(this, 0, v5);
  }
}


void StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *WebViewAddress_48359816; // x20
  System_String_o *v10; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_596E736 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_OnClickExplanation__);
    sub_2213A60(&Method_StonePurchaseMenu_OnEndWebView__);
    sub_2213A60(&WebViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_16165/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/);
    byte_596E736 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_OnClickExplanation__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(8, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_16165/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0);
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0);
    if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v12, v13);
    WebViewManager__OpenView(v10, WebViewAddress_48359816, v11, 0);
  }
}


void StonePurchaseMenu__OnClickHistory(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_596E737 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_OnClickHistory__);
    sub_2213A60(&Method_StonePurchaseMenu__OnClickHistory_b__46_0__);
    byte_596E737 = 1;
  }
  v3 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_OnClickHistory__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__46_0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v9);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2

  if ( (byte_596E732 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_596E732 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      ItemListViewManager = this->fields.ItemListViewManager;
      this->fields.state = 2;
      v15 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_2213CCC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v16);
      if ( !ItemListViewManager )
        sub_2213CDC(v17, v18);
      ItemListViewManager->fields.callbackFunc = v15;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
        (int32_t)v15,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      StonePurchaseListViewManager__SetMode_45586320(ItemListViewManager, 1, v25);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
      v12 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0;
        sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2

  if ( (byte_596E731 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_596E731 = 1;
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
      v9 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_2213CCC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v10);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v9;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
          (int32_t)v9,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        StonePurchaseListViewManager__SetMode_45586320(ItemListViewManager, 1, v17);
        return;
      }
    }
    sub_2213CDC(ageVerificationMenu, *(_QWORD *)&result);
  }
  if ( state == 7 )
  {
    this->fields.ageVerificationResult = result;
    this->fields.state = 9;
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
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  CommonConfirmDialog_ClickDelegate_o *v20; // x24
  int32_t v21; // [xsp+48h] [xbp-38h] BYREF
  int32_t v22; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_596E733 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__);
    sub_2213A60(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_2213A60(&StringLiteral_12894/*"STONE_PURCHASE_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12896/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12895/*"STONE_PURCHASE_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E733 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12896/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/, 0);
    v22 = chargeStone;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
    v21 = freeStone;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
    v17 = System_String__Format_75697880(v14, v15, v16, 0);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12895/*"STONE_PURCHASE_CONFIRM_DECIDE"*/, 0);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12894/*"STONE_PURCHASE_CONFIRM_CANCEL"*/, 0);
    v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v20,
      (Il2CppObject *)this,
      Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__,
      0);
    if ( !Instance )
LABEL_14:
      sub_2213CDC(SelfUserGame, v8);
    CommonUI__OpenConfirmDecideDlg(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v17,
      v18,
      v19,
      v20,
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


// local variable allocation has failed, the output may be wrong!
void StonePurchaseMenu__OnSelectWarning(StonePurchaseMenu_o *this, bool isDecide, const MethodInfo *method)
{
  ErrorDialog_o *warningDialog; // x0
  const MethodInfo *v5; // x2

  if ( this->fields.state == 14 )
  {
    warningDialog = this->fields.warningDialog;
    if ( !warningDialog )
      sub_2213CDC(0, isDecide);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x2
  UILabel_o *stoneDataLabel; // x20
  int32_t v25; // w21
  UnityEngine_GameObject_o *v26; // x20
  System_Action_int__o *v27; // x21
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v34; // x21
  const MethodInfo *v35; // x3
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  const MethodInfo *v42; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v44; // x21
  const MethodInfo *v45; // x3
  UnityEngine_Component_o *anxOnlineRedirectButton; // x8
  __int64 v47; // x2
  UnityEngine_GameObject_o *v48; // x20
  UnityEngine_Behaviour_o *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  UISprite_o *anxOnlineRedirectButtonSprite; // x20
  System_Action_o *v53; // x20

  if ( (byte_596E728 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AgeVerificationMenu_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_StonePurchaseMenu_OnMoveEnd__);
    sub_2213A60(&Method_StonePurchaseMenu_OnSelectAgeVerification__);
    sub_2213A60(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_2213A60(&Method_StonePurchaseMenu__Open_b__25_0__);
    sub_2213A60(&StringLiteral_18192/*"btn_anx_shop"*/);
    byte_596E728 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      this->fields.callbackFunc = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.refreshCallbackFunc,
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
          v25 = *((_DWORD *)gameObject + 46);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v23);
          gameObject = LocalizationManager__GetNumberFormat(v25, 0);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0);
            v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            v27 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
            System_Action_int____ctor(v27, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__25_0__, 0);
            StoneCountRefreshComponent__AttachToGameObject(v26, v27, 0, 0);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v28);
              if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v29, v30);
              PurchaseBehaviour__ActivateBoth(0);
              if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v31, v32);
              if ( AgeVerificationMenu__IsConcent(0) )
              {
                ItemListViewManager = this->fields.ItemListViewManager;
                this->fields.state = 2;
                v34 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_2213CCC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v34,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v35);
                if ( !ItemListViewManager )
                  goto LABEL_29;
                ItemListViewManager->fields.callbackFunc = v34;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
                  (int32_t)v34,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41);
                StonePurchaseListViewManager__SetMode_45586320(ItemListViewManager, 1, v42);
              }
              else
              {
                ageVerificationMenu = this->fields.ageVerificationMenu;
                this->fields.state = 7;
                v44 = (AgeVerificationMenu_CallbackFunc_o *)sub_2213CCC(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v44,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  v45);
                if ( !ageVerificationMenu )
                  goto LABEL_29;
                AgeVerificationMenu__Open(ageVerificationMenu, v44, 0);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                anxOnlineRedirectButton = (UnityEngine_Component_o *)this->fields.anxOnlineRedirectButton;
                *((_BYTE *)gameObject + 33) = 1;
                if ( anxOnlineRedirectButton )
                {
                  gameObject = UnityEngine_Component__get_gameObject(anxOnlineRedirectButton, 0);
                  v48 = (UnityEngine_GameObject_o *)gameObject;
                  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v47);
                  if ( v48 )
                  {
                    UnityEngine_GameObject__SetActive(v48, BalanceConfig_TypeInfo->static_fields->anxOnlineUrl != 0, 0);
                    v49 = (UnityEngine_Behaviour_o *)this->fields.anxOnlineRedirectButton;
                    gameObject = (void *)System_String__IsNullOrEmpty(
                                           BalanceConfig_TypeInfo->static_fields->anxOnlineUrl,
                                           0);
                    if ( v49 )
                    {
                      UnityEngine_Behaviour__set_enabled(v49, ((unsigned __int8)gameObject & 1) == 0, 0);
                      anxOnlineRedirectButtonSprite = this->fields.anxOnlineRedirectButtonSprite;
                      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v50, v51);
                      AtlasManager__SetDownloadCommonSprite(
                        anxOnlineRedirectButtonSprite,
                        (System_String_o *)StringLiteral_18192/*"btn_anx_shop"*/,
                        0);
                      v53 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                      System_Action___ctor(v53, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0);
                      BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_2213CDC(gameObject, v10);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_596E72F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass33_0__RequestCancelPurchaseByBank_b__0__);
    sub_2213A60(&StonePurchaseMenu___c__DisplayClass33_0_TypeInfo);
    byte_596E72F = 1;
  }
  v5 = sub_2213CCC(StonePurchaseMenu___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v14, v15);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_StonePurchaseMenu___c__DisplayClass33_0__RequestCancelPurchaseByBank_b__0__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v19);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v17,
                                                        (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(Request_object, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0);
}


void StonePurchaseMenu__SelectBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseListViewManager_o *ItemListViewManager; // x0
  StonePurchaseListViewItem_o *Item; // x20
  __int64 v6; // x2
  StonePurchaseListViewManager_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *Instance; // x21
  BankShopEntity_o *bankShop; // x20
  PurchaseLogic_ProductFinishedAction_o *v16; // x22

  if ( (byte_596E72B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
    byte_596E72B = 1;
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
                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v7 = ItemListViewManager;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v6);
    if ( !v7 )
      goto LABEL_22;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, const MethodInfo *, float))v7->klass->vtable._8_ItemDragStart.methodPtr)(
      v7,
      v7->klass->vtable._8_ItemDragStart.method,
      ManagerConfig_TypeInfo->static_fields->MINIMUM_ENABLE_ALPHA);
    TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 1.0, 0);
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v8, v9);
    if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0) )
    {
      if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v10, v11);
      Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance(0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      ItemListViewManager = (StonePurchaseListViewManager_o *)UnityEngine_Object__op_Inequality(Instance, 0, 0);
      if ( ((unsigned __int8)ItemListViewManager & 1) != 0 )
      {
        if ( Item )
        {
          bankShop = Item->fields.bankShop;
          v16 = (PurchaseLogic_ProductFinishedAction_o *)sub_2213CCC(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v16,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392,
            0);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v16, 0);
            return;
          }
        }
LABEL_22:
        sub_2213CDC(ItemListViewManager, method);
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_GameObject_o *buyItemMask; // x0
  StonePurchaseMenu_o *v25; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  System_Action_o *v28; // x2
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  int32_t v31; // w21
  System_Action_o *v32; // x0
  intptr_t *v33; // x8
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t v40; // w20
  System_Action_o *v41; // x21
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  System_Action_o *v51; // x25
  const MethodInfo *v52; // x7
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  System_Action_o *v55; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_596E72D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__);
    sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_2213A60(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__0__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__1__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__2__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__3__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__4__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__5__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__6__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__7__);
    sub_2213A60(&Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__8__);
    sub_2213A60(&StonePurchaseMenu___c__DisplayClass31_0_TypeInfo);
    byte_596E72D = 1;
  }
  v15 = sub_2213CCC(StonePurchaseMenu___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
LABEL_41:
    sub_2213CDC(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)this, v18, v19, v20, v21, v22, v23);
  buyItemMask = this->fields.buyItemMask;
  *(_DWORD *)(v15 + 24) = shopId;
  *(_DWORD *)(v15 + 28) = perMonthAmount;
  v25 = (StonePurchaseMenu_o *)TweenAlpha__Begin(buyItemMask, 0.2, 0.0, 0);
  switch ( result )
  {
    case 2:
      v48 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v48 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v49 = (System_Reflection_MethodBase_o *)sub_2213A44(v48, v48[4]);
      OverwriteAssetSoundName__PlaySystemSe(v49, 8, 0, 0);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v51, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_41;
      StonePurchaseNotificationMenu__Open(
        stonePurchaseNotificationMenu,
        1,
        v51,
        freeStoneNum,
        chargeStoneNum,
        *(_DWORD *)(v15 + 24),
        isSentGift,
        v52);
      break;
    case 4:
      break;
    case 5:
      v46 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v46 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v47 = (System_Reflection_MethodBase_o *)sub_2213A44(v46, v46[4]);
      OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0);
      v31 = *(_DWORD *)(v15 + 24);
      this->fields.state = 14;
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v42 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v43 = (System_Reflection_MethodBase_o *)sub_2213A44(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0, 0);
      v31 = *(_DWORD *)(v15 + 24);
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v38 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v39 = (System_Reflection_MethodBase_o *)sub_2213A44(v38, v38[4]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0, 0);
      v31 = *(_DWORD *)(v15 + 24);
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v40 = *(_DWORD *)(v15 + 24);
      v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0);
      v27 = v40;
      v28 = v41;
      goto LABEL_37;
    case 10:
      v31 = *(_DWORD *)(v15 + 24);
      this->fields.state = 10;
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v29 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v30 = (System_Reflection_MethodBase_o *)sub_2213A44(v29, v29[4]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0, 0);
      v31 = *(_DWORD *)(v15 + 24);
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v34 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v35 = (System_Reflection_MethodBase_o *)sub_2213A44(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0);
      v31 = *(_DWORD *)(v15 + 24);
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v36 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v36 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v37 = (System_Reflection_MethodBase_o *)sub_2213A44(v36, v36[4]);
      OverwriteAssetSoundName__PlaySystemSe(v37, 2, 0, 0);
      v31 = *(_DWORD *)(v15 + 24);
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v44 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v44 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v45 = (System_Reflection_MethodBase_o *)sub_2213A44(v44, v44[4]);
      OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0, 0);
      v31 = *(_DWORD *)(v15 + 24);
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v27 = *(_DWORD *)(v15 + 24);
      v28 = 0;
      goto LABEL_37;
    default:
      v53 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392 + 83) & 2) != 0 )
        v53 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___91825392);
      v54 = (System_Reflection_MethodBase_o *)sub_2213A44(v53, v53[4]);
      OverwriteAssetSoundName__PlaySystemSe(v54, 2, 0, 0);
      v31 = *(_DWORD *)(v15 + 24);
      v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v33 = &Method_StonePurchaseMenu___c__DisplayClass31_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v55 = v32;
      System_Action___ctor(v32, (Il2CppObject *)v15, *v33, 0);
      v27 = v31;
      v28 = v55;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v25, v27, v28, v26);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))refreshCallbackFunc->fields.invoke_impl)(
      refreshCallbackFunc->fields.method_code,
      refreshCallbackFunc->fields.method);
}


void StonePurchaseMenu__SelectedBuyBankItemConfirm_45600532(
        StonePurchaseMenu_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct StonePurchaseNotificationMenu_o *v10; // x20
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x7
  StonePurchaseNotificationMenu_o *v15; // x0
  int32_t v16; // w1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w21
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  System_Action_o *v22; // x23
  System_Action_o *v23; // x2
  int32_t v24; // w3
  int32_t v25; // w4
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  struct StonePurchaseNotificationMenu_o *v28; // x20
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  struct StonePurchaseNotificationMenu_o *v31; // x20
  struct System_Action_o *refreshCallbackFunc; // x8
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v34; // x22
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v42; // x21
  ErrorDialog_ClickDelegate_o *v43; // x22
  System_Nullable_Vector2__o v44; // 0:x6.12

  if ( (byte_596E72E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SpendLimitMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    sub_2213A60(&Method_StonePurchaseMenu_EndSpendLimit__);
    sub_2213A60(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_2213A60(&StringLiteral_12907/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_596E72E = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0);
  if ( result <= 5 )
  {
    if ( result == 2 )
    {
      v17 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 8, 0, 0);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0);
      if ( stonePurchaseNotificationMenu )
      {
        v15 = stonePurchaseNotificationMenu;
        v16 = 1;
        v23 = v22;
        v24 = TotalAddedFreeStoneNum;
        v25 = TotalAddedChargeStoneNum;
LABEL_30:
        StonePurchaseNotificationMenu__Open(v15, v16, v23, v24, v25, 0, 0, v14);
        goto LABEL_31;
      }
      goto LABEL_42;
    }
    if ( result != 3 )
    {
      if ( result == 4 )
      {
        v8 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
        if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
        v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
        v10 = this->fields.stonePurchaseNotificationMenu;
        v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0);
        if ( !v10 )
          goto LABEL_42;
        v15 = v10;
        v16 = 0;
LABEL_29:
        v23 = v11;
        v24 = 0;
        v25 = 0;
        goto LABEL_30;
      }
LABEL_21:
      v26 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v27 = (System_Reflection_MethodBase_o *)sub_2213A44(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0, 0);
      v28 = this->fields.stonePurchaseNotificationMenu;
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0);
      if ( !v28 )
        goto LABEL_42;
      v15 = v28;
      v16 = 4;
      goto LABEL_29;
    }
    v37 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
      v37 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
    v38 = (System_Reflection_MethodBase_o *)sub_2213A44(v37, v37[4]);
    OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0, 0);
    warningDialog = this->fields.warningDialog;
    this->fields.state = 14;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12907/*"STONE_PURCHASE_RESULT_WAIT"*/, 0);
    v43 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v43,
      (Il2CppObject *)this,
      Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
      0);
    if ( !warningDialog )
      goto LABEL_42;
    *(_QWORD *)&v44.fields.hasValue = 0;
    v44.fields.value.fields.y = 0.0;
    ErrorDialog__Open_49140656(warningDialog, 0, v42, v43, 1, -1.0, 1, v44, 0);
  }
  else
  {
    if ( result <= 7 )
    {
      if ( result != 6 )
        goto LABEL_16;
      v29 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_2213A78(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v30 = (System_Reflection_MethodBase_o *)sub_2213A44(v29, v29[4]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0, 0);
      v31 = this->fields.stonePurchaseNotificationMenu;
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0);
      if ( v31 )
      {
        v15 = v31;
        v16 = 5;
        goto LABEL_29;
      }
LABEL_42:
      sub_2213CDC(v12, v13);
    }
    if ( result != 8 )
    {
      if ( result == 9 )
      {
LABEL_16:
        StonePurchaseMenu__BackBuyBankItemConfirm(this, v7);
        goto LABEL_31;
      }
      goto LABEL_21;
    }
    spendLimitMenu = this->fields.spendLimitMenu;
    this->fields.state = 10;
    v34 = (SpendLimitMenu_CallbackFunc_o *)sub_2213CCC(SpendLimitMenu_CallbackFunc_TypeInfo);
    SpendLimitMenu_CallbackFunc___ctor(v34, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v35);
    if ( !spendLimitMenu )
      goto LABEL_42;
    SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v34, v36);
  }
LABEL_31:
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))refreshCallbackFunc->fields.invoke_impl)(
      refreshCallbackFunc->fields.method_code,
      refreshCallbackFunc->fields.method);
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
    sub_2213CDC(ItemListViewManager, method);
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
    sub_2213CDC(0, result);
  PaymentHistoryDialog__Open(paymentHistoryDialog, 0);
}


// local variable allocation has failed, the output may be wrong!
void StonePurchaseMenu___Open_b__25_0(StonePurchaseMenu_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_596E73C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596E73C = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !stoneDataLabel )
    sub_2213CDC(NumberFormat, v7);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  StonePurchaseMenu_o *v13; // x0
  StonePurchaseMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596E725 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_596E725 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, StonePurchaseMenu_CallbackFunc_TypeInfo, v9, v10);
  StonePurchaseMenu__remove_callbackFunc(v13, v14, v15);
}


System_String_o *StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_596E73A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9240/*"MainPanel/BaseView/CloseButton"*/);
    byte_596E73A = 1;
  }
  return (System_String_o *)StringLiteral_9240/*"MainPanel/BaseView/CloseButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  StonePurchaseMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596E726 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_596E726 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, StonePurchaseMenu_CallbackFunc_TypeInfo, v9, v10);
  StonePurchaseMenu__Init(v13, v14);
}


void StonePurchaseMenu_CallbackFunc___ctor(
        StonePurchaseMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_200AC54;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200AC0C;
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
  if ( (byte_596E73D & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseMenu_Result_TypeInfo);
    byte_596E73D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E73E & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseMenu___c_TypeInfo);
    byte_596E73E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(StonePurchaseMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StonePurchaseMenu___c_TypeInfo->static_fields->__9 = (struct StonePurchaseMenu___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)StonePurchaseMenu___c_TypeInfo->static_fields,
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


// local variable allocation has failed, the output may be wrong!
void StonePurchaseMenu___c___OnClickAnxOnline_b__48_0(
        StonePurchaseMenu___c_o *this,
        bool result,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  System_String_o *anxOnlineUrl; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_596E73F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596E73F = 1;
  }
  if ( result )
  {
    v4 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, result, method);
      v4 = BalanceConfig_TypeInfo;
    }
    anxOnlineUrl = v4->static_fields->anxOnlineUrl;
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, result, method);
    UnityEngine_Application__OpenURL(anxOnlineUrl, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v7);
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
  if ( (byte_596E740 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_596E740 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_2213CDC(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 0, v5, 0, 0, v2->fields.shopId, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass31_0___SelectedBuyBankItemConfirm_b__1(
        StonePurchaseMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass31_0_o *v3; // x19
  struct StonePurchaseMenu_o *_4__this; // x8
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v6; // x0
  Il2CppObject *v7; // x22
  System_String_o *v8; // x19
  ErrorDialog_ClickDelegate_o *v9; // x21
  System_Nullable_Vector2__o v10; // 0:x6.12

  v3 = this;
  if ( (byte_596E741 & 1) == 0 )
  {
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&StringLiteral_12907/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_596E741 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12907/*"STONE_PURCHASE_RESULT_WAIT"*/, 0);
  v7 = (Il2CppObject *)v3->fields.__4__this;
  v8 = v6;
  v9 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v9, v7, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0);
  if ( !warningDialog )
LABEL_8:
    sub_2213CDC(this, method);
  *(_QWORD *)&v10.fields.hasValue = 0;
  v10.fields.value.fields.y = 0.0;
  ErrorDialog__Open_49140656(warningDialog, 0, v8, v9, 1, -1.0, 1, v10, 0);
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
  if ( (byte_596E742 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    byte_596E742 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0),
        !klass) )
  {
    sub_2213CDC(this, method);
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
  if ( (byte_596E743 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_596E743 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_2213CDC(this, method);
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_596E744 & 1) == 0 )
  {
    sub_2213A60(&SpendLimitMenu_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&Method_StonePurchaseMenu_EndSpendLimit__);
    byte_596E744 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (SpendLimitMenu_o *)_4__this[9].klass,
        perMonthAmount = v2->fields.perMonthAmount,
        v6 = (SpendLimitMenu_CallbackFunc_o *)sub_2213CCC(SpendLimitMenu_CallbackFunc_TypeInfo),
        SpendLimitMenu_CallbackFunc___ctor(v6, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, v7),
        !klass) )
  {
    sub_2213CDC(this, method);
  }
  SpendLimitMenu__Open(klass, perMonthAmount, v6, v8);
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
  if ( (byte_596E745 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_596E745 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_2213CDC(this, method);
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
  if ( (byte_596E746 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_596E746 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_2213CDC(this, method);
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
  if ( (byte_596E747 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_596E747 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_2213CDC(this, method);
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
  if ( (byte_596E748 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass31_0_o *)sub_2213A60(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_596E748 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_2213CDC(this, method);
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
  _BOOL4 isDecide; // w8
  StonePurchaseMenu_o *_4__this; // x19
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  v2 = this;
  if ( (byte_596E749 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass42_0_o *)sub_2213A60(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_596E749 = 1;
  }
  isDecide = v2->fields.isDecide;
  _4__this = v2->fields.__4__this;
  if ( isDecide )
  {
    if ( _4__this )
    {
      StonePurchaseMenu__SelectBuyBankItemConfirm(_4__this, method);
      return;
    }
LABEL_9:
    sub_2213CDC(this, method);
  }
  if ( !_4__this )
    goto LABEL_9;
  ItemListViewManager = _4__this->fields.ItemListViewManager;
  _4__this->fields.state = 2;
  v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_2213CCC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
  StonePurchaseListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
    v7);
  if ( !ItemListViewManager )
    goto LABEL_9;
  ItemListViewManager->fields.callbackFunc = v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&ItemListViewManager->fields.callbackFunc,
    (int32_t)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  StonePurchaseListViewManager__SetMode_45586320(ItemListViewManager, 1, v14);
}