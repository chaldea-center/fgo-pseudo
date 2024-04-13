void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7AEA & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7AEA = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7ADE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, (_DWORD)method, v2, v3);
    byte_42E7ADE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42E7AE3 & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5, v6, v7);
    byte_42E7AE3 = 1;
  }
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v10 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B5D694(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            Method_StonePurchaseMenu_OnSelectBuyItem__,
            0LL),
          !ItemListViewManager) )
    {
      sub_B5D69C(buyItemMask, method);
    }
    ItemListViewManager->fields.callbackFunc = v10;
    sub_B5D560(
      (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    StonePurchaseListViewManager__SetMode_23568116(ItemListViewManager, 1, v17);
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
  sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E7ADD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnMoveEnd__, v10, v11, v12);
    byte_42E7ADD = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, method);
  StonePurchaseNotificationMenu__Close_23583780(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_B5D69C(0LL, method);
  StonePurchaseNotificationMenu__Close_23583780(stonePurchaseNotificationMenu, 0LL, v2);
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
    sub_B5D69C(0LL, method);
  StonePurchaseNotificationMenu__Close_23583780(stonePurchaseNotificationMenu, 0LL, v2);
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
      sub_B5D69C(0LL, isDecide);
    ErrorDialog__Close(warningDialog, 0LL);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void __fastcall StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42E7AE0 & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5, v6, v7);
    byte_42E7AE0 = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close(spendLimitMenu, 0LL),
        ItemListViewManager = this->fields.ItemListViewManager,
        v10 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B5D694(StonePurchaseListViewManager_CallbackFunc_TypeInfo),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_StonePurchaseMenu_OnSelectBuyItem__,
          0LL),
        !ItemListViewManager) )
  {
    sub_B5D69C(spendLimitMenu, method);
  }
  ItemListViewManager->fields.callbackFunc = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  StonePurchaseListViewManager__SetMode_23568116(ItemListViewManager, 1, v17);
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

  if ( (byte_42E7ADB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7ADB = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneDataLabel = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_B5D69C(stoneDataLabel, v15);
  }
  ListViewManager__DestroyList((ListViewManager_o *)stoneDataLabel, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E7AE7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7AE7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    StonePurchaseMenu__Callback(this, 0, v5);
  }
}


void __fastcall StonePurchaseMenu__OnClickExplanation(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_o *WebViewAddress_26091648; // x20
  System_String_o *v24; // x21
  System_Action_o *v25; // x22

  if ( (byte_42E7AE8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnEndWebView__, v14, v15, v16);
    sub_B5D5C4(&WebViewManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15558/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, v20, v21, v22);
    byte_42E7AE8 = 1;
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
    WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(8, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15558/*"WEB_VIEW_TITLE_STONE_PURCHASE"*/, 0LL);
    v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(v24, WebViewAddress_26091648, v25, 0LL);
  }
}


void __fastcall StonePurchaseMenu__OnEndWebView(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall StonePurchaseMenu__OnMoveEnd(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t state; // w8
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v16; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2

  if ( (byte_42E7AE5 & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5, v6, v7);
    byte_42E7AE5 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v19 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B5D694(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_OnSelectBuyItem__,
        0LL);
      if ( !ItemListViewManager )
        sub_B5D69C(v20, v21);
      ItemListViewManager->fields.callbackFunc = v19;
      sub_B5D560(
        (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
        (System_Int32_array **)v19,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      StonePurchaseListViewManager__SetMode_23568116(ItemListViewManager, 1, v28);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
      v16 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_B5D560(p_closeCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
        System_Action__Invoke(v16, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t state; // w8
  AgeVerificationMenu_o *ageVerificationMenu; // x0
  const MethodInfo *v11; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_42E7AE4 & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnSelectBuyItem__, v6, v7, v8);
    byte_42E7AE4 = 1;
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
        StonePurchaseMenu__Callback(this, 0, v11);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v13 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B5D694(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_OnSelectBuyItem__,
        0LL);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v13;
        sub_B5D560(
          (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
          (System_Int32_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        StonePurchaseListViewManager__SetMode_23568116(ItemListViewManager, 1, v20);
        return;
      }
    }
    sub_B5D69C(ageVerificationMenu, *(_QWORD *)&result);
  }
  if ( state == 7 )
  {
    this->fields.state = 9;
    this->fields.ageVerificationResult = result;
  }
}


void __fastcall StonePurchaseMenu__OnSelectBuyItem(StonePurchaseMenu_o *this, int32_t n, const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_42E7AE6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, n, (_DWORD)method, v3);
    byte_42E7AE6 = 1;
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
    StonePurchaseMenu__SelectBuyBankItemConfirm(this, v6);
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
      sub_B5D69C(0LL, isDecide);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  void *gameObject; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UILabel_o *stoneDataLabel; // x20
  int32_t v55; // w21
  UnityEngine_GameObject_o *v56; // x20
  System_Action_int__o *v57; // x21
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x2
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x2
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v70; // x21
  System_Action_o *v71; // x20

  if ( (byte_42E7ADC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)callback, (_DWORD)refreshCallback, method);
    sub_B5D5C4(&System_Action_int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Action_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&AgeVerificationMenu_CallbackFunc_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnMoveEnd__, v28, v29, v30);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnSelectAgeVerification__, v31, v32, v33);
    sub_B5D5C4(&Method_StonePurchaseMenu_OnSelectBuyItem__, v34, v35, v36);
    sub_B5D5C4(&Method_StonePurchaseMenu__Open_b__19_0__, v37, v38, v39);
    byte_42E7ADC = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
        (System_Int32_array **)refreshCallback,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      gameObject = this->fields.ItemListViewManager;
      if ( gameObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
        gameObject = UserGameMaster__getSelfUserGame(0LL);
        if ( gameObject )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          v55 = *((_DWORD *)gameObject + 42);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = LocalizationManager__GetNumberFormat(v55, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v57 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
            System_Action_int____ctor(
              v57,
              (Il2CppObject *)this,
              Method_StonePurchaseMenu__Open_b__19_0__,
              (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
            StoneCountRefreshComponent__AttachToGameObject(v56, v57, 1, v58);
            gameObject = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( gameObject )
            {
              StonePurchaseListViewManager__CreateList((StonePurchaseListViewManager_o *)gameObject, 0, v59);
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
                v61 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B5D694(StonePurchaseListViewManager_CallbackFunc_TypeInfo);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v61,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectBuyItem__,
                  0LL);
                if ( ItemListViewManager )
                {
                  ItemListViewManager->fields.callbackFunc = v61;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
                    (System_Int32_array **)v61,
                    v62,
                    v63,
                    v64,
                    v65,
                    v66,
                    v67);
                  StonePurchaseListViewManager__SetMode_23568116(ItemListViewManager, 1, v68);
LABEL_23:
                  v71 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(v71, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v71, 0, 0LL);
                  return;
                }
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v70 = (AgeVerificationMenu_CallbackFunc_o *)sub_B5D694(AgeVerificationMenu_CallbackFunc_TypeInfo);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v70,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  0LL);
                if ( ageVerificationMenu )
                {
                  AgeVerificationMenu__Open(ageVerificationMenu, v70, 0LL);
                  goto LABEL_23;
                }
              }
            }
          }
        }
      }
    }
    sub_B5D69C(gameObject, v41);
  }
}


void __fastcall StonePurchaseMenu__SelectBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  StonePurchaseListViewManager_o *ItemListViewManager; // x0
  StonePurchaseListViewItem_o *Item; // x20
  StonePurchaseListViewManager_o *v22; // x21
  UnityEngine_Object_o *Instance; // x21
  BankShopEntity_o *bankShop; // x20
  PurchaseLogic_ProductFinishedAction_o *v25; // x22

  if ( (byte_42E7ADF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&PurchaseLogic_ProductFinishedAction_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__, v17, v18, v19);
    byte_42E7ADF = 1;
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
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    v22 = ItemListViewManager;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    }
    if ( !v22 )
      goto LABEL_26;
    ((void (__fastcall *)(StonePurchaseListViewManager_o *, Il2CppMethodPointer, float))v22->klass->vtable._8_ItemDragEnd.method)(
      v22,
      v22->klass->vtable._9_SetSortKind.methodPtr,
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
          v25 = (PurchaseLogic_ProductFinishedAction_o *)sub_B5D694(PurchaseLogic_ProductFinishedAction_TypeInfo);
          PurchaseLogic_ProductFinishedAction___ctor(
            v25,
            (Il2CppObject *)this,
            Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment((PurchaseBehaviour_o *)Instance, bankShop, v25, 0LL);
            return;
          }
        }
LABEL_26:
        sub_B5D69C(ItemListViewManager, method);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  const MethodInfo *v41; // x1
  struct StonePurchaseNotificationMenu_o *v42; // x20
  System_Action_o *v43; // x21
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x5
  int32_t v47; // w1
  SpendLimitMenu_o *spendLimitMenu; // x20
  SpendLimitMenu_CallbackFunc_o *v49; // x21
  struct StonePurchaseNotificationMenu_o *v50; // x20
  StonePurchaseNotificationMenu_o *v51; // x0
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v53; // x21
  ErrorDialog_ClickDelegate_o *v54; // x22
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  System_Action_o *v56; // x23
  System_Action_o *v57; // x2
  int32_t v58; // w3
  int32_t v59; // w4
  System_Action_o *refreshCallbackFunc; // x0
  System_Nullable_Vector2__o v61; // 0:x6.12

  if ( (byte_42E7AE1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, perMonthAmount, *(_QWORD *)&freeStoneNum);
    sub_B5D5C4(&SpendLimitMenu_CallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v23, v24, v25);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v26, v27, v28);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v29, v30, v31);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v32, v33, v34);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndSpendLimit__, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12542/*"STONE_PURCHASE_RESULT_WAIT"*/, v38, v39, v40);
    byte_42E7AE1 = 1;
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
      v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v56, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_61;
      v47 = 1;
      v51 = stonePurchaseNotificationMenu;
      v57 = v56;
      v58 = freeStoneNum;
      v59 = chargeStoneNum;
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
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12542/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v54 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v54,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_61;
      v61.fields.value = 0LL;
      *(_DWORD *)&v61.fields.has_value = 0;
      ErrorDialog__Open_30736884(warningDialog, 0LL, v53, v54, 1, -1.0, 1, v61, 0LL);
      goto LABEL_58;
    case 5:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v50 = this->fields.stonePurchaseNotificationMenu;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v50 )
        goto LABEL_61;
      v51 = v50;
      v47 = 0;
      goto LABEL_56;
    case 7:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v42 = this->fields.stonePurchaseNotificationMenu;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v42 )
        goto LABEL_61;
      v47 = 4;
      goto LABEL_55;
    case 8:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v41);
      goto LABEL_58;
    case 9:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v49 = (SpendLimitMenu_CallbackFunc_o *)sub_B5D694(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v49, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL);
      if ( !spendLimitMenu )
        goto LABEL_61;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v49, 0LL);
      goto LABEL_58;
    case 10:
    case 11:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v42 = this->fields.stonePurchaseNotificationMenu;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v42 )
        goto LABEL_61;
      v47 = 5;
      goto LABEL_55;
    case 12:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v42 = this->fields.stonePurchaseNotificationMenu;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v42 )
        goto LABEL_61;
      v47 = 6;
      goto LABEL_55;
    case 13:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v42 = this->fields.stonePurchaseNotificationMenu;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v42 )
        goto LABEL_61;
      v47 = 7;
      goto LABEL_55;
    case 14:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v42 = this->fields.stonePurchaseNotificationMenu;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v42 )
        goto LABEL_61;
      v47 = 8;
      goto LABEL_55;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v42 = this->fields.stonePurchaseNotificationMenu;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v42 )
LABEL_61:
        sub_B5D69C(v44, v45);
      v47 = 3;
LABEL_55:
      v51 = v42;
LABEL_56:
      v57 = v43;
      v58 = 0;
      v59 = 0;
LABEL_57:
      StonePurchaseNotificationMenu__Open(v51, v47, v57, v58, v59, v46);
LABEL_58:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        System_Action__Invoke(refreshCallbackFunc, 0LL);
      return;
  }
}


void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_23580236(
        StonePurchaseMenu_o *this,
        int32_t result,
        int32_t perMonthAmount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  const MethodInfo *v40; // x1
  struct StonePurchaseNotificationMenu_o *v41; // x20
  System_Action_o *v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x5
  int32_t v46; // w1
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v48; // x21
  ErrorDialog_ClickDelegate_o *v49; // x22
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  int32_t v53; // w21
  System_Action_o *v54; // x23
  StonePurchaseNotificationMenu_o *v55; // x0
  System_Action_o *v56; // x2
  int32_t v57; // w3
  int32_t v58; // w4
  struct StonePurchaseNotificationMenu_o *v59; // x20
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v61; // x22
  System_Action_o *refreshCallbackFunc; // x0
  System_Nullable_Vector2__o v63; // 0:x6.12

  if ( (byte_42E7AE2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, perMonthAmount, method);
    sub_B5D5C4(&SpendLimitMenu_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&PurchaseByBank_Legacy_Request_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&SoundManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v22, v23, v24);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v25, v26, v27);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v28, v29, v30);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v31, v32, v33);
    sub_B5D5C4(&Method_StonePurchaseMenu_EndSpendLimit__, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12542/*"STONE_PURCHASE_RESULT_WAIT"*/, v37, v38, v39);
    byte_42E7AE2 = 1;
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
      v53 = TotalAddedChargeStoneNum;
      v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v54, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_44;
      v46 = 1;
      v55 = stonePurchaseNotificationMenu;
      v56 = v54;
      v57 = TotalAddedFreeStoneNum;
      v58 = v53;
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
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12542/*"STONE_PURCHASE_RESULT_WAIT"*/, 0LL);
      v49 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v49,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_44;
      v63.fields.value = 0LL;
      *(_DWORD *)&v63.fields.has_value = 0;
      ErrorDialog__Open_30736884(warningDialog, 0LL, v48, v49, 1, -1.0, 1, v63, 0LL);
      goto LABEL_41;
    case 4:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v59 = this->fields.stonePurchaseNotificationMenu;
      v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v59 )
        goto LABEL_44;
      v55 = v59;
      v46 = 0;
      goto LABEL_39;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v41 = this->fields.stonePurchaseNotificationMenu;
      v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v41 )
        goto LABEL_44;
      v46 = 4;
      goto LABEL_38;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v40);
      goto LABEL_41;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v61 = (SpendLimitMenu_CallbackFunc_o *)sub_B5D694(SpendLimitMenu_CallbackFunc_TypeInfo);
      SpendLimitMenu_CallbackFunc___ctor(v61, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL);
      if ( !spendLimitMenu )
        goto LABEL_44;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v61, 0LL);
      goto LABEL_41;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v41 = this->fields.stonePurchaseNotificationMenu;
      v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v41 )
LABEL_44:
        sub_B5D69C(v43, v44);
      v46 = 3;
LABEL_38:
      v55 = v41;
LABEL_39:
      v56 = v42;
      v57 = 0;
      v58 = 0;
LABEL_40:
      StonePurchaseNotificationMenu__Open(v55, v46, v56, v57, v58, v45);
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
  __int64 v3; // x3
  UILabel_o *stoneDataLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v8; // x1

  if ( (byte_42E7AEB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stoneCount, (_DWORD)method, v3);
    byte_42E7AEB = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_B5D69C(NumberFormat, v8);
  UILabel__set_text(stoneDataLabel, NumberFormat, 0LL);
}


void __fastcall StonePurchaseMenu__add_callbackFunc(
        StonePurchaseMenu_o *this,
        StonePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct StonePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  StonePurchaseMenu_o *v12; // x0
  StonePurchaseMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7AD9 & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7AD9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (StonePurchaseMenu_CallbackFunc_c *)v9->klass != StonePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (StonePurchaseMenu_o *)sub_B5D990(v9);
  StonePurchaseMenu__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7AE9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8989/*"MainPanel/BaseView/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E7AE9 = 1;
  }
  return (System_String_o *)StringLiteral_8989/*"MainPanel/BaseView/CloseButton"*/;
}


void __fastcall StonePurchaseMenu__remove_callbackFunc(
        StonePurchaseMenu_o *this,
        StonePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct StonePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct StonePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  StonePurchaseMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E7ADA & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7ADA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (StonePurchaseMenu_CallbackFunc_c *)v9->klass != StonePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (StonePurchaseMenu_o *)sub_B5D990(v9);
  StonePurchaseMenu__Init(v12, v13);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E644E & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseMenu_Result_TypeInfo, result, (_DWORD)callback, object);
    byte_42E644E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu_CallbackFunc__Invoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  StonePurchaseMenu_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  StonePurchaseMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  StonePurchaseMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (StonePurchaseMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}