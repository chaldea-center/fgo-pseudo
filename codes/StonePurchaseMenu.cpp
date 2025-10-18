void StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C40EAE & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C40EAE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C40E9F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C40E9F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.1,
      0);
  }
}


void StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C40EA5 & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4C40EA5 = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0),
          ItemListViewManager = this->fields.ItemListViewManager,
          v5 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C372A4(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v6),
          !ItemListViewManager) )
    {
      sub_1C372B4(buyItemMask);
    }
    ItemListViewManager->fields.callbackFunc = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v5, v7, v8);
    StonePurchaseListViewManager__SetMode_38514460(ItemListViewManager, 1, v9);
    this->fields.state = 2;
  }
}


void StonePurchaseMenu__Callback(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct StonePurchaseMenu_CallbackFunc_o *v5; // x20
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
}


void StonePurchaseMenu__Close(StonePurchaseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C40E9E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_StonePurchaseMenu_OnMoveEnd__);
    byte_4C40E9E = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0);
      BaseDialog__Close((BaseDialog_o *)this, v7, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(Instance);
  }
  if ( callback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v10; // x20

  if ( (byte_4C40EA9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass38_0__CloseStonePurchaseWarningDialog_b__0__);
    sub_1C37058(&StonePurchaseMenu___c__DisplayClass38_0_TypeInfo);
    byte_4C40EA9 = 1;
  }
  v5 = sub_1C372A4(StonePurchaseMenu___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isDecide,
        *(_QWORD *)(v5 + 24) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_StonePurchaseMenu___c__DisplayClass38_0__CloseStonePurchaseWarningDialog_b__0__,
          0),
        !Instance) )
  {
    sub_1C372B4(v6);
  }
  CommonUI__CloseConfirmDialog_31208544((CommonUI_o *)Instance, v10, 0);
}


void StonePurchaseMenu__EndBuyBankItemNotificationCancel(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x1

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1C372B4(0);
  StonePurchaseNotificationMenu__Close_38535556(stonePurchaseNotificationMenu, 0, v2);
  StonePurchaseMenu__BackBuyBankItemConfirm(this, v5);
}


void StonePurchaseMenu__EndBuyBankItemNotificationSuccess(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1C372B4(0);
  StonePurchaseNotificationMenu__Close_38535556(stonePurchaseNotificationMenu, 0, v2);
  StonePurchaseMenu__Callback(this, 2, v5);
}


void StonePurchaseMenu__EndBuyBankItemNotificationSuspend(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v5; // x2

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1C372B4(0);
  StonePurchaseNotificationMenu__Close_38535556(stonePurchaseNotificationMenu, 0, v2);
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
      sub_1C372B4(0);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C40EA1 & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4C40EA1 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close(spendLimitMenu, 0),
        ItemListViewManager = this->fields.ItemListViewManager,
        v5 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C372A4(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v6),
        !ItemListViewManager) )
  {
    sub_1C372B4(spendLimitMenu);
  }
  ItemListViewManager->fields.callbackFunc = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v5, v7, v8);
  StonePurchaseListViewManager__SetMode_38514460(ItemListViewManager, 1, v9);
  this->fields.state = 2;
}


void StonePurchaseMenu__Init(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_4C40E9C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40E9C = 1;
  }
  this->fields.callbackFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  this->fields.refreshCallbackFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.refreshCallbackFunc, 0, v5, v6);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0) )
  {
    sub_1C372B4(stoneDataLabel);
  }
  ListViewManager__DestroyList((ListViewManager_o *)stoneDataLabel, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C40EAA & 1) == 0 )
  {
    sub_1C37058(&Method_StonePurchaseMenu_OnClickBack__);
    byte_4C40EAA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    StonePurchaseMenu__Callback(this, 0, v5);
  }
}


void StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *WebViewAddress_41379660; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22

  if ( (byte_4C40EAB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_OnClickExplanation__);
    sub_1C37058(&Method_StonePurchaseMenu_OnEndWebView__);
    sub_1C37058(&WebViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_15554/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/);
    byte_4C40EAB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_OnClickExplanation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_41379660 = NetworkManager__getWebViewAddress_41379660(8, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15554/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0);
    v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v6, WebViewAddress_41379660, v7, 0);
  }
}


void StonePurchaseMenu__OnClickHistory(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C40EAC & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_OnClickHistory__);
    sub_1C37058(&Method_StonePurchaseMenu__OnClickHistory_b__42_0__);
    byte_4C40EAC = 1;
  }
  v3 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_OnClickHistory__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__42_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_1C372B4(0);
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
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4C40EA7 & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4C40EA7 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v11 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C372A4(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v12);
      if ( !ItemListViewManager )
        sub_1C372B4(v13);
      ItemListViewManager->fields.callbackFunc = v11;
      sub_1C36FFC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v11, v14, v15);
      StonePurchaseListViewManager__SetMode_38514460(ItemListViewManager, 1, v16);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
      v8 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0;
        sub_1C36FFC(p_closeCallbackFunc, 0, v5, v6);
        ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
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


void StonePurchaseMenu__OnSelectAgeVerification(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  int32_t state; // w8
  AgeVerificationMenu_o *ageVerificationMenu; // x0
  const MethodInfo *v7; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4C40EA6 & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4C40EA6 = 1;
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
      v9 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C372A4(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v10);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v9;
        sub_1C36FFC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v9, v11, v12);
        StonePurchaseListViewManager__SetMode_38514460(ItemListViewManager, 1, v13);
        return;
      }
    }
    sub_1C372B4(ageVerificationMenu);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  System_String_o *v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  CommonConfirmDialog_ClickDelegate_o *v30; // x24
  int32_t v31; // [xsp+48h] [xbp-38h] BYREF
  int32_t v32; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4C40EA8 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__);
    sub_1C37058(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_1C37058(&StringLiteral_12370/*"STONE_PURCHASE_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_12372/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/);
    sub_1C37058(&StringLiteral_12371/*"STONE_PURCHASE_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40EA8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/, 0);
    v32 = chargeStone;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v13, v14, v15, v16, v17, v18);
    v31 = freeStone;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v20, v21, v22, v23, v24, v25);
    v27 = System_String__Format_63602948(v12, v19, v26, 0);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12371/*"STONE_PURCHASE_CONFIRM_DECIDE"*/, 0);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12370/*"STONE_PURCHASE_CONFIRM_CANCEL"*/, 0);
    v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v30,
      (Il2CppObject *)this,
      Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__,
      0);
    if ( !Instance )
LABEL_14:
      sub_1C372B4(SelfUserGame);
    CommonUI__OpenConfirmDecideDlg(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v27,
      v28,
      v29,
      v30,
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
      sub_1C372B4(0);
    ErrorDialog__Close(warningDialog, 0);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void StonePurchaseMenu__Open(
        StonePurchaseMenu_o *this,
        StonePurchaseMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        const MethodInfo *method)
{
  void *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UILabel_o *stoneDataLabel; // x20
  int32_t v13; // w21
  UnityEngine_GameObject_o *v14; // x20
  System_Action_int__o *v15; // x21
  const MethodInfo *v16; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v24; // x21
  System_Action_o *v25; // x20

  if ( (byte_4C40E9D & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AgeVerificationMenu_TypeInfo);
    sub_1C37058(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&PurchaseBehaviour_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_StonePurchaseMenu_OnMoveEnd__);
    sub_1C37058(&Method_StonePurchaseMenu_OnSelectAgeVerification__);
    sub_1C37058(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_1C37058(&Method_StonePurchaseMenu__Open_b__21_0__);
    byte_4C40E9D = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      this->fields.callbackFunc = callback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v8, v9);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.refreshCallbackFunc, (int32_t)refreshCallback, v10, v11);
      gameObject = this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0);
        gameObject = UserGameMaster__getSelfUserGame(0);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v13 = *((_DWORD *)gameObject + 46);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__GetNumberFormat(v13, 0);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0);
            v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            v15 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
            System_Action_int____ctor(v15, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__21_0__, 0);
            StoneCountRefreshComponent__AttachToGameObject(v14, v15, 0, 0);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v16);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              PurchaseBehaviour__ActivateBoth(0);
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              if ( AgeVerificationMenu__IsConcent(0) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v18 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C372A4(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v18,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v19);
                if ( !ItemListViewManager )
                  goto LABEL_22;
                ItemListViewManager->fields.callbackFunc = v18;
                sub_1C36FFC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v18, v20, v21);
                StonePurchaseListViewManager__SetMode_38514460(ItemListViewManager, 1, v22);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v24 = (AgeVerificationMenu_CallbackFunc_o *)sub_1C372A4(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v24,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  0);
                if ( !ageVerificationMenu )
                  goto LABEL_22;
                AgeVerificationMenu__Open(ageVerificationMenu, v24, 0);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                *((_BYTE *)gameObject + 33) = 1;
                v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0);
                BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C372B4(gameObject);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_4C40EA4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PurchaseBehaviour_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass29_0__RequestCancelPurchaseByBank_b__0__);
    sub_1C37058(&StonePurchaseMenu___c__DisplayClass29_0_TypeInfo);
    byte_4C40EA4 = 1;
  }
  v5 = sub_1C372A4(StonePurchaseMenu___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)v5,
      Method_StonePurchaseMenu___c__DisplayClass29_0__RequestCancelPurchaseByBank_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v10,
                                                        (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0);
      return;
    }
LABEL_13:
    sub_1C372B4(Request_object);
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

  if ( (byte_4C40EA0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C37058(&PurchaseBehaviour_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
    byte_4C40EA0 = 1;
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
                                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
          v9 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C372A4(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000,
            0);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v9, 0);
            return;
          }
        }
LABEL_22:
        sub_1C372B4(ItemListViewManager);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  StonePurchaseMenu_o *v19; // x0
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  System_Action_o *v22; // x2
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  int32_t v25; // w21
  System_Action_o *v26; // x0
  intptr_t *v27; // x8
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  System_Action_o *v31; // x25
  const MethodInfo *v32; // x7
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  int32_t v41; // w20
  System_Action_o *v42; // x21
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  System_Action_o *v49; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4C40EA2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__);
    sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_1C37058(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__0__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__1__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__2__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__3__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__4__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__5__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__6__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__7__);
    sub_1C37058(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__8__);
    sub_1C37058(&StonePurchaseMenu___c__DisplayClass27_0_TypeInfo);
    byte_4C40EA2 = 1;
  }
  v15 = sub_1C372A4(StonePurchaseMenu___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
LABEL_41:
    sub_1C372B4(v16);
  *(_QWORD *)(v15 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v17, v18);
  *(_DWORD *)(v15 + 24) = shopId;
  *(_DWORD *)(v15 + 28) = perMonthAmount;
  v19 = (StonePurchaseMenu_o *)TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0);
  switch ( result )
  {
    case 2:
      v28 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v29 = (System_Reflection_MethodBase_o *)sub_1C3703C(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 8, 0, 0);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_41;
      StonePurchaseNotificationMenu__Open(
        stonePurchaseNotificationMenu,
        1,
        v31,
        freeStoneNum,
        chargeStoneNum,
        *(_DWORD *)(v15 + 24),
        isSentGift,
        v32);
      break;
    case 4:
      break;
    case 5:
      v35 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v36 = (System_Reflection_MethodBase_o *)sub_1C3703C(v35, v35[4]);
      OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0, 0);
      this->fields.state = 14;
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v37 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v37 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v38 = (System_Reflection_MethodBase_o *)sub_1C3703C(v37, v37[4]);
      OverwriteAssetSoundName__PlaySystemSe(v38, 1, 0, 0);
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v39 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v39 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v40 = (System_Reflection_MethodBase_o *)sub_1C3703C(v39, v39[4]);
      OverwriteAssetSoundName__PlaySystemSe(v40, 2, 0, 0);
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v41 = *(_DWORD *)(v15 + 24);
      v42 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0);
      v21 = v41;
      v22 = v42;
      goto LABEL_37;
    case 10:
      this->fields.state = 10;
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v23 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v24 = (System_Reflection_MethodBase_o *)sub_1C3703C(v23, v23[4]);
      OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0);
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v43 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v43 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v44 = (System_Reflection_MethodBase_o *)sub_1C3703C(v43, v43[4]);
      OverwriteAssetSoundName__PlaySystemSe(v44, 2, 0, 0);
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v45 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v46 = (System_Reflection_MethodBase_o *)sub_1C3703C(v45, v45[4]);
      OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0, 0);
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v47 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v47 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v48 = (System_Reflection_MethodBase_o *)sub_1C3703C(v47, v47[4]);
      OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0, 0);
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v21 = *(_DWORD *)(v15 + 24);
      v22 = 0;
      goto LABEL_37;
    default:
      v33 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000 + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___78215000);
      v34 = (System_Reflection_MethodBase_o *)sub_1C3703C(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0, 0);
      v25 = *(_DWORD *)(v15 + 24);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v27 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v49 = v26;
      System_Action___ctor(v26, (Il2CppObject *)v15, *v27, 0);
      v21 = v25;
      v22 = v49;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v19, v21, v22, v20);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))refreshCallbackFunc->fields.invoke_impl)(
      refreshCallbackFunc->fields.method_code,
      refreshCallbackFunc->fields.method);
}


void StonePurchaseMenu__SelectedBuyBankItemConfirm_38528380(
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
  const MethodInfo *v16; // x7
  int32_t v17; // w1
  StonePurchaseNotificationMenu_o *v18; // x0
  System_Action_o *v19; // x2
  int32_t v20; // w3
  int32_t v21; // w4
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v25; // x21
  ErrorDialog_ClickDelegate_o *v26; // x22
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  struct StonePurchaseNotificationMenu_o *v29; // x20
  System_Action_o *v30; // x21
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  struct StonePurchaseNotificationMenu_o *v33; // x20
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v37; // x22
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v39; // 0:x6.12

  if ( (byte_4C40EA3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&SpendLimitMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    sub_1C37058(&Method_StonePurchaseMenu_EndSpendLimit__);
    sub_1C37058(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_1C37058(&StringLiteral_12383/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_4C40EA3 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0);
  switch ( result )
  {
    case 2:
      v8 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v13 = TotalAddedChargeStoneNum;
      v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_35;
      v17 = 1;
      v18 = stonePurchaseNotificationMenu;
      v19 = v14;
      v20 = TotalAddedFreeStoneNum;
      v21 = v13;
      goto LABEL_29;
    case 3:
      v22 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v23 = (System_Reflection_MethodBase_o *)sub_1C3703C(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12383/*"STONE_PURCHASE_RESULT_WAIT"*/, 0);
      v26 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v26,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v39.fields.hasValue = 0;
      v39.fields.value.fields.y = 0.0;
      ErrorDialog__Open_42257776(warningDialog, 0, v25, v26, 1, -1.0, 1, v39, 0);
      goto LABEL_32;
    case 4:
      v27 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v28 = (System_Reflection_MethodBase_o *)sub_1C3703C(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0, 0);
      v29 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0);
      if ( !v29 )
        goto LABEL_35;
      v18 = v29;
      v17 = 0;
      goto LABEL_28;
    case 6:
      v34 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v35 = (System_Reflection_MethodBase_o *)sub_1C3703C(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0);
      v33 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0);
      if ( !v33 )
        goto LABEL_35;
      v17 = 5;
      goto LABEL_27;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v7);
      goto LABEL_32;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v37 = (SpendLimitMenu_CallbackFunc_o *)sub_1C372A4(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v37, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v37, 0);
      goto LABEL_32;
    default:
      v31 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1C37070(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v32 = (System_Reflection_MethodBase_o *)sub_1C3703C(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 2, 0, 0);
      v33 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0);
      if ( !v33 )
LABEL_35:
        sub_1C372B4(v15);
      v17 = 4;
LABEL_27:
      v18 = v33;
LABEL_28:
      v19 = v30;
      v20 = 0;
      v21 = 0;
LABEL_29:
      StonePurchaseNotificationMenu__Open(v18, v17, v19, v20, v21, 0, 0, v16);
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
    sub_1C372B4(ItemListViewManager);
  }
  StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)ItemListViewManager, 0, v4);
}


void StonePurchaseMenu___OnClickHistory_b__42_0(
        StonePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PaymentHistoryDialog_o *paymentHistoryDialog; // x0

  paymentHistoryDialog = this->fields.paymentHistoryDialog;
  if ( !paymentHistoryDialog )
    sub_1C372B4(0);
  PaymentHistoryDialog__Open(paymentHistoryDialog, 0);
}


void StonePurchaseMenu___Open_b__21_0(StonePurchaseMenu_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0

  if ( (byte_4C40EAF & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C40EAF = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !stoneDataLabel )
    sub_1C372B4(NumberFormat);
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

  if ( (byte_4C40E9A & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4C40E9A = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C40EAD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8872/*"MainPanel/BaseView/CloseButton"*/);
    byte_4C40EAD = 1;
  }
  return (System_String_o *)StringLiteral_8872/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_4C40E9B & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4C40E9B = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  StonePurchaseMenu__Init(v11, v12);
}


void StonePurchaseMenu_CallbackFunc___ctor(
        StonePurchaseMenu_CallbackFunc_o *this,
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7A118;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7A0D0;
}


System_IAsyncResult_o *StonePurchaseMenu_CallbackFunc__BeginInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C40EB0 & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseMenu_Result_TypeInfo);
    byte_4C40EB0 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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


void StonePurchaseMenu___c__DisplayClass27_0___ctor(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__0(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *klass; // x20
  System_Action_o *v5; // x22
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4C40EB1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4C40EB1 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C372B4(this);
  }
  StonePurchaseNotificationMenu__Open(klass, 0, v5, 0, 0, v2->fields.shopId, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__1(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  struct StonePurchaseMenu_o *_4__this; // x8
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v5; // x0
  Il2CppObject *v6; // x22
  System_String_o *v7; // x19
  ErrorDialog_ClickDelegate_o *v8; // x21
  System_Nullable_Vector2__o v9; // 0:x6.12

  v2 = this;
  if ( (byte_4C40EB2 & 1) == 0 )
  {
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&StringLiteral_12383/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_4C40EB2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12383/*"STONE_PURCHASE_RESULT_WAIT"*/, 0);
  v6 = (Il2CppObject *)v2->fields.__4__this;
  v7 = v5;
  v8 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v8, v6, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0);
  if ( !warningDialog )
LABEL_8:
    sub_1C372B4(this);
  *(_QWORD *)&v9.fields.hasValue = 0;
  v9.fields.value.fields.y = 0.0;
  ErrorDialog__Open_42257776(warningDialog, 0, v7, v8, 1, -1.0, 1, v9, 0);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__2(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4C40EB3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    byte_4C40EB3 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0),
        !klass) )
  {
    sub_1C372B4(this);
  }
  StonePurchaseNotificationMenu__Open(klass, 5, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__3(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4C40EB4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4C40EB4 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C372B4(this);
  }
  StonePurchaseNotificationMenu__Open(klass, 6, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__4(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  SpendLimitMenu_o *klass; // x20
  int32_t perMonthAmount; // w19
  SpendLimitMenu_CallbackFunc_o *v6; // x22

  v2 = this;
  if ( (byte_4C40EB5 & 1) == 0 )
  {
    sub_1C37058(&SpendLimitMenu_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&Method_StonePurchaseMenu_EndSpendLimit__);
    byte_4C40EB5 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (SpendLimitMenu_o *)_4__this[9].klass,
        perMonthAmount = v2->fields.perMonthAmount,
        v6 = (SpendLimitMenu_CallbackFunc_o *)sub_1C372A4(SpendLimitMenu_CallbackFunc_TypeInfo),
        SpendLimitMenu_CallbackFunc___ctor(v6, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, 0),
        !klass) )
  {
    sub_1C372B4(this);
  }
  SpendLimitMenu__Open(klass, perMonthAmount, v6, 0);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__5(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4C40EB6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4C40EB6 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C372B4(this);
  }
  StonePurchaseNotificationMenu__Open(klass, 7, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__6(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4C40EB7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4C40EB7 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C372B4(this);
  }
  StonePurchaseNotificationMenu__Open(klass, 8, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__7(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4C40EB8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4C40EB8 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C372B4(this);
  }
  StonePurchaseNotificationMenu__Open(klass, 9, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__8(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *klass; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x7

  v2 = this;
  if ( (byte_4C40EB9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C37058(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4C40EB9 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (klass = (StonePurchaseNotificationMenu_o *)_4__this[8].klass,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0),
        !klass) )
  {
    sub_1C372B4(this);
  }
  StonePurchaseNotificationMenu__Open(klass, 4, v5, 0, 0, 0, 0, v6);
}


void StonePurchaseMenu___c__DisplayClass29_0___ctor(
        StonePurchaseMenu___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseMenu___c__DisplayClass29_0___RequestCancelPurchaseByBank_b__0(
        StonePurchaseMenu___c__DisplayClass29_0_o *this,
        System_String_o *responseResult,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0);
}


void StonePurchaseMenu___c__DisplayClass38_0___ctor(
        StonePurchaseMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StonePurchaseMenu___c__DisplayClass38_0___CloseStonePurchaseWarningDialog_b__0(
        StonePurchaseMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass38_0_o *v2; // x19
  struct StonePurchaseMenu_o *_4__this; // x20
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x19
  StonePurchaseListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4C40EBA & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass38_0_o *)sub_1C37058(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4C40EBA = 1;
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
  v5 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C372A4(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
  StonePurchaseListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
    v6);
  if ( !ItemListViewManager )
LABEL_8:
    sub_1C372B4(this);
  ItemListViewManager->fields.callbackFunc = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v5, v7, v8);
  StonePurchaseListViewManager__SetMode_38514460(ItemListViewManager, 1, v9);
}