void __fastcall NoticeInfoComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438BA96 & 1) == 0 )
  {
    sub_B775C4(&NoticeInfoComponent_TypeInfo);
    byte_438BA96 = 1;
  }
  NoticeInfoComponent_TypeInfo->static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE = 28;
  NoticeInfoComponent_TypeInfo->static_fields->ACCOUNT_DELETE_RECONFIRM_DECIDE_FONT_SIZE = 24;
  NoticeInfoComponent_TypeInfo->static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE = 24;
}


void __fastcall NoticeInfoComponent___ctor(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeleteConfirmDialog(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AccountDeleteConfirmDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438BA90 & 1) == 0 )
  {
    sub_B775C4(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438BA90 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_B77694(AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0LL);
  if ( !Instance )
    sub_B7769C(v5, v6);
  CommonUI__OpenAccountDeleteConfirmDialog(Instance, v4, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeletePasswordDialog(
        NoticeInfoComponent_o *this,
        System_String_o *password,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438BA94 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438BA94 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0LL);
  if ( !Instance )
    sub_B7769C(v7, v8);
  CommonUI__OpenAccountDeletePasswordDialog(Instance, 0, password, v6, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeleteReConfirmDialog(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  CommonConfirmDialog_ClickDelegate_o *v7; // x24
  __int64 v8; // x1
  NoticeInfoComponent_c *v9; // x0

  if ( (byte_438BA91 & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__);
    sub_B775C4(&NoticeInfoComponent_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_1671/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_1670/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_1672/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BA91 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1672/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1671/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1670/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0LL);
  v7 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0LL);
  v9 = NoticeInfoComponent_TypeInfo;
  if ( (BYTE3(NoticeInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo);
    v9 = NoticeInfoComponent_TypeInfo;
  }
  if ( !Instance )
    sub_B7769C(v9, v8);
  CommonUI__OpenConfirmDialog_18056192(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v4,
    v5,
    v6,
    1,
    v7,
    v9->static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE,
    1,
    v9->static_fields->ACCOUNT_DELETE_RECONFIRM_DECIDE_FONT_SIZE,
    v9->static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE,
    0LL);
}


void __fastcall NoticeInfoComponent__SetReboot(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v4; // x8
  NoticeInfoComponent___c_c *v5; // x0
  float DEFAULT_FADE_TIME; // s8
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v9; // x21
  struct NoticeInfoComponent___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438BA95 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__);
    sub_B775C4(&NoticeInfoComponent___c_TypeInfo);
    byte_438BA95 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v5 = NoticeInfoComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(NoticeInfoComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeInfoComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent___c_TypeInfo);
    v5 = NoticeInfoComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__23_0 = static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v9, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0LL);
    v10 = NoticeInfoComponent___c_TypeInfo->static_fields;
    v10->__9__23_0 = _9__23_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->__9__23_0,
      (System_Int32_array **)_9__23_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !Instance )
    sub_B7769C(v5, v2);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__23_0, 0LL);
}


void __fastcall NoticeInfoComponent__Start(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_B7769C(gameObject, v3);
  }
  v4.fields.x = 1200.0;
  v4.fields.y = 0.0;
  v4.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v4, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NoticeInfoComponent__WaitForSE(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438BA8A & 1) == 0 )
  {
    sub_B775C4(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
    byte_438BA8A = 1;
  }
  v3 = sub_B77694(NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
  NoticeInfoComponent__WaitForSE_d__11___ctor((NoticeInfoComponent__WaitForSE_d__11_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NoticeInfoComponent___OpenAccountDeleteConfirmDialog_b__18_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_438BA97 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_3191/*"CLICK_OK"*/);
    sub_B775C4(&StringLiteral_3167/*"CLICK_CANCLE"*/);
    byte_438BA97 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_B7769C(Instance, v6);
  }
  if ( isDecide )
    v7 = &StringLiteral_3191/*"CLICK_OK"*/;
  else
    v7 = &StringLiteral_3167/*"CLICK_CANCLE"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0LL);
}


void __fastcall NoticeInfoComponent___OpenAccountDeletePasswordDialog_b__22_0(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1
  NoticeInfoComponent_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438BA99 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438BA99 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseAccountDeletePasswordDialog(Instance, 0LL, 0LL);
  NoticeInfoComponent__SetReboot(v4, v5);
}


void __fastcall NoticeInfoComponent___OpenAccountDeleteReConfirmDialog_b__19_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_438BA98 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_3167/*"CLICK_CANCLE"*/);
    byte_438BA98 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    NoticeInfoComponent__requestUserDelete(this, v6);
    return;
  }
  Instance = (CommonUI_o *)this->fields.myRoomFsm;
  if ( !Instance )
LABEL_8:
    sub_B7769C(Instance, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3167/*"CLICK_CANCLE"*/, 0LL);
}


void __fastcall NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_438BA8F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3238/*"CLOSE_WEBVIEW"*/);
    byte_438BA8F = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3238/*"CLOSE_WEBVIEW"*/, 0LL);
}


void __fastcall NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Application__OpenURL(this->fields.path, 0LL);
}


void __fastcall NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *title; // x19
  System_String_o *path; // x21
  System_Action_o *v5; // x22

  if ( (byte_438BA8E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_NoticeInfoComponent_onEndWebView__);
    sub_B775C4(&WebViewManager_TypeInfo);
    byte_438BA8E = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(title, path, v5, 0LL);
}


void __fastcall NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1

  if ( (byte_438BA92 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_UserDeleteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_NoticeInfoComponent_userDeleteCallback__);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438BA92 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent_userDeleteCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v3,
                                                         (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v5);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall NoticeInfoComponent__setCreditWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  struct System_String_o *WebViewAddress_26221564; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438BA8C & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_15654/*"WEB_VIEW_TITLE_CREDIT"*/);
    byte_438BA8C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15654/*"WEB_VIEW_TITLE_CREDIT"*/, 0LL);
  this->fields.title = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26221564 = NetworkManager__getWebViewAddress_26221564(5, v10);
  this->fields.path = WebViewAddress_26221564;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26221564,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall NoticeInfoComponent__setHelpWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  struct System_String_o *WebViewAddress_26221564; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438BA88 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_15655/*"WEB_VIEW_TITLE_HELP"*/);
    byte_438BA88 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15655/*"WEB_VIEW_TITLE_HELP"*/, 0LL);
  this->fields.title = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26221564 = NetworkManager__getWebViewAddress_26221564(2, v10);
  this->fields.path = WebViewAddress_26221564;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26221564,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall NoticeInfoComponent__setInfomationWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  struct System_String_o *WebViewAddress_26221564; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438BA87 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_15656/*"WEB_VIEW_TITLE_INFOMATION"*/);
    byte_438BA87 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15656/*"WEB_VIEW_TITLE_INFOMATION"*/, 0LL);
  this->fields.title = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26221564 = NetworkManager__getWebViewAddress_26221564(0, v10);
  this->fields.path = WebViewAddress_26221564;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26221564,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall NoticeInfoComponent__setInquiryWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  struct System_String_o *WebViewAddress_26221564; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Collections_IEnumerator_o *v19; // x1

  if ( (byte_438BA89 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_15653/*"WEB_VIEW_TITLE_CONTACT_US"*/);
    byte_438BA89 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15653/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0LL);
  this->fields.title = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26221564 = NetworkManager__getWebViewAddress_26221564(3, v10);
  this->fields.path = WebViewAddress_26221564;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26221564,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v19 = NoticeInfoComponent__WaitForSE(this, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
}


void __fastcall NoticeInfoComponent__setNoticeInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_Int32_array **v5; // x1
  struct System_String_o **p_title; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438BA86 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BA86 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v5 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  p_title = &this->fields.title;
  sub_B77560((BattleServantConfConponent_o *)p_title, v5, v7, v8, v9, v10, v11, v12);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_title[1] = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)(p_title + 1), v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall NoticeInfoComponent__setRightWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  struct System_String_o *WebViewAddress_26221564; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438BA8D & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_15657/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/);
    byte_438BA8D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15657/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0LL);
  this->fields.title = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26221564 = NetworkManager__getWebViewAddress_26221564(6, v10);
  this->fields.path = WebViewAddress_26221564;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26221564,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall NoticeInfoComponent__setRulesWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  struct System_String_o *WebViewAddress_26221564; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438BA8B & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_15661/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/);
    byte_438BA8B = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15661/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0LL);
  this->fields.title = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26221564 = NetworkManager__getWebViewAddress_26221564(4, v10);
  this->fields.path = WebViewAddress_26221564;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26221564,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall NoticeInfoComponent__userDeleteCallback(
        NoticeInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NoticeInfoComponent_o *v4; // x19
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserDeleteReservationMaster_o *v6; // x20
  UserDeleteReservationEntity_o *v7; // x0
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_438BA93 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserDeleteReservationEntity_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    this = (NoticeInfoComponent_o *)sub_B775C4(&StringLiteral_3167/*"CLICK_CANCLE"*/);
    byte_438BA93 = 1;
  }
  if ( !result )
    goto LABEL_17;
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
    goto LABEL_15;
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0LL);
  this = (NoticeInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  v6 = (UserDeleteReservationMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (NoticeInfoComponent_o *)NetworkManager__get_UserId((const MethodInfo *)MasterData_WarQuestSelectionMaster);
  if ( !v6 )
LABEL_17:
    sub_B7769C(this, result);
  v7 = UserDeleteReservationMaster__GetEntity(v6, (int64_t)this, 0LL);
  if ( v7 )
  {
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(v4, v7->fields.password, v8);
    return;
  }
LABEL_15:
  this = (NoticeInfoComponent_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3167/*"CLICK_CANCLE"*/, 0LL);
}


void __fastcall NoticeInfoComponent__WaitForSE_d__11___ctor(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NoticeInfoComponent__WaitForSE_d__11__MoveNext(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  NoticeInfoComponent__WaitForSE_d__11_o *v2; // x19
  unsigned int _1__state; // w8
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  UnityEngine_WaitForSeconds_o *v13; // x20
  BattleServantConfConponent_o *v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v2 = this;
  if ( (byte_438A098 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (NoticeInfoComponent__WaitForSE_d__11_o *)sub_B775C4(&StringLiteral_9930/*"OPEN_BROWSER"*/);
    byte_438A098 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this || (this = (NoticeInfoComponent__WaitForSE_d__11_o *)_4__this->fields.myRoomFsm) == 0LL )
        sub_B7769C(this, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9930/*"OPEN_BROWSER"*/, 0LL);
    }
    return 0;
  }
  else
  {
    v2->fields.__1__state = -1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    if ( SoundManager__isBusyVoice(0LL, 0LL) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, 0LL, v4, v5, v6, v7, v8, v9);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
    }
    else
    {
      v13 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v13, 0.5, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v13;
      v14 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(v14, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
      *(_DWORD *)&v14[-1].fields.isOpenAfter = 2;
      return 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall NoticeInfoComponent__WaitForSE_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NoticeInfoComponent__WaitForSE_d__11__System_Collections_IEnumerator_Reset(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall NoticeInfoComponent__WaitForSE_d__11__System_Collections_IEnumerator_get_Current(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NoticeInfoComponent__WaitForSE_d__11__System_IDisposable_Dispose(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NoticeInfoComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438A096 & 1) == 0 )
  {
    sub_B775C4(&NoticeInfoComponent___c_TypeInfo);
    byte_438A096 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(NoticeInfoComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)NoticeInfoComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall NoticeInfoComponent___c___ctor(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NoticeInfoComponent___c___SetReboot_b__23_0(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438A097 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_438A097 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  ManagementManager__reboot(Instance, 0, 0LL);
}