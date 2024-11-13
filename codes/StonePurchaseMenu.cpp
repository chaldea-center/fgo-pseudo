void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13D9D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B13D9D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13D8F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, method, v2);
    byte_4B13D8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  StonePurchaseListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_4B13D95 & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4, v5);
    byte_4B13D95 = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v12 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                 StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                                 v9,
                                                                 v10,
                                                                 v11),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v13),
          !ItemListViewManager) )
    {
      sub_1BCAA3C(buyItemMask, v6);
    }
    ItemListViewManager->fields.callbackFunc = v12;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
      (int64_t)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    StonePurchaseListViewManager__SetMode_35970200(ItemListViewManager, 1, v20);
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
  sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_4B13D8E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnMoveEnd__, v12, v13);
    byte_4B13D8E = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v15);
  }
  if ( callback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(0LL, method);
  StonePurchaseNotificationMenu__Close_35990212(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_1BCAA3C(0LL, method);
  StonePurchaseNotificationMenu__Close_35990212(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_1BCAA3C(0LL, method);
  StonePurchaseNotificationMenu__Close_35990212(stonePurchaseNotificationMenu, 0LL, v2);
  StonePurchaseMenu__Callback(this, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, isDecide);
    ErrorDialog__Close(warningDialog, 0LL);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void __fastcall StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  StonePurchaseListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4B13D91 & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4, v5);
    byte_4B13D91 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close_35962612(spendLimitMenu, 0LL, v2),
        ItemListViewManager = this->fields.ItemListViewManager,
        v11 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9,
                                                               v10),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v12),
        !ItemListViewManager) )
  {
    sub_1BCAA3C(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
    (int64_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  StonePurchaseListViewManager__SetMode_35970200(ItemListViewManager, 1, v19);
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

  if ( (byte_4B13D8C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B13D8C = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.refreshCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1BCAA3C(stoneDataLabel, v15);
  }
  ListViewManager__DestroyList((ListViewManager_o *)stoneDataLabel, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B13D99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnClickBack__, method, v2);
    byte_4B13D99 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_OnClickBack__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    StonePurchaseMenu__Callback(this, 0, v6);
  }
}


void __fastcall StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o *WebViewAddress_39282648; // x20
  System_String_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x22
  __int64 v26; // x1

  if ( (byte_4B13D9A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnClickExplanation__, v8, v9);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnEndWebView__, v10, v11);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_15719/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, v14, v15);
    byte_4B13D9A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v16 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_OnClickExplanation__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(8, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15719/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v26);
    WebViewManager__OpenView(v21, WebViewAddress_39282648, v25, 0LL);
  }
}


void __fastcall StonePurchaseMenu__OnClickHistory(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1

  if ( (byte_4B13D9B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PaymentHistoryRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnClickHistory__, v8, v9);
    sub_1BCA7E0(&Method_StonePurchaseMenu__OnClickHistory_b__40_0__, v10, v11);
    byte_4B13D9B = 1;
  }
  v12 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_OnClickHistory__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__40_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v17,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v20);
  PaymentHistoryRequest__beginRequest((PaymentHistoryRequest_o *)Request_object, 1, 0LL);
}


void __fastcall StonePurchaseMenu__OnEndWebView(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall StonePurchaseMenu__OnMoveEnd(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t state; // w8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2

  if ( (byte_4B13D97 & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5, v6);
    byte_4B13D97 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v18 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v19);
      if ( !ItemListViewManager )
        sub_1BCAA3C(v20, v21);
      ItemListViewManager->fields.callbackFunc = v18;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
        (int64_t)v18,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      StonePurchaseListViewManager__SetMode_35970200(ItemListViewManager, 1, v28);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
      v15 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_1BCA784(p_closeCallbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v15->fields.m_target)(
          v15->fields.original_method_info,
          *(_QWORD *)&v15->fields.extra_arg);
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
  __int64 v6; // x2
  int32_t state; // w8
  AgeVerificationMenu_o *ageVerificationMenu; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4B13D96 & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5, v6);
    byte_4B13D96 = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close_35958676(ageVerificationMenu, 0LL, method);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v10);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v13 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                             v9,
                                                             v10,
                                                             v11);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v14);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v13;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
          (int64_t)v13,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        StonePurchaseListViewManager__SetMode_35970200(ItemListViewManager, 1, v21);
        return;
      }
    }
    sub_1BCAA3C(ageVerificationMenu, *(_QWORD *)&result);
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

  if ( (byte_4B13D98 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnSelectBuyItem__, *(_QWORD *)&n, method);
    byte_4B13D98 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    this->fields.selectItemNum = n;
    StonePurchaseMenu__SelectBuyBankItemConfirm(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__OnSelectWarning(StonePurchaseMenu_o *this, bool isDecide, const MethodInfo *method)
{
  ErrorDialog_o *warningDialog; // x0
  const MethodInfo *v5; // x2

  if ( this->fields.state == 14 )
  {
    warningDialog = this->fields.warningDialog;
    if ( !warningDialog )
      sub_1BCAA3C(0LL, isDecide);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  void *gameObject; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UILabel_o *stoneDataLabel; // x20
  int32_t v44; // w21
  UnityEngine_GameObject_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_int__o *v49; // x21
  const MethodInfo *v50; // x2
  __int64 v51; // x1
  __int64 v52; // x1
  AgeVerificationMenu_c *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v58; // x21
  const MethodInfo *v59; // x3
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  const MethodInfo *v66; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v68; // x21
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x2
  __int64 v71; // x2
  __int64 v72; // x3
  System_Action_o *v73; // x20

  if ( (byte_4B13D8D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, callback, refreshCallback);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v9, v10);
    sub_1BCA7E0(&AgeVerificationMenu_CallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnMoveEnd__, v21, v22);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnSelectAgeVerification__, v23, v24);
    sub_1BCA7E0(&Method_StonePurchaseMenu_OnSelectBuyItem__, v25, v26);
    sub_1BCA7E0(&Method_StonePurchaseMenu__Open_b__20_0__, v27, v28);
    byte_4B13D8D = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.refreshCallbackFunc,
        (int64_t)refreshCallback,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      gameObject = this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
        gameObject = UserGameMaster__getSelfUserGame(0LL);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v44 = *((_DWORD *)gameObject + 44);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
          gameObject = LocalizationManager__GetNumberFormat(v44, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v49 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v46, v47, v48);
            System_Action_int____ctor(v49, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__20_0__, 0LL);
            StoneCountRefreshComponent__AttachToGameObject(v45, v49, 0, 0LL);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v50);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v51);
              PurchaseBehaviour__ActivateBoth(0LL);
              v53 = AgeVerificationMenu_TypeInfo;
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v52);
              if ( AgeVerificationMenu__IsConcent((const MethodInfo *)v53) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v58 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                                       v54,
                                                                       v55,
                                                                       v56);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v58,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v59);
                if ( !ItemListViewManager )
                  goto LABEL_22;
                ItemListViewManager->fields.callbackFunc = v58;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
                  (int64_t)v58,
                  v60,
                  v61,
                  v62,
                  v63,
                  v64,
                  v65);
                StonePurchaseListViewManager__SetMode_35970200(ItemListViewManager, 1, v66);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v68 = (AgeVerificationMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                              AgeVerificationMenu_CallbackFunc_TypeInfo,
                                                              v54,
                                                              v55,
                                                              v56);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v68,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  v69);
                if ( !ageVerificationMenu )
                  goto LABEL_22;
                AgeVerificationMenu__Open(ageVerificationMenu, v68, v70);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                *((_BYTE *)gameObject + 33) = 1;
                v73 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v71, v72);
                System_Action___ctor(v73, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(gameObject, v30);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  CancelPurchaseByBankRequest_o *Request_object; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  NetworkManager_ResultCallbackFunc_o *v31; // x20
  __int64 v32; // x1
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_4B13D94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, *(_QWORD *)&shopId, callback);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass28_0__RequestCancelPurchaseByBank_b__0__, v13, v14);
    sub_1BCA7E0(&StonePurchaseMenu___c__DisplayClass28_0_TypeInfo, v15, v16);
    byte_4B13D94 = 1;
  }
  v17 = sub_1BCAA2C(StonePurchaseMenu___c__DisplayClass28_0_TypeInfo, *(_QWORD *)&shopId, callback, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_13;
  *(_QWORD *)(v17 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v26);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0LL);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v31 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v28, v29, v30);
    NetworkManager_ResultCallbackFunc___ctor(
      v31,
      (Il2CppObject *)v17,
      Method_StonePurchaseMenu___c__DisplayClass28_0__RequestCancelPurchaseByBank_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v31,
                                                        (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(Request_object, v19);
  }
  ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
}


void __fastcall StonePurchaseMenu__SelectBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  StonePurchaseListViewManager_o *ItemListViewManager; // x0
  StonePurchaseListViewItem_o *Item; // x20
  StonePurchaseListViewManager_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *Instance; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  BankShopEntity_o *bankShop; // x20
  PurchaseLogic_ProductFinishedAction_o *v24; // x22

  if ( (byte_4B13D90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&PurchaseLogic_ProductFinishedAction_TypeInfo, v8, v9);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360, v12, v13);
    byte_4B13D90 = 1;
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
                                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v16 = ItemListViewManager;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    if ( !v16 )
      goto LABEL_22;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, Il2CppMethodPointer, float))v16->klass->vtable._8_ItemDragStart.method)(
      v16,
      v16->klass->vtable._9_ItemDragEnd.methodPtr,
      ManagerConfig_TypeInfo->static_fields->MINIMUM_ENABLE_ALPHA);
    TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 1.0, 0LL);
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v17);
    if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
    {
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v18);
      Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance(0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      ItemListViewManager = (StonePurchaseListViewManager_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
      if ( ((unsigned __int8)ItemListViewManager & 1) != 0 )
      {
        if ( Item )
        {
          bankShop = Item->fields.bankShop;
          v24 = (PurchaseLogic_ProductFinishedAction_o *)sub_1BCAA2C(
                                                           PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                           method,
                                                           v21,
                                                           v22);
          PurchaseLogic_ProductFinishedAction___ctor(
            v24,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v24, 0LL);
            return;
          }
        }
LABEL_22:
        sub_1BCAA3C(ItemListViewManager, method);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x20
  __int64 v42; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  StonePurchaseMenu_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  System_Action_o *v55; // x2
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  int32_t v58; // w21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Action_o *v62; // x0
  __int64 *v63; // x8
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Action_o *v70; // x25
  const MethodInfo *v71; // x7
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  _QWORD *v87; // x0
  System_Reflection_MethodBase_o *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  int32_t v92; // w20
  System_Action_o *v93; // x21
  _QWORD *v94; // x0
  System_Reflection_MethodBase_o *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  _QWORD *v104; // x0
  System_Reflection_MethodBase_o *v105; // x0
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  System_Action_o *v109; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4B13D92 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&perMonthAmount);
    sub_1BCA7E0(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__, v15, v16);
    sub_1BCA7E0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v17, v18);
    sub_1BCA7E0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360, v19, v20);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__0__, v21, v22);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__1__, v23, v24);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__2__, v25, v26);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__3__, v27, v28);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__4__, v29, v30);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__5__, v31, v32);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__6__, v33, v34);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__7__, v35, v36);
    sub_1BCA7E0(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__8__, v37, v38);
    sub_1BCA7E0(&StonePurchaseMenu___c__DisplayClass26_0_TypeInfo, v39, v40);
    byte_4B13D92 = 1;
  }
  v41 = sub_1BCAA2C(
          StonePurchaseMenu___c__DisplayClass26_0_TypeInfo,
          *(_QWORD *)&result,
          *(_QWORD *)&perMonthAmount,
          *(_QWORD *)&freeStoneNum);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
LABEL_41:
    sub_1BCAA3C(v42, v43);
  *(_QWORD *)(v41 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)this, v44, v45, v46, v47, v48, v49);
  *(_DWORD *)(v41 + 24) = shopId;
  *(_DWORD *)(v41 + 28) = perMonthAmount;
  v50 = (StonePurchaseMenu_o *)TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v64 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v64 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v65 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v64, v64[4]);
      OverwriteAssetSoundName__PlaySystemSe(v65, 8, 0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
      System_Action___ctor(v70, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_41;
      StonePurchaseNotificationMenu__Open(
        stonePurchaseNotificationMenu,
        1,
        v70,
        freeStoneNum,
        chargeStoneNum,
        *(_DWORD *)(v41 + 24),
        isSentGift,
        v71);
      break;
    case 4:
      break;
    case 5:
      v77 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v77 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v78 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v77, v77[4]);
      OverwriteAssetSoundName__PlaySystemSe(v78, 0, 0LL);
      this->fields.state = 14;
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v79, v80, v81);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v82 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v82 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v83 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v82, v82[4]);
      OverwriteAssetSoundName__PlaySystemSe(v83, 1, 0LL);
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v84, v85, v86);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v87 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v87 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v88 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v87, v87[4]);
      OverwriteAssetSoundName__PlaySystemSe(v88, 2, 0LL);
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v89, v90, v91);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v92 = *(_DWORD *)(v41 + 24);
      v93 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
      System_Action___ctor(v93, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0LL);
      v54 = v92;
      v55 = v93;
      goto LABEL_37;
    case 10:
      this->fields.state = 10;
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v56 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v56 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v57 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v56, v56[4]);
      OverwriteAssetSoundName__PlaySystemSe(v57, 2, 0LL);
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v59, v60, v61);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v94 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v94 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v95 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v94, v94[4]);
      OverwriteAssetSoundName__PlaySystemSe(v95, 2, 0LL);
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v96, v97, v98);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v99 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v99 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v100 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v99, v99[4]);
      OverwriteAssetSoundName__PlaySystemSe(v100, 2, 0LL);
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v101, v102, v103);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v104 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v104 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v105 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v104, v104[4]);
      OverwriteAssetSoundName__PlaySystemSe(v105, 0, 0LL);
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v106, v107, v108);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v54 = *(_DWORD *)(v41 + 24);
      v55 = 0LL;
      goto LABEL_37;
    default:
      v72 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360 + 83) & 2) != 0 )
        v72 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___76950360);
      v73 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v72, v72[4]);
      OverwriteAssetSoundName__PlaySystemSe(v73, 2, 0LL);
      v58 = *(_DWORD *)(v41 + 24);
      v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
      v63 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v109 = v62;
      System_Action___ctor(v62, (Il2CppObject *)v41, *v63, 0LL);
      v54 = v58;
      v55 = v109;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v50, v54, v55, v53);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_35984056(
        StonePurchaseMenu_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  int32_t v35; // w21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x23
  __int64 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x7
  int32_t v43; // w1
  StonePurchaseNotificationMenu_o *v44; // x0
  System_Action_o *v45; // x2
  int32_t v46; // w3
  int32_t v47; // w4
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  __int64 v50; // x1
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  ErrorDialog_ClickDelegate_o *v56; // x22
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  struct StonePurchaseNotificationMenu_o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Action_o *v63; // x21
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  struct StonePurchaseNotificationMenu_o *v66; // x20
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v76; // x22
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x3
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v80; // 0:x6.12

  if ( (byte_4B13D93 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&perMonthAmount);
    sub_1BCA7E0(&SpendLimitMenu_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v13, v14);
    sub_1BCA7E0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v15, v16);
    sub_1BCA7E0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v17, v18);
    sub_1BCA7E0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v19, v20);
    sub_1BCA7E0(&Method_StonePurchaseMenu_EndSpendLimit__, v21, v22);
    sub_1BCA7E0(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__, v23, v24);
    sub_1BCA7E0(&StringLiteral_12444/*"STONE_PURCHASE_RESULT_WAIT"*/, v25, v26);
    byte_4B13D93 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v30 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 8, 0LL);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0LL);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v35 = TotalAddedChargeStoneNum;
      v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
      System_Action___ctor(v39, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_35;
      v43 = 1;
      v44 = stonePurchaseNotificationMenu;
      v45 = v39;
      v46 = TotalAddedFreeStoneNum;
      v47 = v35;
      goto LABEL_29;
    case 3:
      v48 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v48 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v49 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v48, v48[4]);
      OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12444/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v56 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v53, v54, v55);
      ErrorDialog_ClickDelegate___ctor(
        v56,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v80.fields.hasValue = 0LL;
      v80.fields.value.fields.y = 0.0;
      ErrorDialog__Open_39219024(warningDialog, 0LL, v52, v56, 1, -1.0, 1, v80, 0LL);
      goto LABEL_32;
    case 4:
      v57 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v57 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v58 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v57, v57[4]);
      OverwriteAssetSoundName__PlaySystemSe(v58, 1, 0LL);
      v59 = this->fields.stonePurchaseNotificationMenu;
      v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v61, v62);
      System_Action___ctor(v63, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v59 )
        goto LABEL_35;
      v44 = v59;
      v43 = 0;
      goto LABEL_28;
    case 6:
      v70 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v70 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v71 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v70, v70[4]);
      OverwriteAssetSoundName__PlaySystemSe(v71, 2, 0LL);
      v66 = this->fields.stonePurchaseNotificationMenu;
      v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v72, v73, v74);
      System_Action___ctor(v63, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v66 )
        goto LABEL_35;
      v43 = 5;
      goto LABEL_27;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v27);
      goto LABEL_32;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v76 = (SpendLimitMenu_CallbackFunc_o *)sub_1BCAA2C(SpendLimitMenu_CallbackFunc_TypeInfo, v27, v28, v29);
      SpendLimitMenu_CallbackFunc___ctor(v76, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v77);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v76, v78);
      goto LABEL_32;
    default:
      v64 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v64 = (_QWORD *)sub_1BCA7F8(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v65 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v64, v64[4]);
      OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0LL);
      v66 = this->fields.stonePurchaseNotificationMenu;
      v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
      System_Action___ctor(v63, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v66 )
LABEL_35:
        sub_1BCAA3C(v40, v41);
      v43 = 4;
LABEL_27:
      v44 = v66;
LABEL_28:
      v45 = v63;
      v46 = 0;
      v47 = 0;
LABEL_29:
      StonePurchaseNotificationMenu__Open(v44, v43, v45, v46, v47, 0, 0, v42);
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
    sub_1BCAA3C(ItemListViewManager, method);
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
    sub_1BCAA3C(0LL, result);
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
  __int64 v7; // x1

  if ( (byte_4B13D9E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
    byte_4B13D9E = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_1BCAA3C(NumberFormat, v7);
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

  if ( (byte_4B13D8A & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13D8A = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13D9C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8956/*"MainPanel/BaseView/CloseButton"*/, method, v2);
    byte_4B13D9C = 1;
  }
  return (System_String_o *)StringLiteral_8956/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_4B13D8B & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13D8B = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0AC1C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0ABD4;
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
  if ( (byte_4B13D9F & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B13D9F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  StonePurchaseMenu___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x20
  System_Action_o *v9; // x22
  const MethodInfo *v10; // x7

  v4 = this;
  if ( (byte_4B13DA0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v5,
                                                          v6);
    byte_4B13DA0 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v9, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 0, v9, 0, 0, v4->fields.shopId, 0, v10);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__1(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StonePurchaseMenu___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct StonePurchaseMenu_o *_4__this; // x8
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v12; // x0
  Il2CppObject *v13; // x22
  System_String_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ErrorDialog_ClickDelegate_o *v18; // x21
  System_Nullable_Vector2__o v19; // 0:x6.12

  v3 = this;
  if ( (byte_4B13DA1 & 1) == 0 )
  {
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v6, v7);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(&StringLiteral_12444/*"STONE_PURCHASE_RESULT_WAIT"*/, v8, v9);
    byte_4B13DA1 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12444/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
  v13 = (Il2CppObject *)v3->fields.__4__this;
  v14 = v12;
  v18 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v15, v16, v17);
  ErrorDialog_ClickDelegate___ctor(v18, v13, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0LL);
  if ( !warningDialog )
LABEL_8:
    sub_1BCAA3C(this, method);
  *(_QWORD *)&v19.fields.hasValue = 0LL;
  v19.fields.value.fields.y = 0.0;
  ErrorDialog__Open_39219024(warningDialog, 0LL, v14, v18, 1, -1.0, 1, v19, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__2(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  StonePurchaseMenu___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x7

  v4 = this;
  if ( (byte_4B13DA2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__,
                                                          v5,
                                                          v6);
    byte_4B13DA2 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v9, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 5, v9, 0, 0, 0, 0, v10);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__3(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  StonePurchaseMenu___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x7

  v4 = this;
  if ( (byte_4B13DA3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v5,
                                                          v6);
    byte_4B13DA3 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v9, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 6, v9, 0, 0, 0, 0, v10);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__4(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  StonePurchaseMenu___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x21
  SpendLimitMenu_o *monitor; // x20
  int32_t perMonthAmount; // w19
  SpendLimitMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_4B13DA4 & 1) == 0 )
  {
    sub_1BCA7E0(&SpendLimitMenu_CallbackFunc_TypeInfo, method, v2);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(&Method_StonePurchaseMenu_EndSpendLimit__, v5, v6);
    byte_4B13DA4 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (SpendLimitMenu_o *)_4__this[8].monitor,
        perMonthAmount = v4->fields.perMonthAmount,
        v10 = (SpendLimitMenu_CallbackFunc_o *)sub_1BCAA2C(SpendLimitMenu_CallbackFunc_TypeInfo, method, v2, v3),
        SpendLimitMenu_CallbackFunc___ctor(v10, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, v11),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  SpendLimitMenu__Open(monitor, perMonthAmount, v10, v12);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__5(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  StonePurchaseMenu___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x7

  v4 = this;
  if ( (byte_4B13DA5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v5,
                                                          v6);
    byte_4B13DA5 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v9, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 7, v9, 0, 0, 0, 0, v10);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__6(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  StonePurchaseMenu___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x7

  v4 = this;
  if ( (byte_4B13DA6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v5,
                                                          v6);
    byte_4B13DA6 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v9, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 8, v9, 0, 0, 0, 0, v10);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__7(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  StonePurchaseMenu___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x7

  v4 = this;
  if ( (byte_4B13DA7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v5,
                                                          v6);
    byte_4B13DA7 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v9, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 9, v9, 0, 0, 0, 0, v10);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__8(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  StonePurchaseMenu___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x7

  v4 = this;
  if ( (byte_4B13DA8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v5,
                                                          v6);
    byte_4B13DA8 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v9, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 4, v9, 0, 0, 0, 0, v10);
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