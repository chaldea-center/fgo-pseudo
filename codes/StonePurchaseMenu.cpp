void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_48E04ED & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    byte_48E04ED = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_48E04E1 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9825/*"OnMoveEnd"*/, method);
    byte_48E04E1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9825/*"OnMoveEnd"*/,
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

  if ( (byte_48E04E6 & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_48E04E6 = 1;
  }
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B00F18(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
            v7),
          !ItemListViewManager) )
    {
      sub_1B00F28(buyItemMask, method);
    }
    ItemListViewManager->fields.callbackFunc = v6;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v6, v8, v9);
    StonePurchaseListViewManager__SetMode_34123356(ItemListViewManager, 1, v10);
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
  sub_1B00C70(p_callbackFunc, 0, (int32_t)method, v3);
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
  System_Action_o *v10; // x20

  if ( (byte_48E04E0 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnMoveEnd__, v7);
    byte_48E04E0 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3);
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      BYTE1(Instance[2].klass) = 0;
      v10 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
      return;
    }
LABEL_10:
    sub_1B00F28(Instance, v9);
  }
  if ( callback )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg,
      method);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B00F28(0LL, method);
  StonePurchaseNotificationMenu__Close_34139476(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_1B00F28(0LL, method);
  StonePurchaseNotificationMenu__Close_34139476(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_1B00F28(0LL, method);
  StonePurchaseNotificationMenu__Close_34139476(stonePurchaseNotificationMenu, 0LL, v2);
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
      sub_1B00F28(0LL, isDecide);
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
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_48E04E3 & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_48E04E3 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close_34117216(spendLimitMenu, 0LL, v2),
        ItemListViewManager = this->fields.ItemListViewManager,
        v7 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B00F18(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
          v8),
        !ItemListViewManager) )
  {
    sub_1B00F28(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc, (int32_t)v7, v9, v10);
  StonePurchaseListViewManager__SetMode_34123356(ItemListViewManager, 1, v11);
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

  if ( (byte_48E04DE & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E04DE = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  this->fields.refreshCallbackFunc = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.refreshCallbackFunc, 0, v5, v6);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_1B00F28(stoneDataLabel, v7);
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

  if ( (byte_48E04EA & 1) == 0 )
  {
    sub_1B00CCC(&Method_StonePurchaseMenu_OnClickBack__, method);
    byte_48E04EA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_StonePurchaseMenu_OnClickBack__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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
  System_String_o *WebViewAddress_37274204; // x20
  System_String_o *v12; // x21
  System_Action_o *v13; // x22

  if ( (byte_48E04EB & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnClickExplanation__, v5);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnEndWebView__, v6);
    sub_1B00CCC(&WebViewManager_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_15322/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, v8);
    byte_48E04EB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v9 = Method_StonePurchaseMenu_OnClickExplanation__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnClickExplanation__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_OnClickExplanation__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_37274204 = NetworkManager__getWebViewAddress_37274204(8, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15322/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v13 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v12, WebViewAddress_37274204, v13, 0LL);
  }
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
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x2

  if ( (byte_48E04E8 & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_48E04E8 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v12 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B00F18(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v13);
      if ( !ItemListViewManager )
        sub_1B00F28(v14, v15);
      ItemListViewManager->fields.callbackFunc = v12;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
        (int32_t)v12,
        v16,
        v17);
      StonePurchaseListViewManager__SetMode_34123356(ItemListViewManager, 1, v18);
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
        sub_1B00C70(p_closeCallbackFunc, 0, v6, v7);
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
  int32_t v13; // w3
  const MethodInfo *v14; // x2

  if ( (byte_48E04E7 & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5);
    byte_48E04E7 = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close_34113284(ageVerificationMenu, 0LL, method);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v8);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v10 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B00F18(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
        v11);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v10;
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
          (int32_t)v10,
          v12,
          v13);
        StonePurchaseListViewManager__SetMode_34123356(ItemListViewManager, 1, v14);
        return;
      }
    }
    sub_1B00F28(ageVerificationMenu, *(_QWORD *)&result);
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

  if ( (byte_48E04E9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_StonePurchaseMenu_OnSelectBuyItem__, *(_QWORD *)&n);
    byte_48E04E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_StonePurchaseMenu_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_StonePurchaseMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
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
      sub_1B00F28(0LL, isDecide);
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  UILabel_o *stoneDataLabel; // x20
  int32_t v25; // w21
  UnityEngine_GameObject_o *v26; // x20
  System_Action_int__o *v27; // x21
  const MethodInfo *v28; // x2
  AgeVerificationMenu_c *v29; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v31; // x21
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v37; // x21
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  System_Action_o *v40; // x20

  if ( (byte_48E04DF & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_int__TypeInfo, callback);
    sub_1B00CCC(&System_Action_TypeInfo, v7);
    sub_1B00CCC(&AgeVerificationMenu_TypeInfo, v8);
    sub_1B00CCC(&AgeVerificationMenu_CallbackFunc_TypeInfo, v9);
    sub_1B00CCC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, v10);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v11);
    sub_1B00CCC(&PurchaseBehaviour_TypeInfo, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnMoveEnd__, v14);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnSelectAgeVerification__, v15);
    sub_1B00CCC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v16);
    sub_1B00CCC(&Method_StonePurchaseMenu__Open_b__19_0__, v17);
    byte_48E04DF = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v20, v21);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&this->fields.refreshCallbackFunc,
        (int32_t)refreshCallback,
        v22,
        v23);
      gameObject = this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
        gameObject = UserGameMaster__getSelfUserGame(0LL);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v25 = *((_DWORD *)gameObject + 42);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__GetNumberFormat(v25, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v27 = (System_Action_int__o *)sub_1B00F18(System_Action_int__TypeInfo);
            System_Action_int____ctor(v27, (Il2CppObject *)this, Method_StonePurchaseMenu__Open_b__19_0__, 0LL);
            StoneCountRefreshComponent__AttachToGameObject(v26, v27, 1, 0LL);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v28);
              if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              PurchaseBehaviour__Activate(0LL);
              v29 = AgeVerificationMenu_TypeInfo;
              if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              if ( AgeVerificationMenu__IsConcent((const MethodInfo *)v29) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v31 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_1B00F18(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v31,
                  (Il2CppObject *)this,
                  (intptr_t)Method_StonePurchaseMenu_OnSelectBuyItem__,
                  v32);
                if ( !ItemListViewManager )
                  goto LABEL_22;
                ItemListViewManager->fields.callbackFunc = v31;
                sub_1B00C70(
                  (ServantStatusBattleListViewItem_o *)&ItemListViewManager->fields.callbackFunc,
                  (int32_t)v31,
                  v33,
                  v34);
                StonePurchaseListViewManager__SetMode_34123356(ItemListViewManager, 1, v35);
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v37 = (AgeVerificationMenu_CallbackFunc_o *)sub_1B00F18(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v37,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  v38);
                if ( !ageVerificationMenu )
                  goto LABEL_22;
                AgeVerificationMenu__Open(ageVerificationMenu, v37, v39);
              }
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( gameObject )
              {
                *((_BYTE *)gameObject + 33) = 1;
                v40 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
    sub_1B00F28(gameObject, v19);
  }
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

  if ( (byte_48E04E2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&PurchaseLogic_ProductFinishedAction_TypeInfo, v6);
    sub_1B00CCC(&PurchaseBehaviour_TypeInfo, v7);
    sub_1B00CCC(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176, v8);
    byte_48E04E2 = 1;
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
                                                              (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
          v14 = (PurchaseLogic_ProductFinishedAction_o *)sub_1B00F18(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v14, 0LL);
            return;
          }
        }
LABEL_22:
        sub_1B00F28(ItemListViewManager, method);
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
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  struct StonePurchaseNotificationMenu_o *v24; // x20
  System_Action_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x5
  int32_t v29; // w1
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  System_Action_o *v33; // x23
  StonePurchaseNotificationMenu_o *v34; // x0
  System_Action_o *v35; // x2
  int32_t v36; // w3
  int32_t v37; // w4
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v41; // x21
  ErrorDialog_ClickDelegate_o *v42; // x22
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  struct StonePurchaseNotificationMenu_o *v45; // x20
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  SpendLimitMenu_o *spendLimitMenu; // x20
  SpendLimitMenu_CallbackFunc_o *v51; // x21
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  struct System_Action_o *refreshCallbackFunc; // x8
  System_Nullable_Vector2__o v61; // 0:x6.12

  if ( (byte_48E04E4 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B00CCC(&SpendLimitMenu_CallbackFunc_TypeInfo, v11);
    sub_1B00CCC(&ErrorDialog_ClickDelegate_TypeInfo, v12);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v13);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v14);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v15);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v16);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v17);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndSpendLimit__, v18);
    sub_1B00CCC(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176, v19);
    sub_1B00CCC(&StringLiteral_12096/*"STONE_PURCHASE_RESULT_WAIT"*/, v20);
    byte_48E04E4 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v30 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v31 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 8, 0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v33 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_51;
      v29 = 1;
      v34 = stonePurchaseNotificationMenu;
      v35 = v33;
      v36 = freeStoneNum;
      v37 = chargeStoneNum;
      goto LABEL_47;
    case 3:
    case 15:
    case 16:
      goto LABEL_48;
    case 4:
      v38 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v39 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v38, v38[4]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12096/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v42 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v42,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_51;
      *(_QWORD *)&v61.fields.hasValue = 0LL;
      v61.fields.value.fields.y = 0.0;
      ErrorDialog__Open_37453024(warningDialog, 0LL, v41, v42, 1, -1.0, 1, v61, 0LL);
      goto LABEL_48;
    case 5:
      v43 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v43 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v44 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v43, v43[4]);
      OverwriteAssetSoundName__PlaySystemSe(v44, 1, 0LL);
      v45 = this->fields.stonePurchaseNotificationMenu;
      v25 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v45 )
        goto LABEL_51;
      v34 = v45;
      v29 = 0;
      goto LABEL_46;
    case 7:
      v48 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v48 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v49 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v48, v48[4]);
      OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0LL);
      v24 = this->fields.stonePurchaseNotificationMenu;
      v25 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v24 )
        goto LABEL_51;
      v29 = 4;
      goto LABEL_45;
    case 8:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v21);
      goto LABEL_48;
    case 9:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v51 = (SpendLimitMenu_CallbackFunc_o *)sub_1B00F18(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v51, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v52);
      if ( !spendLimitMenu )
        goto LABEL_51;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v51, v53);
      goto LABEL_48;
    case 10:
    case 11:
      v22 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v23 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0LL);
      v24 = this->fields.stonePurchaseNotificationMenu;
      v25 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v24 )
        goto LABEL_51;
      v29 = 5;
      goto LABEL_45;
    case 12:
      v54 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v54 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v55 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v54, v54[4]);
      OverwriteAssetSoundName__PlaySystemSe(v55, 2, 0LL);
      v24 = this->fields.stonePurchaseNotificationMenu;
      v25 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v24 )
        goto LABEL_51;
      v29 = 6;
      goto LABEL_45;
    case 13:
      v56 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v56 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v57 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v56, v56[4]);
      OverwriteAssetSoundName__PlaySystemSe(v57, 2, 0LL);
      v24 = this->fields.stonePurchaseNotificationMenu;
      v25 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v24 )
        goto LABEL_51;
      v29 = 7;
      goto LABEL_45;
    case 14:
      v58 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v58 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v59 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v58, v58[4]);
      OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0LL);
      v24 = this->fields.stonePurchaseNotificationMenu;
      v25 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v24 )
        goto LABEL_51;
      v29 = 8;
      goto LABEL_45;
    default:
      v46 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176 + 83) & 2) != 0 )
        v46 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm___74686176);
      v47 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v46, v46[4]);
      OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0LL);
      v24 = this->fields.stonePurchaseNotificationMenu;
      v25 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v24 )
LABEL_51:
        sub_1B00F28(v26, v27);
      v29 = 3;
LABEL_45:
      v34 = v24;
LABEL_46:
      v35 = v25;
      v36 = 0;
      v37 = 0;
LABEL_47:
      StonePurchaseNotificationMenu__Open(v34, v29, v35, v36, v37, v28);
LABEL_48:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
          refreshCallbackFunc->fields.original_method_info,
          *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_34135488(
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
  const MethodInfo *v27; // x5
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

  if ( (byte_48E04E5 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B00CCC(&SpendLimitMenu_CallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v9);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v10);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v11);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v12);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v13);
    sub_1B00CCC(&Method_StonePurchaseMenu_EndSpendLimit__, v14);
    sub_1B00CCC(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__, v15);
    sub_1B00CCC(&StringLiteral_12096/*"STONE_PURCHASE_RESULT_WAIT"*/, v16);
    byte_48E04E5 = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      v18 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 8, 0LL);
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0LL);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v23 = TotalAddedChargeStoneNum;
      v24 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
        v33 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v34 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12096/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v37 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v37,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_35;
      *(_QWORD *)&v52.fields.hasValue = 0LL;
      v52.fields.value.fields.y = 0.0;
      ErrorDialog__Open_37453024(warningDialog, 0LL, v36, v37, 1, -1.0, 1, v52, 0LL);
      goto LABEL_32;
    case 4:
      v38 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v39 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v38, v38[4]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0LL);
      v40 = this->fields.stonePurchaseNotificationMenu;
      v41 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v40 )
        goto LABEL_35;
      v29 = v40;
      v28 = 0;
      goto LABEL_28;
    case 6:
      v45 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v46 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v45, v45[4]);
      OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0LL);
      v44 = this->fields.stonePurchaseNotificationMenu;
      v41 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v44 )
        goto LABEL_35;
      v28 = 4;
      goto LABEL_27;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v17);
      goto LABEL_32;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v48 = (SpendLimitMenu_CallbackFunc_o *)sub_1B00F18(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v48, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, v49);
      if ( !spendLimitMenu )
        goto LABEL_35;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v48, v50);
      goto LABEL_32;
    default:
      v42 = Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__;
      if ( (*((_BYTE *)Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__ + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1B00CE4(Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
      v43 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0LL);
      v44 = this->fields.stonePurchaseNotificationMenu;
      v41 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v44 )
LABEL_35:
        sub_1B00F28(v25, v26);
      v28 = 3;
LABEL_27:
      v29 = v44;
LABEL_28:
      v30 = v41;
      v31 = 0;
      v32 = 0;
LABEL_29:
      StonePurchaseNotificationMenu__Open(v29, v28, v30, v31, v32, v27);
LABEL_32:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
          refreshCallbackFunc->fields.original_method_info,
          *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu___Open_b__19_0(
        StonePurchaseMenu_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_48E04EE & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_48E04EE = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_1B00F28(NumberFormat, v7);
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

  if ( (byte_48E04DC & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_48E04DC = 1;
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
    v9 = sub_1B3C1BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B011E8(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_48E04EC & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8725/*"MainPanel/BaseView/CloseButton"*/, method);
    byte_48E04EC = 1;
  }
  return (System_String_o *)StringLiteral_8725/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_48E04DD & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_48E04DD = 1;
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
    v9 = sub_1B3C1BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B011E8(v8);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1948D94;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1948D4C;
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
  if ( (byte_48E04EF & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_48E04EF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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