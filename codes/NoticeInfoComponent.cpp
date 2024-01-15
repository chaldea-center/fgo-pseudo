void __fastcall NoticeInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9358 & 1) == 0 )
  {
    sub_B16FFC(&NoticeInfoComponent_TypeInfo, v1);
    byte_40F9358 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  AccountDeleteConfirmDialog_ClickDelegate_o *v10; // x21

  if ( (byte_40F9352 & 1) == 0 )
  {
    sub_B16FFC(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40F9352 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                        AccountDeleteConfirmDialog_ClickDelegate_TypeInfo,
                                                        v6,
                                                        v7,
                                                        v8,
                                                        v9);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenAccountDeleteConfirmDialog(Instance, v10, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeletePasswordDialog(
        NoticeInfoComponent_o *this,
        System_String_o *password,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x22

  if ( (byte_40F9356 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, password);
    sub_B16FFC(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F9356 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenAccountDeletePasswordDialog(Instance, 0, password, v12, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  CommonConfirmDialog_ClickDelegate_o *v19; // x24
  NoticeInfoComponent_c *v20; // x0

  if ( (byte_40F9353 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__, v4);
    sub_B16FFC(&NoticeInfoComponent_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_1641/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, v7);
    sub_B16FFC(&StringLiteral_1640/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, v8);
    sub_B16FFC(&StringLiteral_1642/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F9353 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1642/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1641/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1640/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0LL);
  v19 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v15,
                                                 v16,
                                                 v17,
                                                 v18);
  CommonConfirmDialog_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0LL);
  v20 = NoticeInfoComponent_TypeInfo;
  if ( (BYTE3(NoticeInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo);
    v20 = NoticeInfoComponent_TypeInfo;
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenConfirmDialog_18237660(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v12,
    v13,
    v14,
    1,
    v19,
    v20->static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE,
    1,
    v20->static_fields->ACCOUNT_DELETE_RECONFIRM_DECIDE_FONT_SIZE,
    v20->static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE,
    0LL);
}


void __fastcall NoticeInfoComponent__SetReboot(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v11; // x8
  NoticeInfoComponent___c_c *v12; // x0
  float DEFAULT_FADE_TIME; // s8
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v16; // x21
  struct NoticeInfoComponent___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F9357 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__, v4);
    sub_B16FFC(&NoticeInfoComponent___c_TypeInfo, v5);
    byte_40F9357 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  v12 = NoticeInfoComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(NoticeInfoComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeInfoComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent___c_TypeInfo);
    v12 = NoticeInfoComponent___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__23_0 = static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(_9__23_0, v16, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0LL);
    v17 = NoticeInfoComponent___c_TypeInfo->static_fields;
    v17->__9__23_0 = _9__23_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v17->__9__23_0,
      (System_Int32_array **)_9__23_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__23_0, 0LL);
}


void __fastcall NoticeInfoComponent__Start(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    sub_B170D4();
  v4.fields.x = 1200.0;
  v4.fields.y = 0.0;
  v4.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v4, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NoticeInfoComponent__WaitForSE(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F934C & 1) == 0 )
  {
    sub_B16FFC(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo, method);
    byte_40F934C = 1;
  }
  v6 = sub_B170CC(NoticeInfoComponent__WaitForSE_d__11_TypeInfo, method, v2, v3, v4);
  NoticeInfoComponent__WaitForSE_d__11___ctor((NoticeInfoComponent__WaitForSE_d__11_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v9; // x8

  if ( (byte_40F9359 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&StringLiteral_3061/*"CLICK_OK"*/, v5);
    sub_B16FFC(&StringLiteral_3040/*"CLICK_CANCLE"*/, v6);
    byte_40F9359 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0LL, 0LL), (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_B170D4();
  }
  if ( isDecide )
    v9 = &StringLiteral_3061/*"CLICK_OK"*/;
  else
    v9 = &StringLiteral_3040/*"CLICK_CANCLE"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall NoticeInfoComponent___OpenAccountDeletePasswordDialog_b__22_0(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  NoticeInfoComponent_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40F935B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F935B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseAccountDeletePasswordDialog(Instance, 0LL, 0LL);
  NoticeInfoComponent__SetReboot(v3, v4);
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
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F935A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&StringLiteral_3040/*"CLICK_CANCLE"*/, v5);
    byte_40F935A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    NoticeInfoComponent__requestUserDelete(this, v7);
    return;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
LABEL_8:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3040/*"CLICK_CANCLE"*/, 0LL);
}


void __fastcall NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F9351 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3104/*"CLOSE_WEBVIEW"*/, method);
    byte_40F9351 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3104/*"CLOSE_WEBVIEW"*/, 0LL);
}


void __fastcall NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Application__OpenURL(this->fields.path, 0LL);
}


void __fastcall NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *title; // x19
  System_String_o *path; // x21
  System_Action_o *v10; // x22

  if ( (byte_40F9350 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_NoticeInfoComponent_onEndWebView__, v6);
    sub_B16FFC(&WebViewManager_TypeInfo, v7);
    byte_40F9350 = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(title, path, v10, 0LL);
}


void __fastcall NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F9354 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_UserDeleteRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_NoticeInfoComponent_userDeleteCallback__, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40F9354 = 1;
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3, v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent_userDeleteCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v9,
                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
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
  struct System_String_o *WebViewAddress_23699452; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F934E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15301/*"WEB_VIEW_TITLE_CREDIT"*/, v4);
    byte_40F934E = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15301/*"WEB_VIEW_TITLE_CREDIT"*/, 0LL);
  this->fields.title = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(5, v12);
  this->fields.path = WebViewAddress_23699452;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_23699452,
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
  struct System_String_o *WebViewAddress_23699452; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F934A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15302/*"WEB_VIEW_TITLE_HELP"*/, v4);
    byte_40F934A = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15302/*"WEB_VIEW_TITLE_HELP"*/, 0LL);
  this->fields.title = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(2, v12);
  this->fields.path = WebViewAddress_23699452;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_23699452,
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
  struct System_String_o *WebViewAddress_23699452; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F9349 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15303/*"WEB_VIEW_TITLE_INFOMATION"*/, v4);
    byte_40F9349 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15303/*"WEB_VIEW_TITLE_INFOMATION"*/, 0LL);
  this->fields.title = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(0, v12);
  this->fields.path = WebViewAddress_23699452;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_23699452,
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
  struct System_String_o *WebViewAddress_23699452; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  System_Collections_IEnumerator_o *v21; // x1

  if ( (byte_40F934B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15300/*"WEB_VIEW_TITLE_CONTACT_US"*/, v4);
    byte_40F934B = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15300/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0LL);
  this->fields.title = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(3, v12);
  this->fields.path = WebViewAddress_23699452;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_23699452,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v21 = NoticeInfoComponent__WaitForSE(this, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
}


void __fastcall NoticeInfoComponent__setNoticeInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **v4; // x1
  struct System_String_o **p_title; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F9348 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F9348 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v4 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  p_title = &this->fields.title;
  sub_B16F98((BattleServantConfConponent_o *)p_title, v4, v6, v7, v8, v9, v10, v11);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_title[1] = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)(p_title + 1), v12, v13, v14, v15, v16, v17, v18);
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
  struct System_String_o *WebViewAddress_23699452; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F934F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15304/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, v4);
    byte_40F934F = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15304/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0LL);
  this->fields.title = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(6, v12);
  this->fields.path = WebViewAddress_23699452;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_23699452,
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
  struct System_String_o *WebViewAddress_23699452; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F934D & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15308/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, v4);
    byte_40F934D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15308/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0LL);
  this->fields.title = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.title, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(4, v12);
  this->fields.path = WebViewAddress_23699452;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_23699452,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserDeleteReservationMaster_o *v11; // x20
  int64_t UserId; // x0
  UserDeleteReservationEntity_o *v13; // x0
  const MethodInfo *v14; // x2

  if ( (byte_40F9355 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___, result);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&UserDeleteReservationEntity_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v8);
    byte_40F9355 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
    return;
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  v11 = (UserDeleteReservationMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId((const MethodInfo *)MasterData_WarQuestSelectionMaster);
  if ( !v11 )
LABEL_16:
    sub_B170D4();
  v13 = UserDeleteReservationMaster__GetEntity(v11, UserId, 0LL);
  if ( v13 )
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(this, v13->fields.password, v14);
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
  __int64 v3; // x1
  __int64 v4; // x1
  unsigned int _1__state; // w8
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  PlayMakerFSM_o *myRoomFsm; // x0
  UnityEngine_WaitForSeconds_o *v17; // x20
  Il2CppObject **v18; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F8359 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9727/*"OPEN_BROWSER"*/, v4);
    byte_40F8359 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      if ( !_4__this || (myRoomFsm = _4__this->fields.myRoomFsm) == 0LL )
        sub_B170D4();
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_9727/*"OPEN_BROWSER"*/, 0LL);
    }
    return 0;
  }
  else
  {
    this->fields.__1__state = -1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    if ( SoundManager__isBusyVoice(0LL, 0LL) )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v7, v8, v9, v10, v11, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
    else
    {
      v17 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v6, v7, v8, v9);
      UnityEngine_WaitForSeconds___ctor(v17, 0.5, 0LL);
      this->fields.__2__current = (Il2CppObject *)v17;
      v18 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v18, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
      *((_DWORD *)v18 - 2) = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8357 & 1) == 0 )
  {
    sub_B16FFC(&NoticeInfoComponent___c_TypeInfo, v1);
    byte_40F8357 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(NoticeInfoComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)NoticeInfoComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall NoticeInfoComponent___c___ctor(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NoticeInfoComponent___c___SetReboot_b__23_0(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0

  if ( (byte_40F8358 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_40F8358 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  ManagementManager__reboot(Instance, 0, 0LL);
}