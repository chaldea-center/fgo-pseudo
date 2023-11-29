void __fastcall StonePurchaseMenu___ctor(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FAED9 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FAED9 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__BackBuyBankItem(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FAECD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10004, method);
    byte_40FAECD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.1,
      0LL);
  }
}


void __fastcall StonePurchaseMenu__BackBuyBankItemConfirm(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *buyItemMask; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  StonePurchaseListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_40FAED2 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_40FAED2 = 1;
  }
  if ( this->fields.state == 5 )
  {
    buyItemMask = this->fields.buyItemMask;
    if ( !buyItemMask
      || (UnityEngine_GameObject__SetActive(buyItemMask, 0, 0LL),
          ItemListViewManager = this->fields.ItemListViewManager,
          v10 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                 StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                                 v6,
                                                                 v7,
                                                                 v8,
                                                                 v9),
          StonePurchaseListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            Method_StonePurchaseMenu_OnSelectBuyItem__,
            0LL),
          !ItemListViewManager) )
    {
      sub_B170D4();
    }
    ItemListViewManager->fields.callbackFunc = v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    StonePurchaseListViewManager__SetMode_26867284(ItemListViewManager, 1, v17);
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
  sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FAECC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_StonePurchaseMenu_OnMoveEnd__, v10);
    byte_40FAECC = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
      sub_B170D4();
    ErrorDialog__Close(warningDialog, 0LL);
    StonePurchaseMenu__Callback(this, 3, v5);
  }
}


void __fastcall StonePurchaseMenu__EndSpendLimit(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SpendLimitMenu_o *spendLimitMenu; // x0
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  StonePurchaseListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_40FAECF & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v3);
    byte_40FAECF = 1;
  }
  spendLimitMenu = this->fields.spendLimitMenu;
  if ( !spendLimitMenu
    || (SpendLimitMenu__Close(spendLimitMenu, 0LL),
        ItemListViewManager = this->fields.ItemListViewManager,
        v10 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                               v6,
                                                               v7,
                                                               v8,
                                                               v9),
        StonePurchaseListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_StonePurchaseMenu_OnSelectBuyItem__,
          0LL),
        !ItemListViewManager) )
  {
    sub_B170D4();
  }
  ItemListViewManager->fields.callbackFunc = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  StonePurchaseListViewManager__SetMode_26867284(ItemListViewManager, 1, v17);
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
  UILabel_o *stoneDataLabel; // x0
  ListViewManager_o *ItemListViewManager; // x0

  if ( (byte_40FAECA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FAECA = 1;
  }
  this->fields.callbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.refreshCallbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel
    || (UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1, 0LL),
        (ItemListViewManager = (ListViewManager_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewManager__DestroyList(ItemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StonePurchaseMenu__OnClickBack(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FAED6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FAED6 = 1;
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
  System_String_o *WebViewAddress_23699452; // x20
  System_String_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x22

  if ( (byte_40FAED7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_StonePurchaseMenu_OnEndWebView__, v6);
    sub_B16FFC(&WebViewManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_15306, v8);
    byte_40FAED7 = 1;
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
    WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(8, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15306, 0LL);
    v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_StonePurchaseMenu_OnEndWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(v10, WebViewAddress_23699452, v15, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t state; // w8
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v15; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_40FAED4 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v6);
    byte_40FAED4 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state == 1 )
    {
      this->fields.state = 2;
      ItemListViewManager = this->fields.ItemListViewManager;
      v18 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3,
                                                             v4);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_OnSelectBuyItem__,
        0LL);
      if ( !ItemListViewManager )
        sub_B170D4();
      ItemListViewManager->fields.callbackFunc = v18;
      sub_B16F98(
        (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
        (System_Int32_array **)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      StonePurchaseListViewManager__SetMode_26867284(ItemListViewManager, 1, v25);
    }
    else if ( state == 3 )
    {
      StonePurchaseMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
      v15 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_B16F98(p_closeCallbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
        System_Action__Invoke(v15, 0LL);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct StonePurchaseListViewManager_o *ItemListViewManager; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_40FAED3 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v5);
    byte_40FAED3 = 1;
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
        StonePurchaseMenu__Callback(this, 0, v9);
        return;
      }
      ItemListViewManager = this->fields.ItemListViewManager;
      v13 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                             v8,
                                                             v9,
                                                             v10,
                                                             v11);
      StonePurchaseListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_OnSelectBuyItem__,
        0LL);
      if ( ItemListViewManager )
      {
        ItemListViewManager->fields.callbackFunc = v13;
        sub_B16F98(
          (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
          (System_Int32_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        StonePurchaseListViewManager__SetMode_26867284(ItemListViewManager, 1, v20);
        return;
      }
    }
    sub_B170D4();
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

  if ( (byte_40FAED5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&n);
    byte_40FAED5 = 1;
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
      sub_B170D4();
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ListViewManager_o *ItemListViewManager; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *stoneDataLabel; // x20
  int32_t stone; // w21
  System_String_o *NumberFormat; // x0
  UnityEngine_GameObject_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_int__o *v41; // x21
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x2
  StonePurchaseListViewManager_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  struct StonePurchaseListViewManager_o *v49; // x20
  StonePurchaseListViewManager_CallbackFunc_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  AgeVerificationMenu_o *ageVerificationMenu; // x20
  AgeVerificationMenu_CallbackFunc_o *v63; // x21
  System_Action_o *v64; // x20

  if ( (byte_40FAECB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, callback);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v9);
    sub_B16FFC(&StonePurchaseListViewManager_CallbackFunc_TypeInfo, v10);
    sub_B16FFC(&AgeVerificationMenu_CallbackFunc_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v13);
    sub_B16FFC(&Method_StonePurchaseMenu_OnMoveEnd__, v14);
    sub_B16FFC(&Method_StonePurchaseMenu_OnSelectAgeVerification__, v15);
    sub_B16FFC(&Method_StonePurchaseMenu_OnSelectBuyItem__, v16);
    sub_B16FFC(&Method_StonePurchaseMenu__Open_b__19_0__, v17);
    byte_40FAECB = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      this->fields.refreshCallbackFunc = refreshCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
        (System_Int32_array **)refreshCallback,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      ItemListViewManager = (ListViewManager_o *)this->fields.ItemListViewManager;
      if ( ItemListViewManager )
      {
        ListViewManager__set_IsInput(ItemListViewManager, 0, 0LL);
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        if ( SelfUserGame )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          stone = SelfUserGame->fields.stone;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          NumberFormat = LocalizationManager__GetNumberFormat(stone, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, NumberFormat, 0LL);
            v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v41 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v37, v38, v39, v40);
            System_Action_int____ctor(
              v41,
              (Il2CppObject *)this,
              Method_StonePurchaseMenu__Open_b__19_0__,
              (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
            StoneCountRefreshComponent__AttachToGameObject(v36, v41, 1, v42);
            v44 = this->fields.ItemListViewManager;
            this->fields.state = 1;
            if ( v44 )
            {
              StonePurchaseListViewManager__CreateList(v44, 0, v43);
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
                v49 = this->fields.ItemListViewManager;
                v50 = (StonePurchaseListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       StonePurchaseListViewManager_CallbackFunc_TypeInfo,
                                                                       v45,
                                                                       v46,
                                                                       v47,
                                                                       v48);
                StonePurchaseListViewManager_CallbackFunc___ctor(
                  v50,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectBuyItem__,
                  0LL);
                if ( v49 )
                {
                  v49->fields.callbackFunc = v50;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v49->fields.callbackFunc,
                    (System_Int32_array **)v50,
                    v51,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56);
                  StonePurchaseListViewManager__SetMode_26867284(v49, 1, v57);
LABEL_23:
                  v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v58, v59, v60, v61);
                  System_Action___ctor(v64, (Il2CppObject *)this, Method_StonePurchaseMenu_OnMoveEnd__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
                  return;
                }
              }
              else
              {
                this->fields.state = 7;
                ageVerificationMenu = this->fields.ageVerificationMenu;
                v63 = (AgeVerificationMenu_CallbackFunc_o *)sub_B170CC(
                                                              AgeVerificationMenu_CallbackFunc_TypeInfo,
                                                              v45,
                                                              v46,
                                                              v47,
                                                              v48);
                AgeVerificationMenu_CallbackFunc___ctor(
                  v63,
                  (Il2CppObject *)this,
                  Method_StonePurchaseMenu_OnSelectAgeVerification__,
                  0LL);
                if ( ageVerificationMenu )
                {
                  AgeVerificationMenu__Open(ageVerificationMenu, v63, 0LL);
                  goto LABEL_23;
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
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
  UnityEngine_GameObject_o *buyItemMask; // x0
  UnityEngine_GameObject_o *v12; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  PurchaseBehaviour_o *Instance; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BankShopEntity_o *bankShop; // x20
  PurchaseLogic_ProductFinishedAction_o *v20; // x22

  if ( (byte_40FAECE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&PurchaseLogic_ProductFinishedAction_TypeInfo, v6);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v7);
    sub_B16FFC(&Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__, v8);
    byte_40FAECE = 1;
  }
  if ( this->fields.state == 2 )
  {
    ItemListViewManager = this->fields.ItemListViewManager;
    if ( !ItemListViewManager )
      goto LABEL_26;
    Item = StonePurchaseListViewManager__GetItem(ItemListViewManager, this->fields.selectItemNum, v2);
    buyItemMask = this->fields.buyItemMask;
    this->fields.state = 5;
    if ( !buyItemMask )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(buyItemMask, 1, 0LL);
    v12 = this->fields.buyItemMask;
    if ( !v12 )
      goto LABEL_26;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v12,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    }
    if ( !Component_srcLineSprite )
      goto LABEL_26;
    ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
      Component_srcLineSprite,
      Component_srcLineSprite->klass[1]._1.declaringType,
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
      Instance = PurchaseBehaviour__GetInstance(0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
      {
        if ( Item )
        {
          bankShop = Item->fields.bankShop;
          v20 = (PurchaseLogic_ProductFinishedAction_o *)sub_B170CC(
                                                           PurchaseLogic_ProductFinishedAction_TypeInfo,
                                                           v15,
                                                           v16,
                                                           v17,
                                                           v18);
          PurchaseLogic_ProductFinishedAction___ctor(
            v20,
            (Il2CppObject *)this,
            Method_StonePurchaseMenu_SelectedBuyBankItemConfirm__,
            0LL);
          if ( Instance )
          {
            PurchaseBehaviour__StartPayment(Instance, bankShop, v20, 0LL);
            return;
          }
        }
LABEL_26:
        sub_B170D4();
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct StonePurchaseNotificationMenu_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_o *v30; // x21
  int32_t v31; // w1
  SpendLimitMenu_o *spendLimitMenu; // x20
  SpendLimitMenu_CallbackFunc_o *v33; // x21
  struct StonePurchaseNotificationMenu_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  StonePurchaseNotificationMenu_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  ErrorDialog_ClickDelegate_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Action_o *v68; // x23
  System_Action_o *v69; // x2
  int32_t v70; // w3
  int32_t v71; // w4
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Action_o *refreshCallbackFunc; // x0
  System_Nullable_Vector2__o v77; // 0:x6.12

  if ( (byte_40FAED0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&SpendLimitMenu_CallbackFunc_TypeInfo, v11);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&SoundManager_TypeInfo, v14);
    sub_B16FFC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v15);
    sub_B16FFC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v16);
    sub_B16FFC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v17);
    sub_B16FFC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v18);
    sub_B16FFC(&Method_StonePurchaseMenu_EndSpendLimit__, v19);
    sub_B16FFC(&StringLiteral_12339, v20);
    byte_40FAED0 = 1;
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
      v68 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v64, v65, v66, v67);
      System_Action___ctor(v68, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_61;
      v31 = 1;
      v39 = stonePurchaseNotificationMenu;
      v69 = v68;
      v70 = freeStoneNum;
      v71 = chargeStoneNum;
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
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12339, 0LL);
      v54 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v50, v51, v52, v53);
      ErrorDialog_ClickDelegate___ctor(
        v54,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_61;
      v77.fields.value = 0LL;
      *(_DWORD *)&v77.fields.has_value = 0;
      ErrorDialog__Open_29336628(warningDialog, 0LL, v49, v54, 1, -1.0, 1, v77, 0LL);
      goto LABEL_58;
    case 5:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v34 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v34 )
        goto LABEL_61;
      v39 = v34;
      v31 = 0;
      goto LABEL_56;
    case 7:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v25 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v25 )
        goto LABEL_61;
      v31 = 4;
      goto LABEL_55;
    case 8:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v21);
      goto LABEL_58;
    case 9:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v33 = (SpendLimitMenu_CallbackFunc_o *)sub_B170CC(SpendLimitMenu_CallbackFunc_TypeInfo, v21, v22, v23, v24);
      SpendLimitMenu_CallbackFunc___ctor(v33, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL);
      if ( !spendLimitMenu )
        goto LABEL_61;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v33, 0LL);
      goto LABEL_58;
    case 10:
    case 11:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v25 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v25 )
        goto LABEL_61;
      v31 = 5;
      goto LABEL_55;
    case 12:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v25 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v25 )
        goto LABEL_61;
      v31 = 6;
      goto LABEL_55;
    case 13:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v25 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v59, v60, v61, v62);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v25 )
        goto LABEL_61;
      v31 = 7;
      goto LABEL_55;
    case 14:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v25 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v25 )
        goto LABEL_61;
      v31 = 8;
      goto LABEL_55;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v25 = this->fields.stonePurchaseNotificationMenu;
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v25 )
LABEL_61:
        sub_B170D4();
      v31 = 3;
LABEL_55:
      v39 = v25;
LABEL_56:
      v69 = v30;
      v70 = 0;
      v71 = 0;
LABEL_57:
      StonePurchaseNotificationMenu__Open(v39, v31, v69, v70, v71, 0LL);
LABEL_58:
      refreshCallbackFunc = this->fields.refreshCallbackFunc;
      if ( refreshCallbackFunc )
        System_Action__Invoke(refreshCallbackFunc, 0LL);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu__SelectedBuyBankItemConfirm_26877176(
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct StonePurchaseNotificationMenu_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x21
  int32_t v28; // w1
  ErrorDialog_o *warningDialog; // x20
  System_String_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  ErrorDialog_ClickDelegate_o *v35; // x22
  int32_t TotalAddedFreeStoneNum; // w20
  int32_t TotalAddedChargeStoneNum; // w0
  struct StonePurchaseNotificationMenu_o *stonePurchaseNotificationMenu; // x22
  int32_t v39; // w21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_o *v44; // x23
  StonePurchaseNotificationMenu_o *v45; // x0
  System_Action_o *v46; // x2
  int32_t v47; // w3
  int32_t v48; // w4
  struct StonePurchaseNotificationMenu_o *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  SpendLimitMenu_o *spendLimitMenu; // x21
  SpendLimitMenu_CallbackFunc_o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_o *refreshCallbackFunc; // x0
  System_Nullable_Vector2__o v61; // 0:x6.12

  if ( (byte_40FAED1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&SpendLimitMenu_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&PurchaseByBank_Legacy_Request_TypeInfo, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, v12);
    sub_B16FFC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, v13);
    sub_B16FFC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, v14);
    sub_B16FFC(&Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__, v15);
    sub_B16FFC(&Method_StonePurchaseMenu_EndSpendLimit__, v16);
    sub_B16FFC(&StringLiteral_12339, v17);
    byte_40FAED1 = 1;
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
      v39 = TotalAddedChargeStoneNum;
      v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
      System_Action___ctor(v44, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuccess__, 0LL);
      if ( !stonePurchaseNotificationMenu )
        goto LABEL_44;
      v28 = 1;
      v45 = stonePurchaseNotificationMenu;
      v46 = v44;
      v47 = TotalAddedFreeStoneNum;
      v48 = v39;
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
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12339, 0LL);
      v35 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v31, v32, v33, v34);
      ErrorDialog_ClickDelegate___ctor(
        v35,
        (Il2CppObject *)this,
        Method_StonePurchaseMenu_EndBuyBankItemNotificationWait__,
        0LL);
      if ( !warningDialog )
        goto LABEL_44;
      v61.fields.value = 0LL;
      *(_DWORD *)&v61.fields.has_value = 0;
      ErrorDialog__Open_29336628(warningDialog, 0LL, v30, v35, 1, -1.0, 1, v61, 0LL);
      goto LABEL_41;
    case 4:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v49 = this->fields.stonePurchaseNotificationMenu;
      v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v49 )
        goto LABEL_44;
      v45 = v49;
      v28 = 0;
      goto LABEL_39;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v22 = this->fields.stonePurchaseNotificationMenu;
      v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationSuspend__, 0LL);
      if ( !v22 )
        goto LABEL_44;
      v28 = 4;
      goto LABEL_38;
    case 7:
    case 9:
      StonePurchaseMenu__BackBuyBankItemConfirm(this, v18);
      goto LABEL_41;
    case 8:
      this->fields.state = 10;
      spendLimitMenu = this->fields.spendLimitMenu;
      v55 = (SpendLimitMenu_CallbackFunc_o *)sub_B170CC(SpendLimitMenu_CallbackFunc_TypeInfo, v18, v19, v20, v21);
      SpendLimitMenu_CallbackFunc___ctor(v55, (Il2CppObject *)this, Method_StonePurchaseMenu_EndSpendLimit__, 0LL);
      if ( !spendLimitMenu )
        goto LABEL_44;
      SpendLimitMenu__Open(spendLimitMenu, perMonthAmount, v55, 0LL);
      goto LABEL_41;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      v22 = this->fields.stonePurchaseNotificationMenu;
      v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_StonePurchaseMenu_EndBuyBankItemNotificationCancel__, 0LL);
      if ( !v22 )
LABEL_44:
        sub_B170D4();
      v28 = 3;
LABEL_38:
      v45 = v22;
LABEL_39:
      v46 = v27;
      v47 = 0;
      v48 = 0;
LABEL_40:
      StonePurchaseNotificationMenu__Open(v45, v28, v46, v47, v48, 0LL);
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

  if ( (byte_40FAEDA & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_40FAEDA = 1;
  }
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneDataLabel )
    sub_B170D4();
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

  if ( (byte_40FAEC8 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_40FAEC8 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (StonePurchaseMenu_o *)sub_B173C8(v8);
  StonePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall StonePurchaseMenu__get_closeBtnPath(StonePurchaseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FAED8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8869, method);
    byte_40FAED8 = 1;
  }
  return (System_String_o *)StringLiteral_8869;
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

  if ( (byte_40FAEC9 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_40FAEC9 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (StonePurchaseMenu_o *)sub_B173C8(v8);
  StonePurchaseMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseMenu_CallbackFunc___ctor(
        StonePurchaseMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7A67 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_40F7A67 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(StonePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall StonePurchaseMenu_CallbackFunc__EndInvoke(
        StonePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  StonePurchaseMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  StonePurchaseMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}