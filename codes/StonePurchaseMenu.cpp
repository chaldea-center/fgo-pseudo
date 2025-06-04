void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AFFC2F & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFFC2F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AFFC20 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, method);
    byte_4AFFC20 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4AFFC26 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_4AFFC26 = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v7 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BC3254(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v8),
          !ItemListViewManager) )
    {
      sub_1BC3264(buyItemMask, v4);
    }
    ItemListViewManager->fields.callbackFunc = v7;
    sub_1BC2FAC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v7, v9, v10);
    StonePurchaseListViewManager__SetMode_37181688(ItemListViewManager, 1, v11);
    this->fields.state = 2;
  }
}


void __fastcall StonePurchaseMenu__Callback(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct StonePurchaseMenu_CallbackFunc_o *v5; // x20
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_1BC2FAC(p_callbackFunc, 0, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4AFFC1F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_StonePurchaseMenu_OnMoveEnd__, v7);
    byte_4AFFC1F = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
      return;
    }
LABEL_10:
    sub_1BC3264(Instance, v9);
  }
  if ( callback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    BYTE1(Instance[2].klass) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__CloseStonePurchaseWarningDialog(
        StonePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4AFFC2A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass38_0__CloseStonePurchaseWarningDialog_b__0__, v6);
    sub_1BC3008(&StonePurchaseMenu___c__DisplayClass38_0_TypeInfo, v7);
    byte_4AFFC2A = 1;
  }
  v8 = sub_1BC3254(StonePurchaseMenu___c__DisplayClass38_0_TypeInfo);
  StonePurchaseMenu___c__DisplayClass38_0___ctor((StonePurchaseMenu___c__DisplayClass38_0_o *)v8, 0LL);
  if ( !v8
    || (*(_BYTE *)(v8 + 16) = isDecide,
        *(_QWORD *)(v8 + 24) = this,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_StonePurchaseMenu___c__DisplayClass38_0__CloseStonePurchaseWarningDialog_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BC3264(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30731324((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall StonePurchaseMenu__EndBuyBankItemNotificationCancel(
        StonePurchaseMenu_o *this,
        const MethodInfo *method)
{
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v4; // x1

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1BC3264(0LL, method);
  StonePurchaseNotificationMenu__Close(stonePurchaseNotificationMenu, 0LL);
  StonePurchaseMenu__BackBuyBankItemConfirm(this, v4);
}


void __fastcall StonePurchaseMenu__EndBuyBankItemNotificationSuccess(
        StonePurchaseMenu_o *this,
        const MethodInfo *method)
{
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v4; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1BC3264(0LL, method);
  StonePurchaseNotificationMenu__Close(stonePurchaseNotificationMenu, 0LL);
  StonePurchaseMenu__Callback(this, 2, v4);
}


void __fastcall StonePurchaseMenu__EndBuyBankItemNotificationSuspend(
        StonePurchaseMenu_o *this,
        const MethodInfo *method)
{
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v4; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1BC3264(0LL, method);
  StonePurchaseNotificationMenu__Close(stonePurchaseNotificationMenu, 0LL);
  StonePurchaseMenu__Callback(this, 1, v4);
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
      sub_1BC3264(0LL, isDecide);
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
  StonePurchaseListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4AFFC22 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_4AFFC22 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close_37174096(spendLimitMenu, 0LL, v2),
        ItemListViewManager = this->fields.ItemListViewManager,
        v7 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BC3254(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v8),
        !ItemListViewManager) )
  {
    sub_1BC3264(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v7, v9, v10);
  StonePurchaseListViewManager__SetMode_37181688(ItemListViewManager, 1, v11);
  this->fields.state = 2;
}


void __fastcall StonePurchaseMenu__Init(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_4AFFC1D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFFC1D = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  this->fields.refreshCallbackFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.refreshCallbackFunc, 0, v5, v6);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1BC3264(stoneDataLabel, v7);
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

  if ( (byte_4AFFC2B & 1) == 0 )
  {
    sub_1BC3008(&Method_StonePurchaseMenu_OnClickBack__, method);
    byte_4AFFC2B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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
  System_String_o *WebViewAddress_40399000; // x20
  System_String_o *v12; // x21
  System_Action_o *v13; // x22

  if ( (byte_4AFFC2C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&Method_StonePurchaseMenu_OnClickExplanation__, v5);
    sub_1BC3008(&Method_StonePurchaseMenu_OnEndWebView__, v6);
    sub_1BC3008(&WebViewManager_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_15408/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, v8);
    byte_4AFFC2C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v9 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_OnClickExplanation__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_40399000 = NetworkManager__getWebViewAddress_40399000(8, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15408/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v12, WebViewAddress_40399000, v13, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4AFFC2D & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_PaymentHistoryRequest___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BC3008(&Method_StonePurchaseMenu_OnClickHistory__, v5);
    sub_1BC3008(&Method_StonePurchaseMenu__OnClickHistory_b__42_0__, v6);
    byte_4AFFC2D = 1;
  }
  v7 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_OnClickHistory__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__42_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_1BC3264(0LL, v11);
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
  const MethodInfo *v7; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2

  if ( (byte_4AFFC28 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_4AFFC28 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v12 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BC3254(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v13);
      if ( !ItemListViewManager )
        sub_1BC3264(v14, v15);
      ItemListViewManager->fields.callbackFunc = v12;
      sub_1BC2FAC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v12, v16, v17);
      StonePurchaseListViewManager__SetMode_37181688(ItemListViewManager, 1, v18);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
      v9 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_1BC2FAC(p_closeCallbackFunc, 0, v6, v7);
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
  const MethodInfo *v8; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4AFFC27 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5);
    byte_4AFFC27 = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close_37170144(ageVerificationMenu, 0LL, method);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v8);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v10 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BC3254(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v11);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v10;
        sub_1BC2FAC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v10, v12, v13);
        StonePurchaseListViewManager__SetMode_37181688(ItemListViewManager, 1, v14);
        return;
      }
    }
    sub_1BC3264(ageVerificationMenu, *(_QWORD *)&result);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v17; // x1
  int freeStone; // w23
  int chargeStone; // w22
  Il2CppObject *Instance; // x20
  System_String_o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  CommonConfirmDialog_ClickDelegate_o *v33; // x24
  int v34; // [xsp+48h] [xbp-38h] BYREF
  int v35; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4AFFC29 & 1) == 0 )
  {
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&n);
    sub_1BC3008(&int_TypeInfo, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BC3008(&Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__, v8);
    sub_1BC3008(&Method_StonePurchaseMenu_OnSelectBuyItem__, v9);
    sub_1BC3008(&StringLiteral_12254/*"STONE_PURCHASE_CONFIRM_CANCEL"*/, v10);
    sub_1BC3008(&StringLiteral_12256/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/, v11);
    sub_1BC3008(&StringLiteral_12255/*"STONE_PURCHASE_CONFIRM_DECIDE"*/, v12);
    sub_1BC3008(&StringLiteral_1/*""*/, v13);
    byte_4AFFC29 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v14 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
    this->fields.selectItemNum = n;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_14;
    freeStone = SelfUserGame->fields.freeStone;
    if ( (freeStone & 0x80000000) == 0 )
    {
      StonePurchaseMenu__SelectBuyBankItemConfirm(this, v17);
      return;
    }
    chargeStone = SelfUserGame->fields.chargeStone;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/, 0LL);
    v35 = chargeStone;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v22, v23, v24);
    v34 = freeStone;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v26, v27, v28);
    v30 = System_String__Format_62389940(v21, v25, v29, 0LL);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12255/*"STONE_PURCHASE_CONFIRM_DECIDE"*/, 0LL);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12254/*"STONE_PURCHASE_CONFIRM_CANCEL"*/, 0LL);
    v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v33,
      (Il2CppObject *)this,
      Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__,
      0LL);
    if ( !Instance )
LABEL_14:
      sub_1BC3264(SelfUserGame, v17);
    CommonUI__OpenConfirmDecideDlg(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v30,
      v31,
      v32,
      v33,
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
      0LL);
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
      sub_1BC3264(0LL, isDecide);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UILabel_o *stoneDataLabel; // x20
  int32_t m_CachedPtr; // w21
  UnityEngine_GameObject_o *v26; // x20
  System_Action_int__o *v27; // x21
  const MethodInfo *v28; // x2
  AgeVerificationMenu_c *v29; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v31; // x21
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v37; // x21
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  System_Action_o *v40; // x20

  if ( (byte_4AFFC1E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, callback);
    sub_1BC3008(&System_Action_TypeInfo, v7);
    sub_1BC3008(&AgeVerificationMenu_TypeInfo, v8);
    sub_1BC3008(&AgeVerificationMenu_CallbackFunc_TypeInfo, v9);
    sub_1BC3008(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&PurchaseBehaviour_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BC3008(&Method_StonePurchaseMenu_OnMoveEnd__, v14);
    sub_1BC3008(&Method_StonePurchaseMenu_OnSelectAgeVerification__, v15);
    sub_1BC3008(&Method_StonePurchaseMenu_OnSelectBuyItem__, v16);
    sub_1BC3008(&Method_StonePurchaseMenu__Open_b__21_0__, v17);
    byte_4AFFC1E = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v20, v21);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.refreshCallbackFunc, (int32_t)refreshCallback, v22, v23);
      gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          m_CachedPtr = gameObject[7].fields.m_CachedPtr;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat(m_CachedPtr, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v27 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
            System_Action_int____ctor(v27, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__21_0__, 0LL);
            StoneCountRefreshComponent__AttachToGameObject(v26, v27, 0, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v28);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              PurchaseBehaviour__ActivateBoth(0LL);
              v29 = AgeVerificationMenu_TypeInfo;
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              if ( AgeVerificationMenu__IsConcent((const MethodInfo *)v29) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v31 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BC3254(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v31,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v32);
                if ( !ItemListViewManager )
                  goto LABEL_22;
                ItemListViewManager->fields.callbackFunc = v31;
                sub_1BC2FAC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v31, v33, v34);
                StonePurchaseListViewManager__SetMode_37181688(ItemListViewManager, 1, v35);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v37 = (AgeVerificationMenu_CallbackFunc_o *)sub_1BC3254(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v37,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  v38);
                if ( !ageVerificationMenu )
                  goto LABEL_22;
                AgeVerificationMenu__Open(ageVerificationMenu, v37, v39);
              }
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                BYTE1(gameObject[1].monitor) = 1;
                v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                System_Action___ctor(v40, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BC3264(gameObject, v19);
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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_4AFFC25 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Contains__, *(_QWORD *)&shopId);
    sub_1BC3008(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&PurchaseBehaviour_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass29_0__RequestCancelPurchaseByBank_b__0__, v9);
    sub_1BC3008(&StonePurchaseMenu___c__DisplayClass29_0_TypeInfo, v10);
    byte_4AFFC25 = 1;
  }
  v11 = sub_1BC3254(StonePurchaseMenu___c__DisplayClass29_0_TypeInfo);
  StonePurchaseMenu___c__DisplayClass29_0___ctor((StonePurchaseMenu___c__DisplayClass29_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)callback, v14, v15);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0LL);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)v11,
      Method_StonePurchaseMenu___c__DisplayClass29_0__RequestCancelPurchaseByBank_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v17,
                                                        (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0LL);
      return;
    }
LABEL_13:
    sub_1BC3264(Request_object, v13);
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
  BankShopEntity_o *bankShop; // x20
  PurchaseLogic_ProductFinishedAction_o *v14; // x22

  if ( (byte_4AFFC21 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1BC3008(&ManagerConfig_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&PurchaseLogic_ProductFinishedAction_TypeInfo, v6);
    sub_1BC3008(&PurchaseBehaviour_TypeInfo, v7);
    sub_1BC3008(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552, v8);
    byte_4AFFC21 = 1;
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
                                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v11 = ItemListViewManager;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    if ( !v11 )
      goto LABEL_22;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, Il2CppMethodPointer, float))v11->klass->vtable._8_ItemDragStart.method)(
      v11,
      v11->klass->vtable._9_ItemDragEnd.methodPtr,
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
          v14 = (PurchaseLogic_ProductFinishedAction_o *)sub_1BC3254(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v14, 0LL);
            return;
          }
        }
LABEL_22:
        sub_1BC3264(ItemListViewManager, method);
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
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  StonePurchaseMenu_o *v33; // x0
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Action_o *v36; // x2
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  int32_t v39; // w21
  System_Action_o *v40; // x0
  __int64 *v41; // x8
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  System_Action_o *v45; // x25
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  int32_t v54; // w20
  System_Action_o *v55; // x21
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  System_Action_o *v62; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4AFFC23 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__, v15);
    sub_1BC3008(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v16);
    sub_1BC3008(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552, v17);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__0__, v18);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__1__, v19);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__2__, v20);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__3__, v21);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__4__, v22);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__5__, v23);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__6__, v24);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__7__, v25);
    sub_1BC3008(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__8__, v26);
    sub_1BC3008(&StonePurchaseMenu___c__DisplayClass27_0_TypeInfo, v27);
    byte_4AFFC23 = 1;
  }
  v28 = sub_1BC3254(StonePurchaseMenu___c__DisplayClass27_0_TypeInfo);
  StonePurchaseMenu___c__DisplayClass27_0___ctor((StonePurchaseMenu___c__DisplayClass27_0_o *)v28, 0LL);
  if ( !v28 )
LABEL_41:
    sub_1BC3264(v29, v30);
  *(_QWORD *)(v28 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 16), (int32_t)this, v31, v32);
  *(_DWORD *)(v28 + 24) = shopId;
  *(_DWORD *)(v28 + 28) = perMonthAmount;
  v33 = (StonePurchaseMenu_o *)TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v42 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v43 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 8, 0, 0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v45 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_41;
      StonePurchaseNotificationMenu__Open(
        stonePurchaseNotificationMenu,
        1,
        v45,
        freeStoneNum,
        chargeStoneNum,
        *(_DWORD *)(v28 + 24),
        isSentGift,
        0LL);
      break;
    case 4:
      break;
    case 5:
      v48 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v48 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v49 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v48, v48[4]);
      OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0, 0LL);
      this->fields.state = 14;
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v50 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v51 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v51, 1, 0, 0LL);
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v52 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v53 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v52, v52[4]);
      OverwriteAssetSoundName__PlaySystemSe(v53, 2, 0, 0LL);
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v54 = *(_DWORD *)(v28 + 24);
      v55 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v55, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0LL);
      v35 = v54;
      v36 = v55;
      goto LABEL_37;
    case 10:
      this->fields.state = 10;
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v37 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v37 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v38 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v37, v37[4]);
      OverwriteAssetSoundName__PlaySystemSe(v38, 2, 0, 0LL);
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v56 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v56 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v57 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v56, v56[4]);
      OverwriteAssetSoundName__PlaySystemSe(v57, 2, 0, 0LL);
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v58 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v58 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v59 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v58, v58[4]);
      OverwriteAssetSoundName__PlaySystemSe(v59, 2, 0, 0LL);
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v60 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v60 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v61 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v60, v60[4]);
      OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0, 0LL);
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v35 = *(_DWORD *)(v28 + 24);
      v36 = 0LL;
      goto LABEL_37;
    default:
      v46 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552 + 83) & 2) != 0 )
        v46 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76917552);
      v47 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v46, v46[4]);
      OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0, 0LL);
      v39 = *(_DWORD *)(v28 + 24);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      v41 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v62 = v40;
      System_Action___ctor(v40, (Il2CppObject *)v28, *v41, 0LL);
      v35 = v39;
      v36 = v62;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v33, v35, v36, v34);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_37192388(
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
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  int32_t v23; // w21
  System_Action_o *v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w1
  StonePurchaseNotificationMenu_o *v28; // x0
  System_Action_o *v29; // x2
  int32_t v30; // w3
  int32_t v31; // w4
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v35; // x21
  ErrorDialog_ClickDelegate_o *v36; // x22
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  struct StonePurchaseNotificationMenu_o *v39; // x20
  System_Action_o *v40; // x21
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  struct StonePurchaseNotificationMenu_o *v43; // x20
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v47; // x22
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v51; // 0:x6.12

  if ( (byte_4AFFC24 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&SpendLimitMenu_CallbackFunc_TypeInfo, v7);
    sub_1BC3008(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_1BC3008(&LocalizationManager_TypeInfo, v9);
    sub_1BC3008(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v10);
    sub_1BC3008(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v11);
    sub_1BC3008(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v12);
    sub_1BC3008(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v13);
    sub_1BC3008(&Method_StonePurchaseMenu_EndSpendLimit__, v14);
    sub_1BC3008(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__, v15);
    sub_1BC3008(&StringLiteral_12267/*"STONE_PURCHASE_RESULT_WAIT"*/, v16);
    byte_4AFFC24 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v18 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 8, 0, 0LL);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0LL);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v23 = TotalAddedChargeStoneNum;
      v24 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_35;
      v27 = 1;
      v28 = stonePurchaseNotificationMenu;
      v29 = v24;
      v30 = TotalAddedFreeStoneNum;
      v31 = v23;
      goto LABEL_29;
    case 3:
      v32 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v33 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12267/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v36 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v36,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v51.fields.hasValue = 0LL;
      v51.fields.value.fields.y = 0.0;
      ErrorDialog__Open_41398724(warningDialog, 0LL, v35, v36, 1, -1.0, 1, v51, 0LL);
      goto LABEL_32;
    case 4:
      v37 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v37 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v38 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v37, v37[4]);
      OverwriteAssetSoundName__PlaySystemSe(v38, 1, 0, 0LL);
      v39 = this->fields.stonePurchaseNotificationMenu;
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v39 )
        goto LABEL_35;
      v28 = v39;
      v27 = 0;
      goto LABEL_28;
    case 6:
      v44 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v44 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v45 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v44, v44[4]);
      OverwriteAssetSoundName__PlaySystemSe(v45, 2, 0, 0LL);
      v43 = this->fields.stonePurchaseNotificationMenu;
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v43 )
        goto LABEL_35;
      v27 = 5;
      goto LABEL_27;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v17);
      goto LABEL_32;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v47 = (SpendLimitMenu_CallbackFunc_o *)sub_1BC3254(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v47, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v48);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v47, v49);
      goto LABEL_32;
    default:
      v41 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_1BC3020(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v42 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v41, v41[4]);
      OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0, 0LL);
      v43 = this->fields.stonePurchaseNotificationMenu;
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v43 )
LABEL_35:
        sub_1BC3264(v25, v26);
      v27 = 4;
LABEL_27:
      v28 = v43;
LABEL_28:
      v29 = v40;
      v30 = 0;
      v31 = 0;
LABEL_29:
      StonePurchaseNotificationMenu__Open(v28, v27, v29, v30, v31, 0, 0, 0LL);
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
    sub_1BC3264(ItemListViewManager, method);
  }
  StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)ItemListViewManager, 0, v4);
}


void __fastcall StonePurchaseMenu___OnClickHistory_b__42_0(
        StonePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PaymentHistoryDialog_o *paymentHistoryDialog; // x0

  paymentHistoryDialog = this->fields.paymentHistoryDialog;
  if ( !paymentHistoryDialog )
    sub_1BC3264(0LL, result);
  PaymentHistoryDialog__Open(paymentHistoryDialog, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu___Open_b__21_0(
        StonePurchaseMenu_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4AFFC30 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4AFFC30 = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_1BC3264(NumberFormat, v7);
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

  if ( (byte_4AFFC1B & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4AFFC1B = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AFFC2E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8790/*"MainPanel/BaseView/CloseButton"*/, method);
    byte_4AFFC2E = 1;
  }
  return (System_String_o *)StringLiteral_8790/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_4AFFC1C & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4AFFC1C = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0C5BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C574;
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
  if ( (byte_4B00325 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_4B00325 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___ctor(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__0(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *klass; // x20
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B00326 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B00326 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !klass) )
  {
    sub_1BC3264(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 0, v6, 0, 0, v2->fields.shopId, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__1(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct StonePurchaseMenu_o *_4__this; // x8
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x22
  System_String_o *v10; // x19
  ErrorDialog_ClickDelegate_o *v11; // x21
  System_Nullable_Vector2__o v12; // 0:x6.12

  v2 = this;
  if ( (byte_4B00327 & 1) == 0 )
  {
    sub_1BC3008(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v4);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(&StringLiteral_12267/*"STONE_PURCHASE_RESULT_WAIT"*/, v5);
    byte_4B00327 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12267/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
  v9 = (Il2CppObject *)v2->fields.__4__this;
  v10 = v8;
  v11 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v11, v9, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0LL);
  if ( !warningDialog )
LABEL_8:
    sub_1BC3264(this, method);
  *(_QWORD *)&v12.fields.hasValue = 0LL;
  v12.fields.value.fields.y = 0.0;
  ErrorDialog__Open_41398724(warningDialog, 0LL, v10, v11, 1, -1.0, 1, v12, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__2(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B00328 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__,
                                                          v3);
    byte_4B00328 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL),
        !klass) )
  {
    sub_1BC3264(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 5, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__3(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B00329 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B00329 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !klass) )
  {
    sub_1BC3264(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 6, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__4(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x21
  SpendLimitMenu_o *klass; // x20
  int32_t perMonthAmount; // w19
  SpendLimitMenu_CallbackFunc_o *v7; // x22

  v2 = this;
  if ( (byte_4B0032A & 1) == 0 )
  {
    sub_1BC3008(&SpendLimitMenu_CallbackFunc_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(&Method_StonePurchaseMenu_EndSpendLimit__, v3);
    byte_4B0032A = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (SpendLimitMenu_o *)_4__this[9].klass,
        perMonthAmount = v2->fields.perMonthAmount,
        v7 = (SpendLimitMenu_CallbackFunc_o *)sub_1BC3254(SpendLimitMenu_CallbackFunc_TypeInfo),
        SpendLimitMenu_CallbackFunc___ctor(v7, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL),
        !klass) )
  {
    sub_1BC3264(this, method);
  }
  SpendLimitMenu__Open(klass, perMonthAmount, v7, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__5(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B0032B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B0032B = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !klass) )
  {
    sub_1BC3264(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 7, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__6(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B0032C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B0032C = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !klass) )
  {
    sub_1BC3264(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 8, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__7(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B0032D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B0032D = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !klass) )
  {
    sub_1BC3264(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 9, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__8(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B0032E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1BC3008(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B0032E = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !klass) )
  {
    sub_1BC3264(this, method);
  }
  StonePurchaseNotificationMenu__Open(klass, 4, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass29_0___ctor(
        StonePurchaseMenu___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass29_0___RequestCancelPurchaseByBank_b__0(
        StonePurchaseMenu___c__DisplayClass29_0_o *this,
        System_String_o *responseResult,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass38_0___ctor(
        StonePurchaseMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass38_0___CloseStonePurchaseWarningDialog_b__0(
        StonePurchaseMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass38_0_o *v2; // x19
  __int64 v3; // x1
  struct StonePurchaseMenu_o *_4__this; // x20
  StonePurchaseListViewManager_o *ItemListViewManager; // x19
  StonePurchaseListViewManager_CallbackFunc_o *v6; // x21

  v2 = this;
  if ( (byte_4B0032F & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass38_0_o *)sub_1BC3008(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_4B0032F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( v2->fields.isDecide )
  {
    StonePurchaseMenu__SelectBuyBankItemConfirm(v2->fields.__4__this, 0LL);
    return;
  }
  _4__this->fields.state = 2;
  ItemListViewManager = _4__this->fields.ItemListViewManager;
  v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BC3254(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
  StonePurchaseListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
    0LL);
  if ( !ItemListViewManager )
LABEL_8:
    sub_1BC3264(this, method);
  StonePurchaseListViewManager__SetMode(ItemListViewManager, 1, v6, 0LL);
}