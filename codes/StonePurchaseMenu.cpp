void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BDA054 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDA054 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BDA045 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BDA045 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4BDA04B & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4BDA04B = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C22084(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v7),
          !ItemListViewManager) )
    {
      sub_1C22094(buyItemMask, v3);
    }
    ItemListViewManager->fields.callbackFunc = v6;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
      (int64_t)v6,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    StonePurchaseListViewManager__SetMode_36425076(ItemListViewManager, 1, v14);
    this->fields.state = 2;
  }
}


void __fastcall StonePurchaseMenu__Callback(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct StonePurchaseMenu_CallbackFunc_o *v9; // x20
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_1C21DDC(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v9->fields.extra_arg);
}


void __fastcall StonePurchaseMenu__Close(
        StonePurchaseMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_4BDA044 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_StonePurchaseMenu_OnMoveEnd__);
    byte_4BDA044 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
      return;
    }
LABEL_10:
    sub_1C22094(Instance, v11);
  }
  if ( callback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    BYTE1(Instance[2].klass) = 0;
  }
}


void __fastcall StonePurchaseMenu__CloseStonePurchaseWarningDialog(
        StonePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4BDA04F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass38_0__CloseStonePurchaseWarningDialog_b__0__);
    sub_1C21E38(&StonePurchaseMenu___c__DisplayClass38_0_TypeInfo);
    byte_4BDA04F = 1;
  }
  v5 = sub_1C22084(StonePurchaseMenu___c__DisplayClass38_0_TypeInfo);
  StonePurchaseMenu___c__DisplayClass38_0___ctor((StonePurchaseMenu___c__DisplayClass38_0_o *)v5, 0LL);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isDecide,
        *(_QWORD *)(v5 + 24) = this,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_StonePurchaseMenu___c__DisplayClass38_0__CloseStonePurchaseWarningDialog_b__0__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31128756((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall StonePurchaseMenu__EndBuyBankItemNotificationCancel(
        StonePurchaseMenu_o *this,
        const MethodInfo *method)
{
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v4; // x1

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
      sub_1C22094(0LL, isDecide);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4BDA047 & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4BDA047 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close_36417484(spendLimitMenu, 0LL, v2),
        ItemListViewManager = this->fields.ItemListViewManager,
        v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C22084(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v7),
        !ItemListViewManager) )
  {
    sub_1C22094(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v6;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
    (int64_t)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  StonePurchaseListViewManager__SetMode_36425076(ItemListViewManager, 1, v14);
  this->fields.state = 2;
}


void __fastcall StonePurchaseMenu__Init(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_4BDA042 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDA042 = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.refreshCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1C22094(stoneDataLabel, v15);
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

  if ( (byte_4BDA050 & 1) == 0 )
  {
    sub_1C21E38(&Method_StonePurchaseMenu_OnClickBack__);
    byte_4BDA050 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    StonePurchaseMenu__Callback(this, 0, v5);
  }
}


void __fastcall StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *WebViewAddress_39819560; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22

  if ( (byte_4BDA051 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_OnClickExplanation__);
    sub_1C21E38(&Method_StonePurchaseMenu_OnEndWebView__);
    sub_1C21E38(&WebViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_15820/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/);
    byte_4BDA051 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_OnClickExplanation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_39819560 = NetworkManager__getWebViewAddress_39819560(8, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15820/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v6, WebViewAddress_39819560, v7, 0LL);
  }
}


void __fastcall StonePurchaseMenu__OnClickHistory(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4BDA052 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_OnClickHistory__);
    sub_1C21E38(&Method_StonePurchaseMenu__OnClickHistory_b__42_0__);
    byte_4BDA052 = 1;
  }
  v3 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_OnClickHistory__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__42_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_1C22094(0LL, v7);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4BDA04D & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4BDA04D = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v15 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C22084(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v16);
      if ( !ItemListViewManager )
        sub_1C22094(v17, v18);
      ItemListViewManager->fields.callbackFunc = v15;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
        (int64_t)v15,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      StonePurchaseListViewManager__SetMode_36425076(ItemListViewManager, 1, v25);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
      v12 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_1C21DDC(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
          v12->fields.original_method_info,
          *(_QWORD *)&v12->fields.extra_arg);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4BDA04C & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4BDA04C = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close_36413532(ageVerificationMenu, 0LL, method);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v7);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v9 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C22084(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v10);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v9;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
          (int64_t)v9,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        StonePurchaseListViewManager__SetMode_36425076(ItemListViewManager, 1, v17);
        return;
      }
    }
    sub_1C22094(ageVerificationMenu, *(_QWORD *)&result);
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
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v8; // x1
  int freeStone; // w23
  int chargeStone; // w22
  Il2CppObject *Instance; // x20
  System_String_o *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  CommonConfirmDialog_ClickDelegate_o *v24; // x24
  int v25; // [xsp+48h] [xbp-38h] BYREF
  int v26; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4BDA04E & 1) == 0 )
  {
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__);
    sub_1C21E38(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_1C21E38(&StringLiteral_12516/*"STONE_PURCHASE_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_12518/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12517/*"STONE_PURCHASE_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDA04E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    this->fields.selectItemNum = n;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_14;
    freeStone = SelfUserGame->fields.freeStone;
    if ( (freeStone & 0x80000000) == 0 )
    {
      StonePurchaseMenu__SelectBuyBankItemConfirm(this, v8);
      return;
    }
    chargeStone = SelfUserGame->fields.chargeStone;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12518/*"STONE_PURCHASE_CONFIRM_MESSAGE"*/, 0LL);
    v26 = chargeStone;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v13, v14, v15);
    v25 = freeStone;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v17, v18, v19);
    v21 = System_String__Format_63129848(v12, v16, v20, 0LL);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12517/*"STONE_PURCHASE_CONFIRM_DECIDE"*/, 0LL);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12516/*"STONE_PURCHASE_CONFIRM_CANCEL"*/, 0LL);
    v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v24,
      (Il2CppObject *)this,
      Method_StonePurchaseMenu_CloseStonePurchaseWarningDialog__,
      0LL);
    if ( !Instance )
LABEL_14:
      sub_1C22094(SelfUserGame, v8);
    CommonUI__OpenConfirmDecideDlg(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v21,
      v22,
      v23,
      v24,
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
      sub_1C22094(0LL, isDecide);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UILabel_o *stoneDataLabel; // x20
  int32_t v22; // w21
  UnityEngine_GameObject_o *v23; // x20
  System_Action_int__o *v24; // x21
  const MethodInfo *v25; // x2
  AgeVerificationMenu_c *v26; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v38; // x21
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  System_Action_o *v41; // x20

  if ( (byte_4BDA043 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AgeVerificationMenu_TypeInfo);
    sub_1C21E38(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_StonePurchaseMenu_OnMoveEnd__);
    sub_1C21E38(&Method_StonePurchaseMenu_OnSelectAgeVerification__);
    sub_1C21E38(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_1C21E38(&Method_StonePurchaseMenu__Open_b__21_0__);
    byte_4BDA043 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.refreshCallbackFunc,
        (int64_t)refreshCallback,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      gameObject = this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
        gameObject = UserGameMaster__getSelfUserGame(0LL);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v22 = *((_DWORD *)gameObject + 44);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__GetNumberFormat(v22, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v24 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
            System_Action_int____ctor(v24, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__21_0__, 0LL);
            StoneCountRefreshComponent__AttachToGameObject(v23, v24, 0, 0LL);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v25);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              PurchaseBehaviour__ActivateBoth(0LL);
              v26 = AgeVerificationMenu_TypeInfo;
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              if ( AgeVerificationMenu__IsConcent((const MethodInfo *)v26) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v28 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C22084(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v28,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v29);
                if ( !ItemListViewManager )
                  goto LABEL_22;
                ItemListViewManager->fields.callbackFunc = v28;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
                  (int64_t)v28,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35);
                StonePurchaseListViewManager__SetMode_36425076(ItemListViewManager, 1, v36);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v38 = (AgeVerificationMenu_CallbackFunc_o *)sub_1C22084(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v38,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  v39);
                if ( !ageVerificationMenu )
                  goto LABEL_22;
                AgeVerificationMenu__Open(ageVerificationMenu, v38, v40);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                *((_BYTE *)gameObject + 33) = 1;
                v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(v41, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C22094(gameObject, v8);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_4BDA04A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass29_0__RequestCancelPurchaseByBank_b__0__);
    sub_1C21E38(&StonePurchaseMenu___c__DisplayClass29_0_TypeInfo);
    byte_4BDA04A = 1;
  }
  v5 = sub_1C22084(StonePurchaseMenu___c__DisplayClass29_0_TypeInfo);
  StonePurchaseMenu___c__DisplayClass29_0___ctor((StonePurchaseMenu___c__DisplayClass29_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)callback, v8, v9, v10, v11, v12, v13);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0LL);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_StonePurchaseMenu___c__DisplayClass29_0__RequestCancelPurchaseByBank_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v15,
                                                        (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0LL);
      return;
    }
LABEL_13:
    sub_1C22094(Request_object, v7);
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

  if ( (byte_4BDA046 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
    byte_4BDA046 = 1;
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
                                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
          v9 = (PurchaseLogic_ProductFinishedAction_o *)sub_1C22084(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v9, 0LL);
            return;
          }
        }
LABEL_22:
        sub_1C22094(ItemListViewManager, method);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  StonePurchaseMenu_o *v24; // x0
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  System_Action_o *v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t v30; // w21
  System_Action_o *v31; // x0
  __int64 *v32; // x8
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  System_Action_o *v36; // x25
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  int32_t v45; // w20
  System_Action_o *v46; // x21
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  System_Action_o *v53; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4BDA048 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__);
    sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_1C21E38(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__0__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__1__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__2__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__3__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__4__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__5__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__6__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__7__);
    sub_1C21E38(&Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__8__);
    sub_1C21E38(&StonePurchaseMenu___c__DisplayClass27_0_TypeInfo);
    byte_4BDA048 = 1;
  }
  v15 = sub_1C22084(StonePurchaseMenu___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
LABEL_41:
    sub_1C22094(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = shopId;
  *(_DWORD *)(v15 + 28) = perMonthAmount;
  v24 = (StonePurchaseMenu_o *)TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v33 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v34 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 8, 0, 0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v36 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v36, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
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
        0LL);
      break;
    case 4:
      break;
    case 5:
      v39 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v39 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v40 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v39, v39[4]);
      OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0, 0LL);
      this->fields.state = 14;
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v41 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v42 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v41, v41[4]);
      OverwriteAssetSoundName__PlaySystemSe(v42, 1, 0, 0LL);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v43 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v43 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v44 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v43, v43[4]);
      OverwriteAssetSoundName__PlaySystemSe(v44, 2, 0, 0LL);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v45 = *(_DWORD *)(v15 + 24);
      v46 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0LL);
      v26 = v45;
      v27 = v46;
      goto LABEL_37;
    case 10:
      this->fields.state = 10;
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v28 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v29 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0LL);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v47 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v47 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v48 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v47, v47[4]);
      OverwriteAssetSoundName__PlaySystemSe(v48, 2, 0, 0LL);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v49 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v49 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v50 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v49, v49[4]);
      OverwriteAssetSoundName__PlaySystemSe(v50, 2, 0, 0LL);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v51 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v51 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v52 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v51, v51[4]);
      OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0LL);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v26 = *(_DWORD *)(v15 + 24);
      v27 = 0LL;
      goto LABEL_37;
    default:
      v37 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352 + 83) & 2) != 0 )
        v37 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77741352);
      v38 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v37, v37[4]);
      OverwriteAssetSoundName__PlaySystemSe(v38, 2, 0, 0LL);
      v30 = *(_DWORD *)(v15 + 24);
      v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v32 = &Method_StonePurchaseMenu___c__DisplayClass27_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v53 = v31;
      System_Action___ctor(v31, (Il2CppObject *)v15, *v32, 0LL);
      v26 = v30;
      v27 = v53;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v24, v26, v27, v25);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
}


void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_36435784(
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
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v41; // 0:x6.12

  if ( (byte_4BDA049 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&SpendLimitMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    sub_1C21E38(&Method_StonePurchaseMenu_EndSpendLimit__);
    sub_1C21E38(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_1C21E38(&StringLiteral_12529/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_4BDA049 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v8 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0LL);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0LL);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v13 = TotalAddedChargeStoneNum;
      v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
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
        v22 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v23 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12529/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v26 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v26,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v41.fields.hasValue = 0LL;
      v41.fields.value.fields.y = 0.0;
      ErrorDialog__Open_39754952(warningDialog, 0LL, v25, v26, 1, -1.0, 1, v41, 0LL);
      goto LABEL_32;
    case 4:
      v27 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v28 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0, 0LL);
      v29 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v29 )
        goto LABEL_35;
      v18 = v29;
      v17 = 0;
      goto LABEL_28;
    case 6:
      v34 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v35 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0LL);
      v33 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
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
      v37 = (SpendLimitMenu_CallbackFunc_o *)sub_1C22084(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v37, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v38);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v37, v39);
      goto LABEL_32;
    default:
      v31 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1C21E50(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v32 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 2, 0, 0LL);
      v33 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v33 )
LABEL_35:
        sub_1C22094(v15, v16);
      v17 = 4;
LABEL_27:
      v18 = v33;
LABEL_28:
      v19 = v30;
      v20 = 0;
      v21 = 0;
LABEL_29:
      StonePurchaseNotificationMenu__Open(v18, v17, v19, v20, v21, 0, 0, 0LL);
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
    sub_1C22094(ItemListViewManager, method);
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
    sub_1C22094(0LL, result);
  PaymentHistoryDialog__Open(paymentHistoryDialog, 0LL);
}


void __fastcall StonePurchaseMenu___Open_b__21_0(
        StonePurchaseMenu_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4BDA055 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BDA055 = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_1C22094(NumberFormat, v7);
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

  if ( (byte_4BDA040 & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4BDA040 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BDA053 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9017/*"MainPanel/BaseView/CloseButton"*/);
    byte_4BDA053 = 1;
  }
  return (System_String_o *)StringLiteral_9017/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_4BDA041 & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4BDA041 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  StonePurchaseMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu_CallbackFunc___ctor(
        StonePurchaseMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A61010;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A60FC8;
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
  if ( (byte_4BDA056 & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseMenu_Result_TypeInfo);
    byte_4BDA056 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  Il2CppObject *_4__this; // x22
  StonePurchaseNotificationMenu_o *monitor; // x20
  System_Action_o *v5; // x21

  v2 = this;
  if ( (byte_4BDA057 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4BDA057 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 0, v5, 0, 0, v2->fields.shopId, 0, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__1(
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
  if ( (byte_4BDA058 & 1) == 0 )
  {
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&StringLiteral_12529/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_4BDA058 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12529/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
  v6 = (Il2CppObject *)v2->fields.__4__this;
  v7 = v5;
  v8 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v8, v6, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0LL);
  if ( !warningDialog )
LABEL_8:
    sub_1C22094(this, method);
  *(_QWORD *)&v9.fields.hasValue = 0LL;
  v9.fields.value.fields.y = 0.0;
  ErrorDialog__Open_39754952(warningDialog, 0LL, v7, v8, 1, -1.0, 1, v9, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__2(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x20

  v2 = this;
  if ( (byte_4BDA059 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    byte_4BDA059 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 5, v5, 0, 0, 0, 0, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__3(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x20

  v2 = this;
  if ( (byte_4BDA05A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4BDA05A = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 6, v5, 0, 0, 0, 0, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__4(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  SpendLimitMenu_o *monitor; // x20
  int32_t perMonthAmount; // w19
  SpendLimitMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4BDA05B & 1) == 0 )
  {
    sub_1C21E38(&SpendLimitMenu_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_EndSpendLimit__);
    byte_4BDA05B = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (SpendLimitMenu_o *)_4__this[8].monitor,
        perMonthAmount = v2->fields.perMonthAmount,
        v6 = (SpendLimitMenu_CallbackFunc_o *)sub_1C22084(SpendLimitMenu_CallbackFunc_TypeInfo),
        SpendLimitMenu_CallbackFunc___ctor(v6, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, v7),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  SpendLimitMenu__Open(monitor, perMonthAmount, v6, v8);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__5(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x20

  v2 = this;
  if ( (byte_4BDA05C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4BDA05C = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 7, v5, 0, 0, 0, 0, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__6(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x20

  v2 = this;
  if ( (byte_4BDA05D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4BDA05D = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 8, v5, 0, 0, 0, 0, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__7(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x20

  v2 = this;
  if ( (byte_4BDA05E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4BDA05E = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 9, v5, 0, 0, 0, 0, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass27_0___SelectedBuyBankItemConfirm_b__8(
        StonePurchaseMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass27_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v5; // x20

  v2 = this;
  if ( (byte_4BDA05F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass27_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    byte_4BDA05F = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v5, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 4, v5, 0, 0, 0, 0, 0LL);
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
  struct StonePurchaseMenu_o *_4__this; // x20
  StonePurchaseListViewManager_o *ItemListViewManager; // x19
  StonePurchaseListViewManager_CallbackFunc_o *v5; // x21

  v2 = this;
  if ( (byte_4BDA79A & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    this = (StonePurchaseMenu___c__DisplayClass38_0_o *)sub_1C21E38(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_4BDA79A = 1;
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
  v5 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1C22084(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
  StonePurchaseListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
    0LL);
  if ( !ItemListViewManager )
LABEL_8:
    sub_1C22094(this, method);
  StonePurchaseListViewManager__SetMode(ItemListViewManager, 1, v5, 0LL);
}