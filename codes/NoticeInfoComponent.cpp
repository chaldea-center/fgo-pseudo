void __fastcall NoticeInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4188426 & 1) == 0 )
  {
    sub_B2C35C(&NoticeInfoComponent_TypeInfo, v1);
    byte_4188426 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  AccountDeleteConfirmDialog_ClickDelegate_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4188420 & 1) == 0 )
  {
    sub_B2C35C(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4188420 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_B2C42C(AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0LL);
  if ( !Instance )
    sub_B2C434(v7, v8);
  CommonUI__OpenAccountDeleteConfirmDialog(Instance, v6, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeletePasswordDialog(
        NoticeInfoComponent_o *this,
        System_String_o *password,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4188424 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, password);
    sub_B2C35C(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4188424 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__OpenAccountDeletePasswordDialog(Instance, 0, password, v8, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeleteReConfirmDialog(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  CommonConfirmDialog_ClickDelegate_o *v15; // x24
  __int64 v16; // x1
  NoticeInfoComponent_c *v17; // x0

  if ( (byte_4188421 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__, v4);
    sub_B2C35C(&NoticeInfoComponent_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_1639/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, v7);
    sub_B2C35C(&StringLiteral_1638/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, v8);
    sub_B2C35C(&StringLiteral_1640/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4188421 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1640/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1639/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1638/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0LL);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0LL);
  v17 = NoticeInfoComponent_TypeInfo;
  if ( (BYTE3(NoticeInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo);
    v17 = NoticeInfoComponent_TypeInfo;
  }
  if ( !Instance )
    sub_B2C434(v17, v16);
  CommonUI__OpenConfirmDialog_17971424(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v12,
    v13,
    v14,
    1,
    v15,
    v17->static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE,
    1,
    v17->static_fields->ACCOUNT_DELETE_RECONFIRM_DECIDE_FONT_SIZE,
    v17->static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE,
    0LL);
}


void __fastcall NoticeInfoComponent__SetReboot(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v8; // x8
  NoticeInfoComponent___c_c *v9; // x0
  float DEFAULT_FADE_TIME; // s8
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v13; // x21
  struct NoticeInfoComponent___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4188425 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__, v4);
    sub_B2C35C(&NoticeInfoComponent___c_TypeInfo, v5);
    byte_4188425 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  v9 = NoticeInfoComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(NoticeInfoComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeInfoComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent___c_TypeInfo);
    v9 = NoticeInfoComponent___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__23_0 = static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v13, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0LL);
    v14 = NoticeInfoComponent___c_TypeInfo->static_fields;
    v14->__9__23_0 = _9__23_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__23_0,
      (System_Int32_array **)_9__23_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !Instance )
    sub_B2C434(v9, v6);
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
    sub_B2C434(gameObject, v3);
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

  if ( (byte_418841A & 1) == 0 )
  {
    sub_B2C35C(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo, method);
    byte_418841A = 1;
  }
  v3 = sub_B2C42C(NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
  NoticeInfoComponent__WaitForSE_d__11___ctor((NoticeInfoComponent__WaitForSE_d__11_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeInfoComponent___OpenAccountDeleteConfirmDialog_b__18_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 *v9; // x8

  if ( (byte_4188427 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B2C35C(&StringLiteral_3070/*"CLICK_OK"*/, v5);
    sub_B2C35C(&StringLiteral_3049/*"CLICK_CANCLE"*/, v6);
    byte_4188427 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_B2C434(Instance, v8);
  }
  if ( isDecide )
    v9 = &StringLiteral_3070/*"CLICK_OK"*/;
  else
    v9 = &StringLiteral_3049/*"CLICK_CANCLE"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0LL);
}


void __fastcall NoticeInfoComponent___OpenAccountDeletePasswordDialog_b__22_0(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1
  NoticeInfoComponent_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4188429 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4188429 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseAccountDeletePasswordDialog(Instance, 0LL, 0LL);
  NoticeInfoComponent__SetReboot(v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeInfoComponent___OpenAccountDeleteReConfirmDialog_b__19_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4188428 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B2C35C(&StringLiteral_3049/*"CLICK_CANCLE"*/, v5);
    byte_4188428 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    NoticeInfoComponent__requestUserDelete(this, v7);
    return;
  }
  Instance = (CommonUI_o *)this->fields.myRoomFsm;
  if ( !Instance )
LABEL_8:
    sub_B2C434(Instance, v7);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3049/*"CLICK_CANCLE"*/, 0LL);
}


void __fastcall NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_418841F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3113/*"CLOSE_WEBVIEW"*/, method);
    byte_418841F = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3113/*"CLOSE_WEBVIEW"*/, 0LL);
}


void __fastcall NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Application__OpenURL(this->fields.path, 0LL);
}


void __fastcall NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *title; // x19
  System_String_o *path; // x21
  System_Action_o *v7; // x22

  if ( (byte_418841E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_NoticeInfoComponent_onEndWebView__, v3);
    sub_B2C35C(&WebViewManager_TypeInfo, v4);
    byte_418841E = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(title, path, v7, 0LL);
}


void __fastcall NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v8; // x1

  if ( (byte_4188422 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_UserDeleteRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_NoticeInfoComponent_userDeleteCallback__, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4188422 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent_userDeleteCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v6,
                                                         (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v8);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall NoticeInfoComponent__setCreditWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  struct System_String_o *WebViewAddress_26285648; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418841C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15363/*"WEB_VIEW_TITLE_CREDIT"*/, v4);
    byte_418841C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15363/*"WEB_VIEW_TITLE_CREDIT"*/, 0LL);
  this->fields.title = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26285648 = NetworkManager__getWebViewAddress_26285648(5, v12);
  this->fields.path = WebViewAddress_26285648;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26285648,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall NoticeInfoComponent__setHelpWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  struct System_String_o *WebViewAddress_26285648; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4188418 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15364/*"WEB_VIEW_TITLE_HELP"*/, v4);
    byte_4188418 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15364/*"WEB_VIEW_TITLE_HELP"*/, 0LL);
  this->fields.title = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26285648 = NetworkManager__getWebViewAddress_26285648(2, v12);
  this->fields.path = WebViewAddress_26285648;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26285648,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall NoticeInfoComponent__setInfomationWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  struct System_String_o *WebViewAddress_26285648; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4188417 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15365/*"WEB_VIEW_TITLE_INFOMATION"*/, v4);
    byte_4188417 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15365/*"WEB_VIEW_TITLE_INFOMATION"*/, 0LL);
  this->fields.title = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26285648 = NetworkManager__getWebViewAddress_26285648(0, v12);
  this->fields.path = WebViewAddress_26285648;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26285648,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall NoticeInfoComponent__setInquiryWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  struct System_String_o *WebViewAddress_26285648; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  System_Collections_IEnumerator_o *v21; // x1

  if ( (byte_4188419 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15362/*"WEB_VIEW_TITLE_CONTACT_US"*/, v4);
    byte_4188419 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15362/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0LL);
  this->fields.title = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26285648 = NetworkManager__getWebViewAddress_26285648(3, v12);
  this->fields.path = WebViewAddress_26285648;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26285648,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v21 = NoticeInfoComponent__WaitForSE(this, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
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

  if ( (byte_4188416 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188416 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v5 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  p_title = &this->fields.title;
  sub_B2C2F8((BattleServantConfConponent_o *)p_title, v5, v7, v8, v9, v10, v11, v12);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_title[1] = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_title + 1), v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall NoticeInfoComponent__setRightWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  struct System_String_o *WebViewAddress_26285648; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418841D & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15366/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, v4);
    byte_418841D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15366/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0LL);
  this->fields.title = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26285648 = NetworkManager__getWebViewAddress_26285648(6, v12);
  this->fields.path = WebViewAddress_26285648;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26285648,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall NoticeInfoComponent__setRulesWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  struct System_String_o *WebViewAddress_26285648; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418841B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15370/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, v4);
    byte_418841B = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15370/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0LL);
  this->fields.title = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26285648 = NetworkManager__getWebViewAddress_26285648(4, v12);
  this->fields.path = WebViewAddress_26285648;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26285648,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall NoticeInfoComponent__userDeleteCallback(
        NoticeInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NoticeInfoComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserDeleteReservationMaster_o *v10; // x20
  UserDeleteReservationEntity_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4188423 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___, result);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&UserDeleteReservationEntity_TypeInfo, v7);
    this = (NoticeInfoComponent_o *)sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    byte_4188423 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    return;
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0LL);
  this = (NoticeInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  v10 = (UserDeleteReservationMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (NoticeInfoComponent_o *)NetworkManager__get_UserId((const MethodInfo *)MasterData_WarQuestSelectionMaster);
  if ( !v10 )
LABEL_16:
    sub_B2C434(this, result);
  v11 = UserDeleteReservationMaster__GetEntity(v10, (int64_t)this, 0LL);
  if ( v11 )
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(v4, v11->fields.password, v12);
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
  __int64 v3; // x1
  __int64 v4; // x1
  unsigned int _1__state; // w8
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  UnityEngine_WaitForSeconds_o *v15; // x20
  BattleServantConfConponent_o *v16; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v2 = this;
  if ( (byte_418BAA1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    this = (NoticeInfoComponent__WaitForSE_d__11_o *)sub_B2C35C(&StringLiteral_9757/*"OPEN_BROWSER"*/, v4);
    byte_418BAA1 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this || (this = (NoticeInfoComponent__WaitForSE_d__11_o *)_4__this->fields.myRoomFsm) == 0LL )
        sub_B2C434(this, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9757/*"OPEN_BROWSER"*/, 0LL);
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
      sub_B2C2F8(p__2__current, 0LL, v6, v7, v8, v9, v10, v11);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
    }
    else
    {
      v15 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v15, 0.5, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v15;
      v16 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(v16, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
      *(_DWORD *)&v16[-1].fields.isOpenAfter = 2;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418BA9F & 1) == 0 )
  {
    sub_B2C35C(&NoticeInfoComponent___c_TypeInfo, v1);
    byte_418BA9F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(NoticeInfoComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)NoticeInfoComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall NoticeInfoComponent___c___ctor(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NoticeInfoComponent___c___SetReboot_b__23_0(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418BAA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_418BAA0 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  ManagementManager__reboot(Instance, 0, 0LL);
}