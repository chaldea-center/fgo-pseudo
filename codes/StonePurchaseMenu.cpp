void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B646EC & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B646EC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B646DE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, method);
    byte_4B646DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4B646E4 & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_4B646E4 = 1;
  }
  StonePurchaseMenu__UpdateListView(this, method);
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v7 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BE4D18(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v8),
          !ItemListViewManager) )
    {
      sub_1BE4D28(buyItemMask, v4);
    }
    ItemListViewManager->fields.callbackFunc = v7;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
      (int64_t)v7,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    StonePurchaseListViewManager__SetMode_36106800(ItemListViewManager, 1, v15);
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
  sub_1BE4A70(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Action_o *v14; // x20

  if ( (byte_4B646DD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnMoveEnd__, v11);
    byte_4B646DD = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v14 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
      return;
    }
LABEL_10:
    sub_1BE4D28(Instance, v13);
  }
  if ( callback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BE4D28(0LL, method);
  StonePurchaseNotificationMenu__Close_36126816(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_1BE4D28(0LL, method);
  StonePurchaseNotificationMenu__Close_36126816(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_1BE4D28(0LL, method);
  StonePurchaseNotificationMenu__Close_36126816(stonePurchaseNotificationMenu, 0LL, v2);
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
      sub_1BE4D28(0LL, isDecide);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4B646E0 & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_4B646E0 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close_36099212(spendLimitMenu, 0LL, v2),
        ItemListViewManager = this->fields.ItemListViewManager,
        v7 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BE4D18(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v8),
        !ItemListViewManager) )
  {
    sub_1BE4D28(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v7;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
    (int64_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  StonePurchaseListViewManager__SetMode_36106800(ItemListViewManager, 1, v15);
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

  if ( (byte_4B646DB & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B646DB = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.refreshCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1BE4D28(stoneDataLabel, v15);
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

  if ( (byte_4B646E8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnClickBack__, method);
    byte_4B646E8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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
  System_String_o *WebViewAddress_39478212; // x20
  System_String_o *v12; // x21
  System_Action_o *v13; // x22

  if ( (byte_4B646E9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnClickExplanation__, v5);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnEndWebView__, v6);
    sub_1BE4ACC(&WebViewManager_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_15759/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, v8);
    byte_4B646E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v9 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_OnClickExplanation__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_39478212 = NetworkManager__getWebViewAddress_39478212(8, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15759/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v13 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v12, WebViewAddress_39478212, v13, 0LL);
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

  if ( (byte_4B646EA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NetworkManager_getRequest_PaymentHistoryRequest___, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnClickHistory__, v5);
    sub_1BE4ACC(&Method_StonePurchaseMenu__OnClickHistory_b__40_0__, v6);
    byte_4B646EA = 1;
  }
  v7 = Method_StonePurchaseMenu_OnClickHistory__;
  if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickHistory__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_OnClickHistory__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_StonePurchaseMenu__OnClickHistory_b__40_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
  if ( !Request_object )
    sub_1BE4D28(0LL, v11);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v13; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x3
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2

  if ( (byte_4B646E6 & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_4B646E6 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v16 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BE4D18(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v17);
      if ( !ItemListViewManager )
        sub_1BE4D28(v18, v19);
      ItemListViewManager->fields.callbackFunc = v16;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
        (int64_t)v16,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      StonePurchaseListViewManager__SetMode_36106800(ItemListViewManager, 1, v26);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
      v13 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_1BE4A70(p_closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v13->fields.m_target)(
          v13->fields.original_method_info,
          *(_QWORD *)&v13->fields.extra_arg);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B646E5 & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5);
    byte_4B646E5 = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close_36095276(ageVerificationMenu, 0LL, method);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v8);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v10 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BE4D18(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v11);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v10;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
          (int64_t)v10,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        StonePurchaseListViewManager__SetMode_36106800(ItemListViewManager, 1, v18);
        return;
      }
    }
    sub_1BE4D28(ageVerificationMenu, *(_QWORD *)&result);
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

  if ( (byte_4B646E7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnSelectBuyItem__, *(_QWORD *)&n);
    byte_4B646E7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
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
      sub_1BE4D28(0LL, isDecide);
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
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UILabel_o *stoneDataLabel; // x20
  int32_t v33; // w21
  UnityEngine_GameObject_o *v34; // x20
  System_Action_int__o *v35; // x21
  const MethodInfo *v36; // x2
  AgeVerificationMenu_c *v37; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v39; // x21
  const MethodInfo *v40; // x3
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v49; // x21
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  System_Action_o *v52; // x20

  if ( (byte_4B646DC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_int__TypeInfo, callback);
    sub_1BE4ACC(&System_Action_TypeInfo, v7);
    sub_1BE4ACC(&AgeVerificationMenu_TypeInfo, v8);
    sub_1BE4ACC(&AgeVerificationMenu_CallbackFunc_TypeInfo, v9);
    sub_1BE4ACC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, v10);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v11);
    sub_1BE4ACC(&PurchaseBehaviour_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnMoveEnd__, v14);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnSelectAgeVerification__, v15);
    sub_1BE4ACC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v16);
    sub_1BE4ACC(&Method_StonePurchaseMenu__Open_b__20_0__, v17);
    byte_4B646DC = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.refreshCallbackFunc,
        (int64_t)refreshCallback,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      gameObject = this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
        gameObject = UserGameMaster__getSelfUserGame(0LL);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v33 = *((_DWORD *)gameObject + 44);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__GetNumberFormat(v33, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v35 = (System_Action_int__o *)sub_1BE4D18(System_Action_int__TypeInfo);
            System_Action_int____ctor(v35, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__20_0__, 0LL);
            StoneCountRefreshComponent__AttachToGameObject(v34, v35, 0, 0LL);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v36);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              PurchaseBehaviour__ActivateBoth(0LL);
              v37 = AgeVerificationMenu_TypeInfo;
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              if ( AgeVerificationMenu__IsConcent((const MethodInfo *)v37) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v39 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1BE4D18(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v39,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v40);
                if ( !ItemListViewManager )
                  goto LABEL_22;
                ItemListViewManager->fields.callbackFunc = v39;
                sub_1BE4A70(
                  (PartyOrganizationUtility_o *)&ItemListViewManager->fields.callbackFunc,
                  (int64_t)v39,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46);
                StonePurchaseListViewManager__SetMode_36106800(ItemListViewManager, 1, v47);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v49 = (AgeVerificationMenu_CallbackFunc_o *)sub_1BE4D18(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v49,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  v50);
                if ( !ageVerificationMenu )
                  goto LABEL_22;
                AgeVerificationMenu__Open(ageVerificationMenu, v49, v51);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                *((_BYTE *)gameObject + 33) = 1;
                v52 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                System_Action___ctor(v52, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BE4D28(gameObject, v19);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  int32_t shopIda; // [xsp+Ch] [xbp-24h] BYREF

  shopIda = shopId;
  if ( (byte_4B646E3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Contains__, *(_QWORD *)&shopId);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&PurchaseBehaviour_TypeInfo, v7);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass28_0__RequestCancelPurchaseByBank_b__0__, v9);
    sub_1BE4ACC(&StonePurchaseMenu___c__DisplayClass28_0_TypeInfo, v10);
    byte_4B646E3 = 1;
  }
  v11 = sub_1BE4D18(StonePurchaseMenu___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Request_object = (CancelPurchaseByBankRequest_o *)System_Int32__ToString((int32_t)&shopIda, 0LL);
  if ( !PreparePurchaseShopIdsFromPlayerPrefs )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
         (Il2CppObject *)Request_object,
         (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v21,
      (Il2CppObject *)v11,
      Method_StonePurchaseMenu___c__DisplayClass28_0__RequestCancelPurchaseByBank_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (CancelPurchaseByBankRequest_o *)NetworkManager__getRequest_object_(
                                                        v21,
                                                        (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    if ( Request_object )
    {
      CancelPurchaseByBankRequest__beginRequest(Request_object, shopIda, 0LL);
      return;
    }
LABEL_13:
    sub_1BE4D28(Request_object, v13);
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

  if ( (byte_4B646DF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&PurchaseLogic_ProductFinishedAction_TypeInfo, v6);
    sub_1BE4ACC(&PurchaseBehaviour_TypeInfo, v7);
    sub_1BE4ACC(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832, v8);
    byte_4B646DF = 1;
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
                                                              (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
          v14 = (PurchaseLogic_ProductFinishedAction_o *)sub_1BE4D18(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v14, 0LL);
            return;
          }
        }
LABEL_22:
        sub_1BE4D28(ItemListViewManager, method);
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  StonePurchaseMenu_o *v37; // x0
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  System_Action_o *v40; // x2
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int32_t v43; // w21
  System_Action_o *v44; // x0
  __int64 *v45; // x8
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x24
  System_Action_o *v49; // x25
  const MethodInfo *v50; // x7
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  int32_t v59; // w20
  System_Action_o *v60; // x21
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  System_Action_o *v67; // x22
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4B646E1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_StonePurchaseMenu_BackBuyBankItemConfirm__, v15);
    sub_1BE4ACC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v16);
    sub_1BE4ACC(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832, v17);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__0__, v18);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__1__, v19);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__2__, v20);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__3__, v21);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__4__, v22);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__5__, v23);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__6__, v24);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__7__, v25);
    sub_1BE4ACC(&Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__8__, v26);
    sub_1BE4ACC(&StonePurchaseMenu___c__DisplayClass26_0_TypeInfo, v27);
    byte_4B646E1 = 1;
  }
  v28 = sub_1BE4D18(StonePurchaseMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
LABEL_41:
    sub_1BE4D28(v29, v30);
  *(_QWORD *)(v28 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)this, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)(v28 + 24) = shopId;
  *(_DWORD *)(v28 + 28) = perMonthAmount;
  v37 = (StonePurchaseMenu_o *)TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v46 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v46 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v47 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v46, v46[4]);
      OverwriteAssetSoundName__PlaySystemSe(v47, 8, 0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v49 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v49, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_41;
      StonePurchaseNotificationMenu__Open(
        stonePurchaseNotificationMenu,
        1,
        v49,
        freeStoneNum,
        chargeStoneNum,
        *(_DWORD *)(v28 + 24),
        isSentGift,
        v50);
      break;
    case 4:
      break;
    case 5:
      v53 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v53 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v54 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v53, v53[4]);
      OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0LL);
      this->fields.state = 14;
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__1__;
      goto LABEL_36;
    case 6:
      v55 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v55 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v56 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v55, v55[4]);
      OverwriteAssetSoundName__PlaySystemSe(v56, 1, 0LL);
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__0__;
      goto LABEL_36;
    case 8:
      v57 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v57 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v58 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v57, v57[4]);
      OverwriteAssetSoundName__PlaySystemSe(v58, 2, 0LL);
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__2__;
      goto LABEL_36;
    case 9:
      v59 = *(_DWORD *)(v28 + 24);
      v60 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v60, (Il2CppObject *)this, Method_StonePurchaseMenu_BackBuyBankItemConfirm__, 0LL);
      v39 = v59;
      v40 = v60;
      goto LABEL_37;
    case 10:
      this->fields.state = 10;
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__4__;
      goto LABEL_36;
    case 11:
    case 12:
      v41 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v42 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v41, v41[4]);
      OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0LL);
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__3__;
      goto LABEL_36;
    case 13:
      v61 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v61 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v62 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v61, v61[4]);
      OverwriteAssetSoundName__PlaySystemSe(v62, 2, 0LL);
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__5__;
      goto LABEL_36;
    case 14:
      v63 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v63 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v64 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v63, v63[4]);
      OverwriteAssetSoundName__PlaySystemSe(v64, 2, 0LL);
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__6__;
      goto LABEL_36;
    case 15:
      v65 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v65 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v66 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v65, v65[4]);
      OverwriteAssetSoundName__PlaySystemSe(v66, 0, 0LL);
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__7__;
      goto LABEL_36;
    case 16:
    case 17:
      v39 = *(_DWORD *)(v28 + 24);
      v40 = 0LL;
      goto LABEL_37;
    default:
      v51 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832 + 83) & 2) != 0 )
        v51 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___77272832);
      v52 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v51, v51[4]);
      OverwriteAssetSoundName__PlaySystemSe(v52, 2, 0LL);
      v43 = *(_DWORD *)(v28 + 24);
      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v45 = &Method_StonePurchaseMenu___c__DisplayClass26_0__SelectedBuyBankItemConfirm_b__8__;
LABEL_36:
      v67 = v44;
      System_Action___ctor(v44, (Il2CppObject *)v28, *v45, 0LL);
      v39 = v43;
      v40 = v67;
LABEL_37:
      StonePurchaseMenu__RequestCancelPurchaseByBank(v37, v39, v40, v38);
      break;
  }
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_36120660(
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
  const MethodInfo *v27; // x7
  int32_t v28; // w1
  StonePurchaseNotificationMenu_o *v29; // x0
  System_Action_o *v30; // x2
  int32_t v31; // w3
  int32_t v32; // w4
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v36; // x21
  ErrorDialog_ClickDelegate_o *v37; // x22
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  struct StonePurchaseNotificationMenu_o *v40; // x20
  System_Action_o *v41; // x21
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  struct StonePurchaseNotificationMenu_o *v44; // x20
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v48; // x22
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v52; // 0:x6.12

  if ( (byte_4B646E2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&SpendLimitMenu_CallbackFunc_TypeInfo, v7);
    sub_1BE4ACC(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v10);
    sub_1BE4ACC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v11);
    sub_1BE4ACC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v12);
    sub_1BE4ACC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v13);
    sub_1BE4ACC(&Method_StonePurchaseMenu_EndSpendLimit__, v14);
    sub_1BE4ACC(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__, v15);
    sub_1BE4ACC(&StringLiteral_12477/*"STONE_PURCHASE_RESULT_WAIT"*/, v16);
    byte_4B646E2 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v18 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 8, 0LL);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0LL);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v23 = TotalAddedChargeStoneNum;
      v24 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_35;
      v28 = 1;
      v29 = stonePurchaseNotificationMenu;
      v30 = v24;
      v31 = TotalAddedFreeStoneNum;
      v32 = v23;
      goto LABEL_29;
    case 3:
      v33 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v34 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v37 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v37,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v52.fields.hasValue = 0LL;
      v52.fields.value.fields.y = 0.0;
      ErrorDialog__Open_39414552(warningDialog, 0LL, v36, v37, 1, -1.0, 1, v52, 0LL);
      goto LABEL_32;
    case 4:
      v38 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v39 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v38, v38[4]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0LL);
      v40 = this->fields.stonePurchaseNotificationMenu;
      v41 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v40 )
        goto LABEL_35;
      v29 = v40;
      v28 = 0;
      goto LABEL_28;
    case 6:
      v45 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v46 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v45, v45[4]);
      OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0LL);
      v44 = this->fields.stonePurchaseNotificationMenu;
      v41 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v44 )
        goto LABEL_35;
      v28 = 5;
      goto LABEL_27;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v17);
      goto LABEL_32;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v48 = (SpendLimitMenu_CallbackFunc_o *)sub_1BE4D18(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v48, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v49);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v48, v50);
      goto LABEL_32;
    default:
      v42 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1BE4AE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v43 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0LL);
      v44 = this->fields.stonePurchaseNotificationMenu;
      v41 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v44 )
LABEL_35:
        sub_1BE4D28(v25, v26);
      v28 = 4;
LABEL_27:
      v29 = v44;
LABEL_28:
      v30 = v41;
      v31 = 0;
      v32 = 0;
LABEL_29:
      StonePurchaseNotificationMenu__Open(v29, v28, v30, v31, v32, 0, 0, v27);
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
    sub_1BE4D28(ItemListViewManager, method);
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
    sub_1BE4D28(0LL, result);
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

  if ( (byte_4B646ED & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4B646ED = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_1BE4D28(NumberFormat, v7);
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

  if ( (byte_4B646D9 & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4B646D9 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B646EB & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_8977/*"MainPanel/BaseView/CloseButton"*/, method);
    byte_4B646EB = 1;
  }
  return (System_String_o *)StringLiteral_8977/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_4B646DA & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4B646DA = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A24A0C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A249C4;
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
  if ( (byte_4B646EE & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_4B646EE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  __int64 v3; // x1
  Il2CppObject *_4__this; // x21
  StonePurchaseNotificationMenu_o *monitor; // x20
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B646EF & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B646EF = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 0, v6, 0, 0, v2->fields.shopId, 0, v7);
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
  ErrorDialog_ClickDelegate_o *v11; // x21
  System_Nullable_Vector2__o v12; // 0:x6.12

  v2 = this;
  if ( (byte_4B646F0 & 1) == 0 )
  {
    sub_1BE4ACC(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v4);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(&StringLiteral_12477/*"STONE_PURCHASE_RESULT_WAIT"*/, v5);
    byte_4B646F0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  warningDialog = _4__this->fields.warningDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
  v9 = (Il2CppObject *)v2->fields.__4__this;
  v10 = v8;
  v11 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v11, v9, Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, 0LL);
  if ( !warningDialog )
LABEL_8:
    sub_1BE4D28(this, method);
  *(_QWORD *)&v12.fields.hasValue = 0LL;
  v12.fields.value.fields.y = 0.0;
  ErrorDialog__Open_39414552(warningDialog, 0LL, v10, v11, 1, -1.0, 1, v12, 0LL);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__2(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B646F1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__,
                                                          v3);
    byte_4B646F1 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 5, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__3(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B646F2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B646F2 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 6, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__4(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x21
  SpendLimitMenu_o *monitor; // x20
  int32_t perMonthAmount; // w19
  SpendLimitMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4B646F3 & 1) == 0 )
  {
    sub_1BE4ACC(&SpendLimitMenu_CallbackFunc_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(&Method_StonePurchaseMenu_EndSpendLimit__, v3);
    byte_4B646F3 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (SpendLimitMenu_o *)_4__this[8].monitor,
        perMonthAmount = v2->fields.perMonthAmount,
        v7 = (SpendLimitMenu_CallbackFunc_o *)sub_1BE4D18(SpendLimitMenu_CallbackFunc_TypeInfo),
        SpendLimitMenu_CallbackFunc___ctor(v7, _4__this, Method_StonePurchaseMenu_EndSpendLimit__, v8),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  SpendLimitMenu__Open(monitor, perMonthAmount, v7, v9);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__5(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B646F4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B646F4 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 7, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__6(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B646F5 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B646F5 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 8, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__7(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B646F6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B646F6 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 9, v6, 0, 0, 0, 0, v7);
}


void __fastcall StonePurchaseMenu___c__DisplayClass26_0___SelectedBuyBankItemConfirm_b__8(
        StonePurchaseMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  StonePurchaseMenu___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  StonePurchaseNotificationMenu_o *monitor; // x19
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x7

  v2 = this;
  if ( (byte_4B646F7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    this = (StonePurchaseMenu___c__DisplayClass26_0_o *)sub_1BE4ACC(
                                                          &Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__,
                                                          v3);
    byte_4B646F7 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (StonePurchaseNotificationMenu_o *)_4__this[7].monitor,
        v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v6, _4__this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  StonePurchaseNotificationMenu__Open(monitor, 4, v6, 0, 0, 0, 0, v7);
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