void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42AEDC3 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AEDC3 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42AEDB7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42AEDB7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_42AEDBC & 1) == 0 )
  {
    sub_B52984(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_42AEDBC = 1;
  }
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v5 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B52A54(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            Method_StonePurchaseMenu_OnSelectBuyItem__,
            0LL),
          !ItemListViewManager) )
    {
      sub_B52A5C(buyItemMask, method);
    }
    ItemListViewManager->fields.callbackFunc = v5;
    sub_B52920(
      (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    StonePurchaseListViewManager__SetMode_23077820(ItemListViewManager, 1, v12);
    this->fields.state = 2;
  }
}


void __fastcall StonePurchaseMenu__Callback(StonePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  StonePurchaseMenu_CallbackFunc_o *v9; // x20
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    StonePurchaseMenu_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall StonePurchaseMenu__Close(
        StonePurchaseMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42AEDB6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_OnMoveEnd__);
    byte_42AEDB6 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
  }
  else if ( callback )
  {
    System_Action__Invoke(callback, 0LL);
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
    sub_B52A5C(0LL, method);
  StonePurchaseNotificationMenu__Close_23093484(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_B52A5C(0LL, method);
  StonePurchaseNotificationMenu__Close_23093484(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_B52A5C(0LL, method);
  StonePurchaseNotificationMenu__Close_23093484(stonePurchaseNotificationMenu, 0LL, v2);
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
      sub_B52A5C(0LL, isDecide);
    ErrorDialog__Close(warningDialog, 0LL);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void __fastcall StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_42AEDB9 & 1) == 0 )
  {
    sub_B52984(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_42AEDB9 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close(spendLimitMenu, 0LL),
        ItemListViewManager = this->fields.ItemListViewManager,
        v5 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B52A54(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_StonePurchaseMenu_OnSelectBuyItem__,
          0LL),
        !ItemListViewManager) )
  {
    sub_B52A5C(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  StonePurchaseListViewManager__SetMode_23077820(ItemListViewManager, 1, v12);
  this->fields.state = 2;
}


void __fastcall StonePurchaseMenu__Init(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  UILabel_o *stoneDataLabel; // x0

  if ( (byte_42AEDB4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEDB4 = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_B52A5C(stoneDataLabel, v15);
  }
  ListViewManager__DestroyList((ListViewManager_o *)stoneDataLabel, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42AEDC0 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEDC0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    StonePurchaseMenu__Callback(this, 0, v3);
  }
}


void __fastcall StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  System_String_o *WebViewAddress_25756092; // x20
  System_String_o *v4; // x21
  System_Action_o *v5; // x22

  if ( (byte_42AEDC1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_OnEndWebView__);
    sub_B52984(&WebViewManager_TypeInfo);
    sub_B52984(&StringLiteral_15473/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/);
    byte_42AEDC1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    WebViewAddress_25756092 = NetworkManager__getWebViewAddress_25756092(8, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_15473/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(v4, WebViewAddress_25756092, v5, 0LL);
  }
}


void __fastcall StonePurchaseMenu__OnEndWebView(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall StonePurchaseMenu__OnMoveEnd(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2

  if ( (byte_42AEDBE & 1) == 0 )
  {
    sub_B52984(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_42AEDBE = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v15 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B52A54(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_OnSelectBuyItem__,
        0LL);
      if ( !ItemListViewManager )
        sub_B52A5C(v16, v17);
      ItemListViewManager->fields.callbackFunc = v15;
      sub_B52920(
        (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
        (System_Int32_array **)v15,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      StonePurchaseListViewManager__SetMode_23077820(ItemListViewManager, 1, v24);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
      v12 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
        System_Action__Invoke(v12, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_42AEDBD & 1) == 0 )
  {
    sub_B52984(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    byte_42AEDBD = 1;
  }
  state = this->fields.state;
  if ( state == 9 )
  {
    ageVerificationMenu = this->fields.ageVerificationMenu;
    this->fields.state = 2;
    if ( ageVerificationMenu )
    {
      AgeVerificationMenu__Close(ageVerificationMenu, 0LL);
      if ( result < 1 )
      {
        StonePurchaseMenu__Callback(this, 0, v7);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v9 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B52A54(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_OnSelectBuyItem__,
        0LL);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v9;
        sub_B52920(
          (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
          (System_Int32_array **)v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        StonePurchaseListViewManager__SetMode_23077820(ItemListViewManager, 1, v16);
        return;
      }
    }
    sub_B52A5C(ageVerificationMenu, *(_QWORD *)&result);
  }
  if ( state == 7 )
  {
    this->fields.state = 9;
    this->fields.ageVerificationResult = result;
  }
}


void __fastcall StonePurchaseMenu__OnSelectBuyItem(StonePurchaseMenu_o *this, int32_t n, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_42AEDBF & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEDBF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.selectItemNum = n;
    StonePurchaseMenu__SelectBuyBankItemConfirm(this, v5);
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
      sub_B52A5C(0LL, isDecide);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UILabel_o *stoneDataLabel; // x20
  int32_t v22; // w21
  UnityEngine_GameObject_o *v23; // x20
  System_Action_int__o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v37; // x21
  System_Action_o *v38; // x20

  if ( (byte_42AEDB5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&StonePurchaseListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&PurchaseBehaviour_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_OnMoveEnd__);
    sub_B52984(&Method_StonePurchaseMenu_OnSelectAgeVerification__);
    sub_B52984(&Method_StonePurchaseMenu_OnSelectBuyItem__);
    sub_B52984(&Method_StonePurchaseMenu__Open_b__19_0__);
    byte_42AEDB5 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
        (System_Int32_array **)refreshCallback,
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
          v22 = *((_DWORD *)gameObject + 42);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = LocalizationManager__GetNumberFormat(v22, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v24 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
            System_Action_int____ctor(
              v24,
              (Il2CppObject *)this,
              Method_StonePurchaseMenu__Open_b__19_0__,
              (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
            StoneCountRefreshComponent__AttachToGameObject(v23, v24, 1, v25);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v26);
              if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
              }
              PurchaseBehaviour__Activate(0LL);
              if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
              }
              if ( AgeVerificationMenu__IsConcent(0LL) )
              {
                this->fields.state = 2;
                ItemListViewManager = this->fields.ItemListViewManager;
                v28 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B52A54(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v28,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectBuyItem__,
                  0LL);
                if ( ItemListViewManager )
                {
                  ItemListViewManager->fields.callbackFunc = v28;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
                    (System_Int32_array **)v28,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34);
                  StonePurchaseListViewManager__SetMode_23077820(ItemListViewManager, 1, v35);
LABEL_23:
                  v38 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(v38, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
                  return;
                }
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v37 = (AgeVerificationMenu_CallbackFunc_o *)sub_B52A54(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v37,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  0LL);
                if ( ageVerificationMenu )
                {
                  AgeVerificationMenu__Open(ageVerificationMenu, v37, 0LL);
                  goto LABEL_23;
                }
              }
            }
          }
        }
      }
    }
    sub_B52A5C(gameObject, v8);
  }
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

  if ( (byte_42AEDB8 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PurchaseLogic_ProductFinishedAction_TypeInfo);
    sub_B52984(&PurchaseBehaviour_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__);
    byte_42AEDB8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    ItemListViewManager = this->fields.ItemListViewManager;
    if ( !ItemListViewManager )
      goto LABEL_26;
    Item = StonePurchaseListViewManager__GetItem(ItemListViewManager, this->fields.selectItemNum, v2);
    ItemListViewManager = (StonePurchaseListViewManager_o *)this->fields.buyItemMask;
    this->fields.state = 5;
    if ( !ItemListViewManager )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ItemListViewManager, 1, 0LL);
    ItemListViewManager = (StonePurchaseListViewManager_o *)this->fields.buyItemMask;
    if ( !ItemListViewManager )
      goto LABEL_26;
    ItemListViewManager = (StonePurchaseListViewManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)ItemListViewManager,
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v6 = ItemListViewManager;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    }
    if ( !v6 )
      goto LABEL_26;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_ItemDragEnd.method)(
      v6,
      v6->klass->vtable._9_SetSortKind.methodPtr,
      ManagerConfig_TypeInfo->static_fields->MINIMUM_ENABLE_ALPHA);
    TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 1.0, 0LL);
    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    }
    if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
    {
      if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      }
      Instance = (UnityEngine_Object_o *)PurchaseBehaviour__GetInstance(0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ItemListViewManager = (StonePurchaseListViewManager_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
      if ( ((unsigned __int8)ItemListViewManager & 1) != 0 )
      {
        if ( Item )
        {
          bankShop = Item->fields.bankShop;
          v9 = (PurchaseLogic_ProductFinishedAction_o *)sub_B52A54(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v9,
            (Il2CppObject *)this,
            Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v9, 0LL);
            return;
          }
        }
LABEL_26:
        sub_B52A5C(ItemListViewManager, method);
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
        const MethodInfo *method)
{
  const MethodInfo *v11; // x1
  struct StonePurchaseNotificationMenu_o *v12; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x5
  int32_t v17; // w1
  SpendLimitMenu_o *spendLimitMenu; // x20
  SpendLimitMenu_CallbackFunc_o *v19; // x21
  struct StonePurchaseNotificationMenu_o *v20; // x20
  StonePurchaseNotificationMenu_o *v21; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v23; // x21
  ErrorDialog_ClickDelegate_o *v24; // x22
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  System_Action_o *v26; // x23
  System_Action_o *v27; // x2
  int32_t v28; // w3
  int32_t v29; // w4
  System_Action_o *refreshCallbackFunc; // x0
  System_Nullable_Vector2__o v31; // 0:x6.12

  if ( (byte_42AEDBA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SpendLimitMenu_CallbackFunc_TypeInfo);
    sub_B52984(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    sub_B52984(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_B52984(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    sub_B52984(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    sub_B52984(&Method_StonePurchaseMenu_EndSpendLimit__);
    sub_B52984(&StringLiteral_12483/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_42AEDBA = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v26 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_61;
      v17 = 1;
      v21 = stonePurchaseNotificationMenu;
      v27 = v26;
      v28 = freeStoneNum;
      v29 = chargeStoneNum;
      goto LABEL_57;
    case 3:
    case 15:
    case 16:
      goto LABEL_58;
    case 4:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v24 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_61;
      v31.fields.value = 0LL;
      *(_DWORD *)&v31.fields.has_value = 0;
      ErrorDialog__Open_29479708(warningDialog, 0LL, v23, v24, 1, -1.0, 1, v31, 0LL);
      goto LABEL_58;
    case 5:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v20 = this->fields.stonePurchaseNotificationMenu;
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v20 )
        goto LABEL_61;
      v21 = v20;
      v17 = 0;
      goto LABEL_56;
    case 7:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v12 = this->fields.stonePurchaseNotificationMenu;
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v12 )
        goto LABEL_61;
      v17 = 4;
      goto LABEL_55;
    case 8:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v11);
      goto LABEL_58;
    case 9:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v19 = (SpendLimitMenu_CallbackFunc_o *)sub_B52A54(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v19, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL);
      if ( !spendLimitMenu )
        goto LABEL_61;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v19, 0LL);
      goto LABEL_58;
    case 10:
    case 11:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v12 = this->fields.stonePurchaseNotificationMenu;
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v12 )
        goto LABEL_61;
      v17 = 5;
      goto LABEL_55;
    case 12:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v12 = this->fields.stonePurchaseNotificationMenu;
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v12 )
        goto LABEL_61;
      v17 = 6;
      goto LABEL_55;
    case 13:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v12 = this->fields.stonePurchaseNotificationMenu;
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v12 )
        goto LABEL_61;
      v17 = 7;
      goto LABEL_55;
    case 14:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v12 = this->fields.stonePurchaseNotificationMenu;
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v12 )
        goto LABEL_61;
      v17 = 8;
      goto LABEL_55;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v12 = this->fields.stonePurchaseNotificationMenu;
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v12 )
LABEL_61:
        sub_B52A5C(v14, v15);
      v17 = 3;
LABEL_55:
      v21 = v12;
LABEL_56:
      v27 = v13;
      v28 = 0;
      v29 = 0;
LABEL_57:
      StonePurchaseNotificationMenu__Open(v21, v17, v27, v28, v29, v16);
LABEL_58:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        System_Action__Invoke(refreshCallbackFunc, 0LL);
      return;
  }
}


void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_23089940(
        StonePurchaseMenu_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  struct StonePurchaseNotificationMenu_o *v8; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  int32_t v13; // w1
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v15; // x21
  ErrorDialog_ClickDelegate_o *v16; // x22
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  int32_t v20; // w21
  System_Action_o *v21; // x23
  StonePurchaseNotificationMenu_o *v22; // x0
  System_Action_o *v23; // x2
  int32_t v24; // w3
  int32_t v25; // w4
  struct StonePurchaseNotificationMenu_o *v26; // x20
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v28; // x22
  System_Action_o *refreshCallbackFunc; // x0
  System_Nullable_Vector2__o v30; // 0:x6.12

  if ( (byte_42AEDBB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SpendLimitMenu_CallbackFunc_TypeInfo);
    sub_B52984(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&PurchaseByBank_Legacy_Request_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__);
    sub_B52984(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__);
    sub_B52984(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__);
    sub_B52984(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__);
    sub_B52984(&Method_StonePurchaseMenu_EndSpendLimit__);
    sub_B52984(&StringLiteral_12483/*"STONE_PURCHASE_RESULT_WAIT"*/);
    byte_42AEDBB = 1;
  }
  TweenAlpha__Begin(this->fields.buyItemMask, 0.2, 0.0, 0LL);
  switch ( result )
  {
    case 2:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      if ( (BYTE3(PurchaseByBank_Legacy_Request_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseByBank_Legacy_Request_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseByBank_Legacy_Request_TypeInfo);
      }
      TotalAddedFreeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedFreeStoneNum(0LL);
      TotalAddedChargeStoneNum = PurchaseByBank_Legacy_Request__GetTotalAddedChargeStoneNum(0LL);
      stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
      v20 = TotalAddedChargeStoneNum;
      v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_44;
      v13 = 1;
      v22 = stonePurchaseNotificationMenu;
      v23 = v21;
      v24 = TotalAddedFreeStoneNum;
      v25 = v20;
      goto LABEL_40;
    case 3:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.state = 14;
      warningDialog = this->fields.warningDialog;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v16 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v16,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_44;
      v30.fields.value = 0LL;
      *(_DWORD *)&v30.fields.has_value = 0;
      ErrorDialog__Open_29479708(warningDialog, 0LL, v15, v16, 1, -1.0, 1, v30, 0LL);
      goto LABEL_41;
    case 4:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v26 = this->fields.stonePurchaseNotificationMenu;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v26 )
        goto LABEL_44;
      v22 = v26;
      v13 = 0;
      goto LABEL_39;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v8 = this->fields.stonePurchaseNotificationMenu;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v8 )
        goto LABEL_44;
      v13 = 4;
      goto LABEL_38;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v7);
      goto LABEL_41;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v28 = (SpendLimitMenu_CallbackFunc_o *)sub_B52A54(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v28, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL);
      if ( !spendLimitMenu )
        goto LABEL_44;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v28, 0LL);
      goto LABEL_41;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v8 = this->fields.stonePurchaseNotificationMenu;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v8 )
LABEL_44:
        sub_B52A5C(v10, v11);
      v13 = 3;
LABEL_38:
      v22 = v8;
LABEL_39:
      v23 = v9;
      v24 = 0;
      v25 = 0;
LABEL_40:
      StonePurchaseNotificationMenu__Open(v22, v13, v23, v24, v25, v12);
LABEL_41:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        System_Action__Invoke(refreshCallbackFunc, 0LL);
      return;
  }
}


void __fastcall StonePurchaseMenu___Open_b__19_0(
        StonePurchaseMenu_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_42AEDC4 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42AEDC4 = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_B52A5C(NumberFormat, v7);
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

  if ( (byte_42AEDB2 & 1) == 0 )
  {
    sub_B52984(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_42AEDB2 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (StonePurchaseMenu_o *)sub_B52D50(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42AEDC2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8952/*"MainPanel/BaseView/CloseButton"*/);
    byte_42AEDC2 = 1;
  }
  return (System_String_o *)StringLiteral_8952/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_42AEDB3 & 1) == 0 )
  {
    sub_B52984(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    byte_42AEDB3 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (StonePurchaseMenu_o *)sub_B52D50(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall StonePurchaseMenu_CallbackFunc__BeginInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_42ADD74 & 1) == 0 )
  {
    sub_B52984(&StonePurchaseMenu_Result_TypeInfo);
    byte_42ADD74 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu_CallbackFunc__Invoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  StonePurchaseMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  StonePurchaseMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  StonePurchaseMenu_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (StonePurchaseMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}