void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4188CDA & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4188CDA = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4188CCE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, method);
    byte_4188CCE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4188CD3 & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_4188CD3 = 1;
  }
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B2C42C(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_StonePurchaseMenu_OnSelectBuyItem__,
            0LL),
          !ItemListViewManager) )
    {
      sub_B2C434(buyItemMask, method);
    }
    ItemListViewManager->fields.callbackFunc = v6;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    StonePurchaseListViewManager__SetMode_27106252(ItemListViewManager, 1, v13);
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
  sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4188CCD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_StonePurchaseMenu_OnMoveEnd__, v10);
    byte_4188CCD = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x0
  const MethodInfo *v4; // x1

  stonePurchaseNotificationMenu = this->fields.stonePurchaseNotificationMenu;
  if ( !stonePurchaseNotificationMenu )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
      sub_B2C434(0LL, isDecide);
    ErrorDialog__Close(warningDialog, 0LL);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void __fastcall StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4188CD0 & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_4188CD0 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close(spendLimitMenu, 0LL),
        ItemListViewManager = this->fields.ItemListViewManager,
        v6 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B2C42C(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_StonePurchaseMenu_OnSelectBuyItem__,
          0LL),
        !ItemListViewManager) )
  {
    sub_B2C434(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  StonePurchaseListViewManager__SetMode_27106252(ItemListViewManager, 1, v13);
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

  if ( (byte_4188CCB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188CCB = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_B2C434(stoneDataLabel, v15);
  }
  ListViewManager__DestroyList((ListViewManager_o *)stoneDataLabel, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4188CD7 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188CD7 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *WebViewAddress_26285648; // x20
  System_String_o *v10; // x21
  System_Action_o *v11; // x22

  if ( (byte_4188CD8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_StonePurchaseMenu_OnEndWebView__, v6);
    sub_B2C35C(&WebViewManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_15368/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, v8);
    byte_4188CD8 = 1;
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
    WebViewAddress_26285648 = NetworkManager__getWebViewAddress_26285648(8, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15368/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(v10, WebViewAddress_26285648, v11, 0LL);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v13; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4188CD5 & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_StonePurchaseMenu_OnSelectBuyItem__, v4);
    byte_4188CD5 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v16 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B2C42C(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_OnSelectBuyItem__,
        0LL);
      if ( !ItemListViewManager )
        sub_B2C434(v17, v18);
      ItemListViewManager->fields.callbackFunc = v16;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
        (System_Int32_array **)v16,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      StonePurchaseListViewManager__SetMode_27106252(ItemListViewManager, 1, v25);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
      v13 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_B2C2F8(p_closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
        System_Action__Invoke(v13, 0LL);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4188CD4 & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5);
    byte_4188CD4 = 1;
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
        StonePurchaseMenu__Callback(this, 0, v8);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v10 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B2C42C(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_OnSelectBuyItem__,
        0LL);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v10;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
          (System_Int32_array **)v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        StonePurchaseListViewManager__SetMode_27106252(ItemListViewManager, 1, v17);
        return;
      }
    }
    sub_B2C434(ageVerificationMenu, *(_QWORD *)&result);
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
  const MethodInfo *v5; // x1

  if ( (byte_4188CD6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&n);
    byte_4188CD6 = 1;
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
      sub_B2C434(0LL, isDecide);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UILabel_o *stoneDataLabel; // x20
  int32_t v33; // w21
  UnityEngine_GameObject_o *v34; // x20
  System_Action_int__o *v35; // x21
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v48; // x21
  System_Action_o *v49; // x20

  if ( (byte_4188CCC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, callback);
    sub_B2C35C(&System_Action_int__TypeInfo, v7);
    sub_B2C35C(&System_Action_TypeInfo, v8);
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v9);
    sub_B2C35C(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, v10);
    sub_B2C35C(&AgeVerificationMenu_CallbackFunc_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, v13);
    sub_B2C35C(&Method_StonePurchaseMenu_OnMoveEnd__, v14);
    sub_B2C35C(&Method_StonePurchaseMenu_OnSelectAgeVerification__, v15);
    sub_B2C35C(&Method_StonePurchaseMenu_OnSelectBuyItem__, v16);
    sub_B2C35C(&Method_StonePurchaseMenu__Open_b__19_0__, v17);
    byte_4188CCC = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
        (System_Int32_array **)refreshCallback,
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
          v33 = *((_DWORD *)gameObject + 42);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = LocalizationManager__GetNumberFormat(v33, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v35 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
            System_Action_int____ctor(
              v35,
              (Il2CppObject *)this,
              Method_StonePurchaseMenu__Open_b__19_0__,
              (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
            StoneCountRefreshComponent__AttachToGameObject(v34, v35, 1, v36);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v37);
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
                v39 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B2C42C(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v39,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectBuyItem__,
                  0LL);
                if ( ItemListViewManager )
                {
                  ItemListViewManager->fields.callbackFunc = v39;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
                    (System_Int32_array **)v39,
                    v40,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45);
                  StonePurchaseListViewManager__SetMode_27106252(ItemListViewManager, 1, v46);
LABEL_23:
                  v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(v49, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
                  return;
                }
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v48 = (AgeVerificationMenu_CallbackFunc_o *)sub_B2C42C(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v48,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  0LL);
                if ( ageVerificationMenu )
                {
                  AgeVerificationMenu__Open(ageVerificationMenu, v48, 0LL);
                  goto LABEL_23;
                }
              }
            }
          }
        }
      }
    }
    sub_B2C434(gameObject, v19);
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

  if ( (byte_4188CCF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&PurchaseLogic_ProductFinishedAction_TypeInfo, v6);
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, v7);
    sub_B2C35C(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__, v8);
    byte_4188CCF = 1;
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
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v11 = ItemListViewManager;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    }
    if ( !v11 )
      goto LABEL_26;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, Il2CppMethodPointer, float))v11->klass->vtable._8_ItemDragEnd.method)(
      v11,
      v11->klass->vtable._9_SetSortKind.methodPtr,
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
          v14 = (PurchaseLogic_ProductFinishedAction_o *)sub_B2C42C(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v14,
            (Il2CppObject *)this,
            Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v14, 0LL);
            return;
          }
        }
LABEL_26:
        sub_B2C434(ItemListViewManager, method);
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
  struct StonePurchaseNotificationMenu_o *v22; // x20
  System_Action_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w1
  SpendLimitMenu_o *spendLimitMenu; // x20
  SpendLimitMenu_CallbackFunc_o *v28; // x21
  struct StonePurchaseNotificationMenu_o *v29; // x20
  StonePurchaseNotificationMenu_o *v30; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v32; // x21
  ErrorDialog_ClickDelegate_o *v33; // x22
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  System_Action_o *v35; // x23
  System_Action_o *v36; // x2
  int32_t v37; // w3
  int32_t v38; // w4
  System_Action_o *refreshCallbackFunc; // x0
  System_Nullable_Vector2__o v40; // 0:x6.12

  if ( (byte_4188CD1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&SpendLimitMenu_CallbackFunc_TypeInfo, v11);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&SoundManager_TypeInfo, v14);
    sub_B2C35C(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v15);
    sub_B2C35C(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v16);
    sub_B2C35C(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v17);
    sub_B2C35C(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v18);
    sub_B2C35C(&Method_StonePurchaseMenu_EndSpendLimit__, v19);
    sub_B2C35C(&StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/, v20);
    byte_4188CD1 = 1;
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
      v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v35, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_61;
      v26 = 1;
      v30 = stonePurchaseNotificationMenu;
      v36 = v35;
      v37 = freeStoneNum;
      v38 = chargeStoneNum;
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
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v33 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v33,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_61;
      v40.fields.value = 0LL;
      *(_DWORD *)&v40.fields.has_value = 0;
      ErrorDialog__Open_29557120(warningDialog, 0LL, v32, v33, 1, -1.0, 1, v40, 0LL);
      goto LABEL_58;
    case 5:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v29 = this->fields.stonePurchaseNotificationMenu;
      v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v29 )
        goto LABEL_61;
      v30 = v29;
      v26 = 0;
      goto LABEL_56;
    case 7:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v22 = this->fields.stonePurchaseNotificationMenu;
      v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v22 )
        goto LABEL_61;
      v26 = 4;
      goto LABEL_55;
    case 8:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v21);
      goto LABEL_58;
    case 9:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v28 = (SpendLimitMenu_CallbackFunc_o *)sub_B2C42C(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v28, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL);
      if ( !spendLimitMenu )
        goto LABEL_61;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v28, 0LL);
      goto LABEL_58;
    case 10:
    case 11:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v22 = this->fields.stonePurchaseNotificationMenu;
      v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v22 )
        goto LABEL_61;
      v26 = 5;
      goto LABEL_55;
    case 12:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v22 = this->fields.stonePurchaseNotificationMenu;
      v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v22 )
        goto LABEL_61;
      v26 = 6;
      goto LABEL_55;
    case 13:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v22 = this->fields.stonePurchaseNotificationMenu;
      v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v22 )
        goto LABEL_61;
      v26 = 7;
      goto LABEL_55;
    case 14:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v22 = this->fields.stonePurchaseNotificationMenu;
      v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v22 )
        goto LABEL_61;
      v26 = 8;
      goto LABEL_55;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v22 = this->fields.stonePurchaseNotificationMenu;
      v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v22 )
LABEL_61:
        sub_B2C434(v24, v25);
      v26 = 3;
LABEL_55:
      v30 = v22;
LABEL_56:
      v36 = v23;
      v37 = 0;
      v38 = 0;
LABEL_57:
      StonePurchaseNotificationMenu__Open(v30, v26, v36, v37, v38, 0LL);
LABEL_58:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        System_Action__Invoke(refreshCallbackFunc, 0LL);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_27116144(
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
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  struct StonePurchaseNotificationMenu_o *v19; // x20
  System_Action_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w1
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v25; // x21
  ErrorDialog_ClickDelegate_o *v26; // x22
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  int32_t v30; // w21
  System_Action_o *v31; // x23
  StonePurchaseNotificationMenu_o *v32; // x0
  System_Action_o *v33; // x2
  int32_t v34; // w3
  int32_t v35; // w4
  struct StonePurchaseNotificationMenu_o *v36; // x20
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v38; // x22
  System_Action_o *refreshCallbackFunc; // x0
  System_Nullable_Vector2__o v40; // 0:x6.12

  if ( (byte_4188CD2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&SpendLimitMenu_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&PurchaseByBank_Legacy_Request_TypeInfo, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    sub_B2C35C(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v12);
    sub_B2C35C(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v13);
    sub_B2C35C(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v14);
    sub_B2C35C(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v15);
    sub_B2C35C(&Method_StonePurchaseMenu_EndSpendLimit__, v16);
    sub_B2C35C(&StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/, v17);
    byte_4188CD2 = 1;
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
      v30 = TotalAddedChargeStoneNum;
      v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_44;
      v23 = 1;
      v32 = stonePurchaseNotificationMenu;
      v33 = v31;
      v34 = TotalAddedFreeStoneNum;
      v35 = v30;
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
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12394/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v26 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v26,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_44;
      v40.fields.value = 0LL;
      *(_DWORD *)&v40.fields.has_value = 0;
      ErrorDialog__Open_29557120(warningDialog, 0LL, v25, v26, 1, -1.0, 1, v40, 0LL);
      goto LABEL_41;
    case 4:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v36 = this->fields.stonePurchaseNotificationMenu;
      v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v36 )
        goto LABEL_44;
      v32 = v36;
      v23 = 0;
      goto LABEL_39;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v19 = this->fields.stonePurchaseNotificationMenu;
      v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v19 )
        goto LABEL_44;
      v23 = 4;
      goto LABEL_38;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v18);
      goto LABEL_41;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v38 = (SpendLimitMenu_CallbackFunc_o *)sub_B2C42C(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v38, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL);
      if ( !spendLimitMenu )
        goto LABEL_44;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v38, 0LL);
      goto LABEL_41;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v19 = this->fields.stonePurchaseNotificationMenu;
      v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v19 )
LABEL_44:
        sub_B2C434(v21, v22);
      v23 = 3;
LABEL_38:
      v32 = v19;
LABEL_39:
      v33 = v20;
      v34 = 0;
      v35 = 0;
LABEL_40:
      StonePurchaseNotificationMenu__Open(v32, v23, v33, v34, v35, 0LL);
LABEL_41:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        System_Action__Invoke(refreshCallbackFunc, 0LL);
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

  if ( (byte_4188CDB & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4188CDB = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_B2C434(NumberFormat, v7);
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

  if ( (byte_4188CC9 & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4188CC9 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (StonePurchaseMenu_o *)sub_B2C728(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4188CD9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8898/*"MainPanel/BaseView/CloseButton"*/, method);
    byte_4188CD9 = 1;
  }
  return (System_String_o *)StringLiteral_8898/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_4188CCA & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4188CCA = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (StonePurchaseMenu_o *)sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184798 & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_4184798 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v9, v11);
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