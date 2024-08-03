void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F9CD2 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F9CD2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F9CC4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, method);
    byte_49F9CC4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  StonePurchaseListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2

  if ( (byte_49F9CCA & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_49F9CCA = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v8 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                                v6,
                                                                v7),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v9),
          !ItemListViewManager) )
    {
      sub_1B64324(buyItemMask);
    }
    ItemListViewManager->fields.callbackFunc = v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v8, v10, v11);
    StonePurchaseListViewManager__SetMode_34596376(ItemListViewManager, 1, v12);
    this->fields.state = 2;
  }
}


void __fastcall StonePurchaseMenu__Callback(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct StonePurchaseMenu_CallbackFunc_o *v5; // x20
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
}


void __fastcall StonePurchaseMenu__Close(
        StonePurchaseMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x20

  if ( (byte_49F9CC3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_StonePurchaseMenu_OnMoveEnd__, v7);
    byte_49F9CC3 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
  }
  if ( callback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    BYTE1(Instance[2].klass) = 0;
  }
}


void __fastcall StonePurchaseMenu__EndBuyBankItemNotificationCancel(
        StonePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x1

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1B64324(0LL);
  StonePurchaseNotificationMenu__Close_34616176(stonePurchaseNotificationMenu, 0LL, v2);
  StonePurchaseMenu__BackBuyBankItemConfirm(this, v5);
}


void __fastcall StonePurchaseMenu__EndBuyBankItemNotificationSuccess(
        StonePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1B64324(0LL);
  StonePurchaseNotificationMenu__Close_34616176(stonePurchaseNotificationMenu, 0LL, v2);
  StonePurchaseMenu__Callback(this, 2, v5);
}


void __fastcall StonePurchaseMenu__EndBuyBankItemNotificationSuspend(
        StonePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1B64324(0LL);
  StonePurchaseNotificationMenu__Close_34616176(stonePurchaseNotificationMenu, 0LL, v2);
  StonePurchaseMenu__Callback(this, 1, v5);
}


void __fastcall StonePurchaseMenu__EndBuyBankItemNotificationWait(
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
      sub_1B64324(0LL);
    ErrorDialog__Close(warningDialog, 0LL);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void __fastcall StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  StonePurchaseListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_49F9CC6 & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_49F9CC6 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close_34588788(spendLimitMenu, 0LL, v2),
        ItemListViewManager = this->fields.ItemListViewManager,
        v9 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B64314(
                                                              StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                              v7,
                                                              v8),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v10),
        !ItemListViewManager) )
  {
    sub_1B64324(spendLimitMenu);
  }
  ItemListViewManager->fields.callbackFunc = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v9, v11, v12);
  StonePurchaseListViewManager__SetMode_34596376(ItemListViewManager, 1, v13);
  this->fields.state = 2;
}


void __fastcall StonePurchaseMenu__Init(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_49F9CC1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F9CC1 = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  this->fields.refreshCallbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.refreshCallbackFunc, 0, v5, v6);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1B64324(stoneDataLabel);
  }
  ListViewManager__DestroyList((ListViewManager_o *)stoneDataLabel, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F9CCE & 1) == 0 )
  {
    sub_1B640C8(&Method_StonePurchaseMenu_OnClickBack__, method);
    byte_49F9CCE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    StonePurchaseMenu__Callback(this, 0, v5);
  }
}


void __fastcall StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_String_o *WebViewAddress_38174564; // x20
  System_String_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x22

  if ( (byte_49F9CCF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_StonePurchaseMenu_OnClickExplanation__, v5);
    sub_1B640C8(&Method_StonePurchaseMenu_OnEndWebView__, v6);
    sub_1B640C8(&WebViewManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_15484/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, v8);
    byte_49F9CCF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v9 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_OnClickExplanation__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_38174564 = NetworkManager__getWebViewAddress_38174564(8, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15484/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v12, WebViewAddress_38174564, v15, 0LL);
  }
}


void __fastcall StonePurchaseMenu__OnClickHistory(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49F9CD0 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_PaymentHistoryRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_StonePurchaseMenu_OnClickHistory__, v5);
    sub_1B640C8(&Method_StonePurchaseMenu__OnClickHistory_b__40_0__, v6);
    byte_49F9CD0 = 1;
  }
  v7 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_OnClickHistory__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__40_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  PaymentHistoryRequest__beginRequest((PaymentHistoryRequest_o *)Request_object, 1, 0LL);
}


void __fastcall StonePurchaseMenu__OnEndWebView(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall StonePurchaseMenu__OnMoveEnd(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  int32_t state; // w8
  int32_t v6; // w2
  int32_t v7; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2

  if ( (byte_49F9CCC & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_49F9CCC = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v12 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v13);
      if ( !ItemListViewManager )
        sub_1B64324(v14);
      ItemListViewManager->fields.callbackFunc = v12;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
        (int32_t)v12,
        v15,
        v16);
      StonePurchaseListViewManager__SetMode_34596376(ItemListViewManager, 1, v17);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
      v9 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_1B6406C(p_closeCallbackFunc, 0, v6, v7);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
          v9->fields.original_method_info,
          *(_QWORD *)&v9->fields.extra_arg);
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
void __fastcall StonePurchaseMenu__OnSelectAgeVerification(
        StonePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t state; // w8
  AgeVerificationMenu_o *ageVerificationMenu; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2

  if ( (byte_49F9CCB & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5);
    byte_49F9CCB = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close_34584856(ageVerificationMenu, 0LL, method);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v9);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v11 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                             v8,
                                                             v9);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v12);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v11;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
          (int32_t)v11,
          v13,
          v14);
        StonePurchaseListViewManager__SetMode_34596376(ItemListViewManager, 1, v15);
        return;
      }
    }
    sub_1B64324(ageVerificationMenu);
  }
  if ( state == 7 )
  {
    this->fields.state = 9;
    this->fields.ageVerificationResult = result;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__OnSelectBuyItem(StonePurchaseMenu_o *this, int32_t n, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49F9CCD & 1) == 0 )
  {
    sub_1B640C8(&Method_StonePurchaseMenu_OnSelectBuyItem__, *(_QWORD *)&n);
    byte_49F9CCD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    this->fields.selectItemNum = n;
    StonePurchaseMenu__SelectBuyBankItemConfirm(this, v7);
  }
}


void __fastcall StonePurchaseMenu__OnSelectWarning(StonePurchaseMenu_o *this, bool isDecide, const MethodInfo *method)
{
  ErrorDialog_o *warningDialog; // x0
  const MethodInfo *v5; // x2

  if ( this->fields.state == 14 )
  {
    warningDialog = this->fields.warningDialog;
    if ( !warningDialog )
      sub_1B64324(0LL);
    ErrorDialog__Close(warningDialog, 0LL);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void __fastcall StonePurchaseMenu__Open(
        StonePurchaseMenu_o *this,
        StonePurchaseMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *gameObject; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  UILabel_o *stoneDataLabel; // x20
  int32_t v24; // w21
  UnityEngine_GameObject_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_int__o *v28; // x21
  const MethodInfo *v29; // x2
  AgeVerificationMenu_c *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v34; // x21
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v40; // x21
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x20

  if ( (byte_49F9CC2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, callback);
    sub_1B640C8(&System_Action_TypeInfo, v7);
    sub_1B640C8(&AgeVerificationMenu_TypeInfo, v8);
    sub_1B640C8(&AgeVerificationMenu_CallbackFunc_TypeInfo, v9);
    sub_1B640C8(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&Method_StonePurchaseMenu_OnMoveEnd__, v14);
    sub_1B640C8(&Method_StonePurchaseMenu_OnSelectAgeVerification__, v15);
    sub_1B640C8(&Method_StonePurchaseMenu_OnSelectBuyItem__, v16);
    sub_1B640C8(&Method_StonePurchaseMenu__Open_b__20_0__, v17);
    byte_49F9CC2 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.refreshCallbackFunc,
        (int32_t)refreshCallback,
        v21,
        v22);
      gameObject = this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
        gameObject = UserGameMaster__getSelfUserGame(0LL);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v24 = *((_DWORD *)gameObject + 44);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__GetNumberFormat(v24, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v28 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v26, v27);
            System_Action_int____ctor(v28, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__20_0__, 0LL);
            StoneCountRefreshComponent__AttachToGameObject(v25, v28, 0, 0LL);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v29);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              PurchaseBehaviour__ActivateBoth(0LL);
              v30 = AgeVerificationMenu_TypeInfo;
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              if ( AgeVerificationMenu__IsConcent((const MethodInfo *)v30) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v34 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                                       v31,
                                                                       v32);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v34,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v35);
                if ( !ItemListViewManager )
                  goto LABEL_22;
                ItemListViewManager->fields.callbackFunc = v34;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
                  (int32_t)v34,
                  v36,
                  v37);
                StonePurchaseListViewManager__SetMode_34596376(ItemListViewManager, 1, v38);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v40 = (AgeVerificationMenu_CallbackFunc_o *)sub_1B64314(
                                                              AgeVerificationMenu_CallbackFunc_TypeInfo,
                                                              v31,
                                                              v32);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v40,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  v41);
                if ( !ageVerificationMenu )
                  goto LABEL_22;
                AgeVerificationMenu__Open(ageVerificationMenu, v40, v42);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                *((_BYTE *)gameObject + 33) = 1;
                v45 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
                System_Action___ctor(v45, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B64324(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__RequestCancelPurchaseByBank(
        StonePurchaseMenu_o *this,
        int32_t shopId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  CancelPurchaseByBankRequest_o *Request_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_49F9CC9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, *(_QWORD *)&shopId);
    sub_1B640C8(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass28_0__RequestCancelPurchaseByBank_b__0__, v9);
    sub_1B640C8(&StonePurchaseMenu___c__DisplayClass28_0_TypeInfo, v10);
    byte_49F9CC9 = 1;
  }
  v11 = sub_1B64314(StonePurchaseMenu___c__DisplayClass28_0_TypeInfo, *(_QWORD *)&shopId, callback);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)callback, v13, v14);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0LL);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)v11,
      Method_StonePurchaseMenu___c__DisplayClass28_0__RequestCancelPurchaseByBank_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v18,
                                                        (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0LL);
      return;
    }
LABEL_13:
    sub_1B64324(Request_object);
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0LL);
}


void __fastcall StonePurchaseMenu__SelectBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  StonePurchaseListViewManager_o *ItemListViewManager; // x0
  StonePurchaseListViewItem_o *Item; // x20
  StonePurchaseListViewManager_o *v11; // x21
  UnityEngine_Object_o *Instance; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  BankShopEntity_o *bankShop; // x20
  PurchaseLogic_ProductFinishedAction_o *v16; // x22

  if ( (byte_49F9CC5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&PurchaseLogic_ProductFinishedAction_TypeInfo, v6);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v7);
    sub_1B640C8(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152, v8);
    byte_49F9CC5 = 1;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemListViewManager, 1, 0LL);
    ItemListViewManager = (StonePurchaseListViewManager_o *)this->fields.buyItemMask;
    if ( !ItemListViewManager )
      goto LABEL_22;
    ItemListViewManager = (StonePurchaseListViewManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)ItemListViewManager,
                                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v11 = ItemListViewManager;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    if ( !v11 )
      goto LABEL_22;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, Il2CppMethodPointer, float))v11->klass->vtable._8_ItemDragEnd.method)(
      v11,
      v11->klass->vtable._9_SetSortKind.methodPtr,
      ManagerConfig_TypeInfo->static_fields->MINIMUM_ENABLE_ALPHA);
    TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 1.0, 0LL);
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
    {
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance(0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ItemListViewManager = (StonePurchaseListViewManager_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
      if ( ((unsigned __int8)ItemListViewManager & 1) != 0 )
      {
        if ( Item )
        {
          bankShop = Item->fields.bankShop;
          v16 = (PurchaseLogic_ProductFinishedAction_o *)sub_1B64314(
                                                           PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                           v13,
                                                           v14);
          PurchaseLogic_ProductFinishedAction___ctor(
            v16,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v16, 0LL);
            return;
          }
        }
LABEL_22:
        sub_1B64324(ItemListViewManager);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm(
        StonePurchaseMenu_o *this,
        int32_t result,
        int32_t perMonthAmount,
        int32_t freeStoneNum,
        int32_t chargeStoneNum,
        int32_t shopId,
        bool isSentGift,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x20
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  StonePurchaseMenu_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  System_Action_o *v37; // x2
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t v40; // w21
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_o *v43; // x0
  __int64 *v44; // x8
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x25
  const MethodInfo *v51; // x7
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t v68; // w20
  System_Action_o *v69; // x21
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  _QWORD *v74; // x0
  System_Reflection_MethodBase_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  System_Action_o *v82; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_49F9CC7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__, v15);
    sub_1B640C8(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v16);
    sub_1B640C8(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152, v17);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__0__, v18);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__1__, v19);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__2__, v20);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__3__, v21);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__4__, v22);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__5__, v23);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__6__, v24);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__7__, v25);
    sub_1B640C8(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__8__, v26);
    sub_1B640C8(&StonePurchaseMenu___c__DisplayClass26_0_TypeInfo, v27);
    byte_49F9CC7 = 1;
  }
  v28 = sub_1B64314(StonePurchaseMenu___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&perMonthAmount);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
LABEL_41:
    sub_1B64324(v29);
  *(_QWORD *)(v28 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v30, v31);
  *(_DWORD *)(v28 + 24) = shopId;
  *(_DWORD *)(v28 + 28) = perMonthAmount;
  v32 = (StonePurchaseMenu_o *)TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v45 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v45, v45[4]);
      OverwriteAssetSoundName__PlaySystemSe(v46, 8, 0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v48, v49);
      System_Action___ctor(v50, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_41;
      StonePurchaseNotificationMenu__Open(
        stonePurchaseNotificationMenu,
        1,
        v50,
        freeStoneNum,
        chargeStoneNum,
        *(_DWORD *)(v28 + 24),
        isSentGift,
        v51);
      break;
    case 4:
      break;
    case 5:
      v56 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v56 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v57 = (System_Reflection_MethodBase_o *)sub_1B640AC(v56, v56[4]);
      OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0LL);
      this->fields.state = 14;
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v58, v59);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v60 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v60 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v61 = (System_Reflection_MethodBase_o *)sub_1B640AC(v60, v60[4]);
      OverwriteAssetSoundName__PlaySystemSe(v61, 1, 0LL);
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v62, v63);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v64 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v64 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v65 = (System_Reflection_MethodBase_o *)sub_1B640AC(v64, v64[4]);
      OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0LL);
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v66, v67);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v68 = *(_DWORD *)(v28 + 24);
      v69 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
      System_Action___ctor(v69, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0LL);
      v36 = v68;
      v37 = v69;
      goto LABEL_37;
    case 10:
      this->fields.state = 10;
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v38 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v38, v38[4]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0LL);
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v41, v42);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v70 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v70 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v71 = (System_Reflection_MethodBase_o *)sub_1B640AC(v70, v70[4]);
      OverwriteAssetSoundName__PlaySystemSe(v71, 2, 0LL);
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v72, v73);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v74 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v74 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v75 = (System_Reflection_MethodBase_o *)sub_1B640AC(v74, v74[4]);
      OverwriteAssetSoundName__PlaySystemSe(v75, 2, 0LL);
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v76, v77);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v78 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v78 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v79 = (System_Reflection_MethodBase_o *)sub_1B640AC(v78, v78[4]);
      OverwriteAssetSoundName__PlaySystemSe(v79, 0, 0LL);
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v80, v81);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v36 = *(_DWORD *)(v28 + 24);
      v37 = 0LL;
      goto LABEL_37;
    default:
      v52 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152 + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___75817152);
      v53 = (System_Reflection_MethodBase_o *)sub_1B640AC(v52, v52[4]);
      OverwriteAssetSoundName__PlaySystemSe(v53, 2, 0LL);
      v40 = *(_DWORD *)(v28 + 24);
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v55);
      v44 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v82 = v43;
      System_Action___ctor(v43, (Il2CppObject *)v28, *v44, 0LL);
      v36 = v40;
      v37 = v82;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v32, v36, v37, v35);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_34610020(
        StonePurchaseMenu_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  int32_t v24; // w21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x23
  __int64 v28; // x0
  const MethodInfo *v29; // x7
  int32_t v30; // w1
  StonePurchaseNotificationMenu_o *v31; // x0
  System_Action_o *v32; // x2
  int32_t v33; // w3
  int32_t v34; // w4
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  ErrorDialog_ClickDelegate_o *v41; // x22
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  struct StonePurchaseNotificationMenu_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  System_Action_o *v47; // x21
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  struct StonePurchaseNotificationMenu_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v58; // x22
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v62; // 0:x6.12

  if ( (byte_49F9CC8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&SpendLimitMenu_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v10);
    sub_1B640C8(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v11);
    sub_1B640C8(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v12);
    sub_1B640C8(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v13);
    sub_1B640C8(&Method_StonePurchaseMenu_EndSpendLimit__, v14);
    sub_1B640C8(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__, v15);
    sub_1B640C8(&StringLiteral_12233/*"STONE_PURCHASE_RESULT_WAIT"*/, v16);
    byte_49F9CC8 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v19 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v20 = (System_Reflection_MethodBase_o *)sub_1B640AC(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 8, 0LL);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0LL);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v24 = TotalAddedChargeStoneNum;
      v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_35;
      v30 = 1;
      v31 = stonePurchaseNotificationMenu;
      v32 = v27;
      v33 = TotalAddedFreeStoneNum;
      v34 = v24;
      goto LABEL_29;
    case 3:
      v35 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v36 = (System_Reflection_MethodBase_o *)sub_1B640AC(v35, v35[4]);
      OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v41 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v39, v40);
      ErrorDialog_ClickDelegate___ctor(
        v41,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v62.fields.hasValue = 0LL;
      v62.fields.value.fields.y = 0.0;
      ErrorDialog__Open_38368544(warningDialog, 0LL, v38, v41, 1, -1.0, 1, v62, 0LL);
      goto LABEL_32;
    case 4:
      v42 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v43 = (System_Reflection_MethodBase_o *)sub_1B640AC(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0LL);
      v44 = this->fields.stonePurchaseNotificationMenu;
      v47 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v45, v46);
      System_Action___ctor(v47, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v44 )
        goto LABEL_35;
      v31 = v44;
      v30 = 0;
      goto LABEL_28;
    case 6:
      v53 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v53 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v54 = (System_Reflection_MethodBase_o *)sub_1B640AC(v53, v53[4]);
      OverwriteAssetSoundName__PlaySystemSe(v54, 2, 0LL);
      v50 = this->fields.stonePurchaseNotificationMenu;
      v47 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v55, v56);
      System_Action___ctor(v47, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v50 )
        goto LABEL_35;
      v30 = 5;
      goto LABEL_27;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v17);
      goto LABEL_32;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v58 = (SpendLimitMenu_CallbackFunc_o *)sub_1B64314(SpendLimitMenu_CallbackFunc_TypeInfo, v17, v18);
      SpendLimitMenu_CallbackFunc___ctor(v58, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v59);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v58, v60);
      goto LABEL_32;
    default:
      v48 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v48 = (_QWORD *)sub_1B640E0(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v49 = (System_Reflection_MethodBase_o *)sub_1B640AC(v48, v48[4]);
      OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0LL);
      v50 = this->fields.stonePurchaseNotificationMenu;
      v47 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v52);
      System_Action___ctor(v47, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v50 )
LABEL_35:
        sub_1B64324(v28);
      v30 = 4;
LABEL_27:
      v31 = v50;
LABEL_28:
      v32 = v47;
      v33 = 0;
      v34 = 0;
LABEL_29:
      StonePurchaseNotificationMenu__Open(v31, v30, v32, v33, v34, 0, 0, v29);
LABEL_32:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
          refreshCallbackFunc->fields.original_method_info,
          *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
      return;
  }
}


void __fastcall StonePurchaseMenu__UpdateListView(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *ItemListViewManager; // x0
  const MethodInfo *v4; // x2

  ItemListViewManager = (ListViewManager_o *)this->fields.ItemListViewManager;
  if ( !ItemListViewManager
    || (ListViewManager__set_IsInput(ItemListViewManager, 0, 0LL),
        (ItemListViewManager = (ListViewManager_o *)this->fields.ItemListViewManager) == 0LL)
    || (ListViewManager__DestroyList(ItemListViewManager, 0LL),
        (ItemListViewManager = (ListViewManager_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1B64324(ItemListViewManager);
  }
  StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)ItemListViewManager, 0, v4);
}


void __fastcall StonePurchaseMenu___OnClickHistory_b__40_0(
        StonePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PaymentHistoryDialog_o *paymentHistoryDialog; // x0

  paymentHistoryDialog = this->fields.paymentHistoryDialog;
  if ( !paymentHistoryDialog )
    sub_1B64324(0LL);
  PaymentHistoryDialog__Open(paymentHistoryDialog, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu___Open_b__20_0(
        StonePurchaseMenu_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0

  if ( (byte_49F9CD3 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_49F9CD3 = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_1B64324(NumberFormat);
  UILabel__set_text(stoneDataLabel, NumberFormat, 0LL);
}


void __fastcall StonePurchaseMenu__add_callbackFunc(
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

  if ( (byte_49F9CBF & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_49F9CBF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (StonePurchaseMenu_CallbackFunc_c *)v8->klass != StonePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F9CD1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8784/*"MainPanel/BaseView/CloseButton"*/, method);
    byte_49F9CD1 = 1;
  }
  return (System_String_o *)StringLiteral_8784/*"MainPanel/BaseView/CloseButton"*/;
}


void __fastcall StonePurchaseMenu__remove_callbackFunc(
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

  if ( (byte_49F9CC0 & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_49F9CC0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (StonePurchaseMenu_CallbackFunc_c *)v8->klass != StonePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  StonePurchaseMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu_CallbackFunc___ctor(
        StonePurchaseMenu_CallbackFunc_o *this,
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A9458;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A9410;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall StonePurchaseMenu_CallbackFunc__BeginInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_49F9CD4 & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_49F9CD4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall StonePurchaseMenu_CallbackFunc__Invoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___ctor(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__0(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x20
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x7

  v3 = this;
  if ( (byte_49F9CD5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v4);
    byte_49F9CD5 = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v7, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  StonePurchaseNotificationMenu__Open(monitor, 0, v7, 0, 0, v3->fields.shopId, 0, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__1(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct StonePurchaseMenu_o *_4__this; // x8
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x22
  System_String_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  ErrorDialog_ClickDelegate_o *v13; // x21
  System_Nullable_Vector2__o v14; // 0:x6.12

  v2 = this;
  if ( (byte_49F9CD6 & 1) == 0 )
  {
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v4);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(&StringLiteral_12233/*"STONE_PURCHASE_RESULT_WAIT"*/, v5);
    byte_49F9CD6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
  v9 = (Il2CppObject *)v2->fields.__4__this;
  v10 = v8;
  v13 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v11, v12);
  ErrorDialog_ClickDelegate___ctor(v13, v9, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0LL);
  if ( !warningDialog )
LABEL_8:
    sub_1B64324(this);
  *(_QWORD *)&v14.fields.hasValue = 0LL;
  v14.fields.value.fields.y = 0.0;
  ErrorDialog__Open_38368544(warningDialog, 0LL, v10, v13, 1, -1.0, 1, v14, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__2(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x7

  v3 = this;
  if ( (byte_49F9CD7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__,
                                                          v4);
    byte_49F9CD7 = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v7, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  StonePurchaseNotificationMenu__Open(monitor, 5, v7, 0, 0, 0, 0, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__3(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x7

  v3 = this;
  if ( (byte_49F9CD8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v4);
    byte_49F9CD8 = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v7, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  StonePurchaseNotificationMenu__Open(monitor, 6, v7, 0, 0, 0, 0, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__4(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x21
  SpendLimitMenu_o *monitor; // x20
  int32_t perMonthAmount; // w19
  SpendLimitMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  v3 = this;
  if ( (byte_49F9CD9 & 1) == 0 )
  {
    sub_1B640C8(&SpendLimitMenu_CallbackFunc_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(&Method_StonePurchaseMenu_EndSpendLimit__, v4);
    byte_49F9CD9 = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (SpendLimitMenu_o *)_4__this[8].monitor,
        perMonthAmount = v3->fields.perMonthAmount,
        v8 = (SpendLimitMenu_CallbackFunc_o *)sub_1B64314(SpendLimitMenu_CallbackFunc_TypeInfo, method, v2),
        SpendLimitMenu_CallbackFunc___ctor(v8, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, v9),
        !monitor) )
  {
    sub_1B64324(this);
  }
  SpendLimitMenu__Open(monitor, perMonthAmount, v8, v10);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__5(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x7

  v3 = this;
  if ( (byte_49F9CDA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v4);
    byte_49F9CDA = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v7, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  StonePurchaseNotificationMenu__Open(monitor, 7, v7, 0, 0, 0, 0, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__6(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x7

  v3 = this;
  if ( (byte_49F9CDB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v4);
    byte_49F9CDB = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v7, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  StonePurchaseNotificationMenu__Open(monitor, 8, v7, 0, 0, 0, 0, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__7(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x7

  v3 = this;
  if ( (byte_49F9CDC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v4);
    byte_49F9CDC = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v7, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  StonePurchaseNotificationMenu__Open(monitor, 9, v7, 0, 0, 0, 0, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__8(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x7

  v3 = this;
  if ( (byte_49F9CDD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B640C8(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v4);
    byte_49F9CDD = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v7, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  StonePurchaseNotificationMenu__Open(monitor, 4, v7, 0, 0, 0, 0, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass28_0___ctor(
        StonePurchaseMenu___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass28_0___RequestCancelPurchaseByBank_b__0(
        StonePurchaseMenu___c__DisplayClass28_0_o *this,
        System_String_o *responseResult,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0LL);
}