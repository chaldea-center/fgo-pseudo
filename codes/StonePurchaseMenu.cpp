void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A586DC & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A586DC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A586CE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A586CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A586D4 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4A586D4 = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B887FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v7),
          !ItemListViewManager) )
    {
      sub_1B8880C(buyItemMask, v3);
    }
    ItemListViewManager->fields.callbackFunc = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v6, v8, v9);
    StonePurchaseListViewManager__SetMode_34686176(ItemListViewManager, 1, v10);
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
  sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_4A586CD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_StonePurchaseMenu_OnMoveEnd__);
    byte_4A586CD = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v7);
  }
  if ( callback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(0LL, method);
  StonePurchaseNotificationMenu__Close_34706188(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_1B8880C(0LL, method);
  StonePurchaseNotificationMenu__Close_34706188(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_1B8880C(0LL, method);
  StonePurchaseNotificationMenu__Close_34706188(stonePurchaseNotificationMenu, 0LL, v2);
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
      sub_1B8880C(0LL, isDecide);
    ErrorDialog__Close(warningDialog, 0LL);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void __fastcall StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A586D0 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4A586D0 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close_34678588(spendLimitMenu, 0LL, v2),
        ItemListViewManager = this->fields.ItemListViewManager,
        v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B887FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v7),
        !ItemListViewManager) )
  {
    sub_1B8880C(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v6, v8, v9);
  StonePurchaseListViewManager__SetMode_34686176(ItemListViewManager, 1, v10);
  this->fields.state = 2;
}


void __fastcall StonePurchaseMenu__Init(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_4A586CB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A586CB = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  this->fields.refreshCallbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.refreshCallbackFunc, 0, v5, v6);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1B8880C(stoneDataLabel, v7);
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

  if ( (byte_4A586D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_StonePurchaseMenu_OnClickBack__);
    byte_4A586D8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    StonePurchaseMenu__Callback(this, 0, v5);
  }
}


void __fastcall StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *WebViewAddress_38491324; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22

  if ( (byte_4A586D9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_OnClickExplanation__);
    sub_1B885B0(&Method_StonePurchaseMenu_OnEndWebView__);
    sub_1B885B0(&WebViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15552/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/);
    byte_4A586D9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_OnClickExplanation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_38491324 = NetworkManager__getWebViewAddress_38491324(8, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15552/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v6, WebViewAddress_38491324, v7, 0LL);
  }
}


void __fastcall StonePurchaseMenu__OnClickHistory(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4A586DA & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_OnClickHistory__);
    sub_1B885B0(&Method_StonePurchaseMenu__OnClickHistory_b__40_0__);
    byte_4A586DA = 1;
  }
  v3 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_OnClickHistory__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__40_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v7);
  PaymentHistoryRequest__beginRequest((PaymentHistoryRequest_o *)Request_object, 1, 0LL);
}


void __fastcall StonePurchaseMenu__OnEndWebView(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall StonePurchaseMenu__OnMoveEnd(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2

  if ( (byte_4A586D6 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4A586D6 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v11 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B887FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v12);
      if ( !ItemListViewManager )
        sub_1B8880C(v13, v14);
      ItemListViewManager->fields.callbackFunc = v11;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
        (int32_t)v11,
        v15,
        v16);
      StonePurchaseListViewManager__SetMode_34686176(ItemListViewManager, 1, v17);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
      v8 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_1B88554(p_closeCallbackFunc, 0, v5, v6);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
          v8->fields.original_method_info,
          *(_QWORD *)&v8->fields.extra_arg);
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
  int32_t state; // w8
  AgeVerificationMenu_o *ageVerificationMenu; // x0
  const MethodInfo *v7; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_4A586D5 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4A586D5 = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close_34674656(ageVerificationMenu, 0LL, method);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v7);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v9 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B887FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v10);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v9;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
          (int32_t)v9,
          v11,
          v12);
        StonePurchaseListViewManager__SetMode_34686176(ItemListViewManager, 1, v13);
        return;
      }
    }
    sub_1B8880C(ageVerificationMenu, *(_QWORD *)&result);
  }
  if ( state == 7 )
  {
    this->fields.state = 9;
    this->fields.ageVerificationResult = result;
  }
}


void __fastcall StonePurchaseMenu__OnSelectBuyItem(StonePurchaseMenu_o *this, int32_t n, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A586D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4A586D7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
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
      sub_1B8880C(0LL, isDecide);
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
  void *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  UILabel_o *stoneDataLabel; // x20
  int32_t v14; // w21
  UnityEngine_GameObject_o *v15; // x20
  System_Action_int__o *v16; // x21
  const MethodInfo *v17; // x2
  AgeVerificationMenu_c *v18; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v26; // x21
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  System_Action_o *v29; // x20

  if ( (byte_4A586CC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AgeVerificationMenu_TypeInfo);
    sub_1B885B0(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_StonePurchaseMenu_OnMoveEnd__);
    sub_1B885B0(&Method_StonePurchaseMenu_OnSelectAgeVerification__);
    sub_1B885B0(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_1B885B0(&Method_StonePurchaseMenu__Open_b__20_0__);
    byte_4A586CC = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.refreshCallbackFunc,
        (int32_t)refreshCallback,
        v11,
        v12);
      gameObject = this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
        gameObject = UserGameMaster__getSelfUserGame(0LL);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v14 = *((_DWORD *)gameObject + 44);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__GetNumberFormat(v14, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v16 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
            System_Action_int____ctor(v16, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__20_0__, 0LL);
            StoneCountRefreshComponent__AttachToGameObject(v15, v16, 0, 0LL);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v17);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              PurchaseBehaviour__ActivateBoth(0LL);
              v18 = AgeVerificationMenu_TypeInfo;
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              if ( AgeVerificationMenu__IsConcent((const MethodInfo *)v18) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v20 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B887FC(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v20,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v21);
                if ( !ItemListViewManager )
                  goto LABEL_22;
                ItemListViewManager->fields.callbackFunc = v20;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
                  (int32_t)v20,
                  v22,
                  v23);
                StonePurchaseListViewManager__SetMode_34686176(ItemListViewManager, 1, v24);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v26 = (AgeVerificationMenu_CallbackFunc_o *)sub_1B887FC(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v26,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  v27);
                if ( !ageVerificationMenu )
                  goto LABEL_22;
                AgeVerificationMenu__Open(ageVerificationMenu, v26, v28);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                *((_BYTE *)gameObject + 33) = 1;
                v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(v29, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B8880C(gameObject, v8);
  }
}


void __fastcall StonePurchaseMenu__RequestCancelPurchaseByBank(
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
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_4A586D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass28_0__RequestCancelPurchaseByBank_b__0__);
    sub_1B885B0(&StonePurchaseMenu___c__DisplayClass28_0_TypeInfo);
    byte_4A586D3 = 1;
  }
  v5 = sub_1B887FC(StonePurchaseMenu___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0LL);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)v5,
      Method_StonePurchaseMenu___c__DisplayClass28_0__RequestCancelPurchaseByBank_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v11,
                                                        (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0LL);
      return;
    }
LABEL_13:
    sub_1B8880C(Request_object, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0LL);
}


void __fastcall StonePurchaseMenu__SelectBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseListViewManager_o *ItemListViewManager; // x0
  StonePurchaseListViewItem_o *Item; // x20
  StonePurchaseListViewManager_o *v6; // x21
  UnityEngine_Object_o *Instance; // x21
  BankShopEntity_o *bankShop; // x20
  PurchaseLogic_ProductFinishedAction_o *v9; // x22

  if ( (byte_4A586CF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
    byte_4A586CF = 1;
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
                                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v6 = ItemListViewManager;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    if ( !v6 )
      goto LABEL_22;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_ItemDragStart.method)(
      v6,
      v6->klass->vtable._9_ItemDragEnd.methodPtr,
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
          v9 = (PurchaseLogic_ProductFinishedAction_o *)sub_1B887FC(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v9, 0LL);
            return;
          }
        }
LABEL_22:
        sub_1B8880C(ItemListViewManager, method);
      }
    }
  }
}


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
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  StonePurchaseMenu_o *v20; // x0
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  System_Action_o *v23; // x2
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  int32_t v26; // w21
  System_Action_o *v27; // x0
  __int64 *v28; // x8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  System_Action_o *v32; // x25
  const MethodInfo *v33; // x7
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  int32_t v42; // w20
  System_Action_o *v43; // x21
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  System_Action_o *v50; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4A586D1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__);
    sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_1B885B0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__0__);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__1__);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__2__);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__3__);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__4__);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__5__);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__6__);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__7__);
    sub_1B885B0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__8__);
    sub_1B885B0(&StonePurchaseMenu___c__DisplayClass26_0_TypeInfo);
    byte_4A586D1 = 1;
  }
  v15 = sub_1B887FC(StonePurchaseMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
LABEL_41:
    sub_1B8880C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_DWORD *)(v15 + 24) = shopId;
  *(_DWORD *)(v15 + 28) = perMonthAmount;
  v20 = (StonePurchaseMenu_o *)TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v29 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v30 = (System_Reflection_MethodBase_o *)sub_1B88594(v29, v29[4]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 8, 0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_41;
      StonePurchaseNotificationMenu__Open(
        stonePurchaseNotificationMenu,
        1,
        v32,
        freeStoneNum,
        chargeStoneNum,
        *(_DWORD *)(v15 + 24),
        isSentGift,
        v33);
      break;
    case 4:
      break;
    case 5:
      v36 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v36 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v37 = (System_Reflection_MethodBase_o *)sub_1B88594(v36, v36[4]);
      OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0LL);
      this->fields.state = 14;
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v38 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v39 = (System_Reflection_MethodBase_o *)sub_1B88594(v38, v38[4]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0LL);
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v40 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v40 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v41 = (System_Reflection_MethodBase_o *)sub_1B88594(v40, v40[4]);
      OverwriteAssetSoundName__PlaySystemSe(v41, 2, 0LL);
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v42 = *(_DWORD *)(v15 + 24);
      v43 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0LL);
      v22 = v42;
      v23 = v43;
      goto LABEL_37;
    case 10:
      this->fields.state = 10;
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v24 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v25 = (System_Reflection_MethodBase_o *)sub_1B88594(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v44 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v44 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v45 = (System_Reflection_MethodBase_o *)sub_1B88594(v44, v44[4]);
      OverwriteAssetSoundName__PlaySystemSe(v45, 2, 0LL);
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v46 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v46 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v47 = (System_Reflection_MethodBase_o *)sub_1B88594(v46, v46[4]);
      OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0LL);
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v48 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v48 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v49 = (System_Reflection_MethodBase_o *)sub_1B88594(v48, v48[4]);
      OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0LL);
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v22 = *(_DWORD *)(v15 + 24);
      v23 = 0LL;
      goto LABEL_37;
    default:
      v34 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360 + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76197360);
      v35 = (System_Reflection_MethodBase_o *)sub_1B88594(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
      v26 = *(_DWORD *)(v15 + 24);
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v28 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v50 = v27;
      System_Action___ctor(v27, (Il2CppObject *)v15, *v28, 0LL);
      v22 = v26;
      v23 = v50;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v20, v22, v23, v21);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
}


void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_34700032(
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
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v42; // 0:x6.12

  if ( (byte_4A586D2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&SpendLimitMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    sub_1B885B0(&Method_StonePurchaseMenu_EndSpendLimit__);
    sub_1B885B0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_1B885B0(&StringLiteral_12288/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_4A586D2 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v8 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0LL);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v13 = TotalAddedChargeStoneNum;
      v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
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
        v23 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v24 = (System_Reflection_MethodBase_o *)sub_1B88594(v23, v23[4]);
      OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v27 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v27,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v42.fields.hasValue = 0LL;
      v42.fields.value.fields.y = 0.0;
      ErrorDialog__Open_38606480(warningDialog, 0LL, v26, v27, 1, -1.0, 1, v42, 0LL);
      goto LABEL_32;
    case 4:
      v28 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v29 = (System_Reflection_MethodBase_o *)sub_1B88594(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0LL);
      v30 = this->fields.stonePurchaseNotificationMenu;
      v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v30 )
        goto LABEL_35;
      v19 = v30;
      v18 = 0;
      goto LABEL_28;
    case 6:
      v35 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v36 = (System_Reflection_MethodBase_o *)sub_1B88594(v35, v35[4]);
      OverwriteAssetSoundName__PlaySystemSe(v36, 2, 0LL);
      v34 = this->fields.stonePurchaseNotificationMenu;
      v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
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
      v38 = (SpendLimitMenu_CallbackFunc_o *)sub_1B887FC(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v38, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v39);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v38, v40);
      goto LABEL_32;
    default:
      v32 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1B885C8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v33 = (System_Reflection_MethodBase_o *)sub_1B88594(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0LL);
      v34 = this->fields.stonePurchaseNotificationMenu;
      v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v34 )
LABEL_35:
        sub_1B8880C(v15, v16);
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
    sub_1B8880C(ItemListViewManager, method);
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
    sub_1B8880C(0LL, result);
  PaymentHistoryDialog__Open(paymentHistoryDialog, 0LL);
}


void __fastcall StonePurchaseMenu___Open_b__20_0(
        StonePurchaseMenu_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4A586DD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A586DD = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_1B8880C(NumberFormat, v7);
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

  if ( (byte_4A586C9 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4A586C9 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A586DB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8826/*"MainPanel/BaseView/CloseButton"*/);
    byte_4A586DB = 1;
  }
  return (System_String_o *)StringLiteral_8826/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_4A586CA & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4A586CA = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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
  this->fields.m_target = (Il2CppObject *)sub_19CB93C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB8F4;
}


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
  if ( (byte_4A586DE & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseMenu_Result_TypeInfo);
    byte_4A586DE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x20
  System_Action_o *v5; // x22
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4A586DF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4A586DF = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 0, v5, 0, 0, v2->fields.shopId, 0, v6);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__1(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  struct StonePurchaseMenu_o *_4__this; // x8
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v5; // x0
  Il2CppObject *v6; // x22
  System_String_o *v7; // x19
  ErrorDialog_ClickDelegate_o *v8; // x21
  System_Nullable_Vector2__o v9; // 0:x6.12

  v2 = this;
  if ( (byte_4A586E0 & 1) == 0 )
  {
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&StringLiteral_12288/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_4A586E0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
  v6 = (Il2CppObject *)v2->fields.__4__this;
  v7 = v5;
  v8 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v8, v6, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0LL);
  if ( !warningDialog )
LABEL_8:
    sub_1B8880C(this, method);
  *(_QWORD *)&v9.fields.hasValue = 0LL;
  v9.fields.value.fields.y = 0.0;
  ErrorDialog__Open_38606480(warningDialog, 0LL, v7, v8, 1, -1.0, 1, v9, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__2(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4A586E1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    byte_4A586E1 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 5, v5, 0, 0, 0, 0, v6);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__3(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4A586E2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4A586E2 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 6, v5, 0, 0, 0, 0, v6);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__4(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  SpendLimitMenu_o *monitor; // x20
  int32_t perMonthAmount; // w19
  SpendLimitMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4A586E3 & 1) == 0 )
  {
    sub_1B885B0(&SpendLimitMenu_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&Method_StonePurchaseMenu_EndSpendLimit__);
    byte_4A586E3 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (SpendLimitMenu_o *)_4__this[8].monitor,
        perMonthAmount = v2->fields.perMonthAmount,
        v6 = (SpendLimitMenu_CallbackFunc_o *)sub_1B887FC(SpendLimitMenu_CallbackFunc_TypeInfo),
        SpendLimitMenu_CallbackFunc___ctor(v6, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, v7),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  SpendLimitMenu__Open(monitor, perMonthAmount, v6, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__5(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4A586E4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4A586E4 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 7, v5, 0, 0, 0, 0, v6);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__6(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4A586E5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4A586E5 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 8, v5, 0, 0, 0, 0, v6);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__7(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4A586E6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4A586E6 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 9, v5, 0, 0, 0, 0, v6);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__8(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4A586E7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1B885B0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4A586E7 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 4, v5, 0, 0, 0, 0, v6);
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