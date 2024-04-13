void __fastcall NoticeInfoComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E91B2 & 1) == 0 )
  {
    sub_B5D5C4(&NoticeInfoComponent_TypeInfo, v1, v2, v3);
    byte_42E91B2 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  AccountDeleteConfirmDialog_ClickDelegate_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E91AC & 1) == 0 )
  {
    sub_B5D5C4(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E91AC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_B5D694(AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__OpenAccountDeleteConfirmDialog(Instance, v12, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeletePasswordDialog(
        NoticeInfoComponent_o *this,
        System_String_o *password,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E91B0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)password, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E91B0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__OpenAccountDeletePasswordDialog(Instance, 0, password, v13, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeleteReConfirmDialog(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  CommonUI_o *Instance; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  CommonConfirmDialog_ClickDelegate_o *v33; // x24
  __int64 v34; // x1
  NoticeInfoComponent_c *v35; // x0

  if ( (byte_42E91AD & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__, v8, v9, v10);
    sub_B5D5C4(&NoticeInfoComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1664/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1663/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1665/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42E91AD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_1665/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_1664/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_1663/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0LL);
  v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v33,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0LL);
  v35 = NoticeInfoComponent_TypeInfo;
  if ( (BYTE3(NoticeInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo);
    v35 = NoticeInfoComponent_TypeInfo;
  }
  if ( !Instance )
    sub_B5D69C(v35, v34);
  CommonUI__OpenConfirmDialog_18202212(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v30,
    v31,
    v32,
    1,
    v33,
    v35->static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE,
    1,
    v35->static_fields->ACCOUNT_DELETE_RECONFIRM_DECIDE_FONT_SIZE,
    v35->static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE,
    0LL);
}


void __fastcall NoticeInfoComponent__SetReboot(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v18; // x8
  NoticeInfoComponent___c_c *v19; // x0
  float DEFAULT_FADE_TIME; // s8
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v23; // x21
  struct NoticeInfoComponent___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42E91B1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__, v10, v11, v12);
    sub_B5D5C4(&NoticeInfoComponent___c_TypeInfo, v13, v14, v15);
    byte_42E91B1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  v19 = NoticeInfoComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(NoticeInfoComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeInfoComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent___c_TypeInfo);
    v19 = NoticeInfoComponent___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__23_0 = static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v23, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0LL);
    v24 = NoticeInfoComponent___c_TypeInfo->static_fields;
    v24->__9__23_0 = _9__23_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v24->__9__23_0,
      (System_Int32_array **)_9__23_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !Instance )
    sub_B5D69C(v19, v16);
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
    sub_B5D69C(gameObject, v3);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E91A6 & 1) == 0 )
  {
    sub_B5D5C4(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E91A6 = 1;
  }
  v5 = sub_B5D694(NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
  NoticeInfoComponent__WaitForSE_d__11___ctor((NoticeInfoComponent__WaitForSE_d__11_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall NoticeInfoComponent___OpenAccountDeleteConfirmDialog_b__18_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  __int64 *v14; // x8

  if ( (byte_42E91B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3132/*"CLICK_OK"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3108/*"CLICK_CANCLE"*/, v9, v10, v11);
    byte_42E91B3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_B5D69C(Instance, v13);
  }
  if ( isDecide )
    v14 = &StringLiteral_3132/*"CLICK_OK"*/;
  else
    v14 = &StringLiteral_3108/*"CLICK_CANCLE"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v14, 0LL);
}


void __fastcall NoticeInfoComponent___OpenAccountDeletePasswordDialog_b__22_0(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  NoticeInfoComponent_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E91B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E91B5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseAccountDeletePasswordDialog(Instance, 0LL, 0LL);
  NoticeInfoComponent__SetReboot(v6, v7);
}


void __fastcall NoticeInfoComponent___OpenAccountDeleteReConfirmDialog_b__19_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CommonUI_o *Instance; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42E91B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3108/*"CLICK_CANCLE"*/, v6, v7, v8);
    byte_42E91B4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    NoticeInfoComponent__requestUserDelete(this, v10);
    return;
  }
  Instance = (CommonUI_o *)this->fields.myRoomFsm;
  if ( !Instance )
LABEL_8:
    sub_B5D69C(Instance, v10);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3108/*"CLICK_CANCLE"*/, 0LL);
}


void __fastcall NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E91AB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3178/*"CLOSE_WEBVIEW"*/, (_DWORD)method, v2, v3);
    byte_42E91AB = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3178/*"CLOSE_WEBVIEW"*/, 0LL);
}


void __fastcall NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Application__OpenURL(this->fields.path, 0LL);
}


void __fastcall NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *title; // x19
  System_String_o *path; // x21
  System_Action_o *v13; // x22

  if ( (byte_42E91AA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NoticeInfoComponent_onEndWebView__, v5, v6, v7);
    sub_B5D5C4(&WebViewManager_TypeInfo, v8, v9, v10);
    byte_42E91AA = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(title, path, v13, 0LL);
}


void __fastcall NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
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
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1

  if ( (byte_42E91AE & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserDeleteRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_NoticeInfoComponent_userDeleteCallback__, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    byte_42E91AE = 1;
  }
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent_userDeleteCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v14,
                                                         (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v16);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall NoticeInfoComponent__setCreditWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  struct System_String_o *WebViewAddress_26091648; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E91A8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15553/*"WEB_VIEW_TITLE_CREDIT"*/, v8, v9, v10);
    byte_42E91A8 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15553/*"WEB_VIEW_TITLE_CREDIT"*/, 0LL);
  this->fields.title = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.title,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(5, v18);
  this->fields.path = WebViewAddress_26091648;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26091648,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall NoticeInfoComponent__setHelpWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  struct System_String_o *WebViewAddress_26091648; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E91A4 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15554/*"WEB_VIEW_TITLE_HELP"*/, v8, v9, v10);
    byte_42E91A4 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15554/*"WEB_VIEW_TITLE_HELP"*/, 0LL);
  this->fields.title = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.title,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(2, v18);
  this->fields.path = WebViewAddress_26091648;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26091648,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall NoticeInfoComponent__setInfomationWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  struct System_String_o *WebViewAddress_26091648; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E91A3 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15555/*"WEB_VIEW_TITLE_INFOMATION"*/, v8, v9, v10);
    byte_42E91A3 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15555/*"WEB_VIEW_TITLE_INFOMATION"*/, 0LL);
  this->fields.title = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.title,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(0, v18);
  this->fields.path = WebViewAddress_26091648;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26091648,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall NoticeInfoComponent__setInquiryWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  struct System_String_o *WebViewAddress_26091648; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  System_Collections_IEnumerator_o *v27; // x1

  if ( (byte_42E91A5 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15552/*"WEB_VIEW_TITLE_CONTACT_US"*/, v8, v9, v10);
    byte_42E91A5 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15552/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0LL);
  this->fields.title = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.title,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(3, v18);
  this->fields.path = WebViewAddress_26091648;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26091648,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v27 = NoticeInfoComponent__WaitForSE(this, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
}


void __fastcall NoticeInfoComponent__setNoticeInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_Int32_array **v7; // x1
  struct System_String_o **p_title; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E91A2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E91A2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v7 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  p_title = &this->fields.title;
  sub_B5D560((BattleServantConfConponent_o *)p_title, v7, v9, v10, v11, v12, v13, v14);
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_title[1] = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)(p_title + 1), v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall NoticeInfoComponent__setRightWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  struct System_String_o *WebViewAddress_26091648; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E91A9 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15556/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, v8, v9, v10);
    byte_42E91A9 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15556/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0LL);
  this->fields.title = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.title,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(6, v18);
  this->fields.path = WebViewAddress_26091648;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26091648,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall NoticeInfoComponent__setRulesWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  struct System_String_o *WebViewAddress_26091648; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E91A7 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15560/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, v8, v9, v10);
    byte_42E91A7 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15560/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0LL);
  this->fields.title = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.title,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(4, v18);
  this->fields.path = WebViewAddress_26091648;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.path,
    (System_Int32_array **)WebViewAddress_26091648,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall NoticeInfoComponent__userDeleteCallback(
        NoticeInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  NoticeInfoComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserDeleteReservationMaster_o *v19; // x20
  UserDeleteReservationEntity_o *v20; // x0
  const MethodInfo *v21; // x2

  v5 = this;
  if ( (byte_42E91AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&UserDeleteReservationEntity_TypeInfo, v12, v13, v14);
    this = (NoticeInfoComponent_o *)sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    byte_42E91AF = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    return;
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0LL);
  this = (NoticeInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  v19 = (UserDeleteReservationMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (NoticeInfoComponent_o *)NetworkManager__get_UserId((const MethodInfo *)MasterData_WarQuestSelectionMaster);
  if ( !v19 )
LABEL_16:
    sub_B5D69C(this, result);
  v20 = UserDeleteReservationMaster__GetEntity(v19, (int64_t)this, 0LL);
  if ( v20 )
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(v5, v20->fields.password, v21);
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
  int v2; // w2
  __int64 v3; // x3
  NoticeInfoComponent__WaitForSE_d__11_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  unsigned int _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **v16; // x19

  v4 = this;
  if ( (byte_42E5A62 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v5, v6, v7);
    this = (NoticeInfoComponent__WaitForSE_d__11_o *)sub_B5D5C4(&StringLiteral_9855/*"OPEN_BROWSER"*/, v8, v9, v10);
    byte_42E5A62 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = v4->fields.__4__this;
      v4->fields.__1__state = -1;
      if ( !_4__this || (this = (NoticeInfoComponent__WaitForSE_d__11_o *)_4__this->fields.myRoomFsm) == 0LL )
        sub_B5D69C(this, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9855/*"OPEN_BROWSER"*/, 0LL);
    }
    return 0;
  }
  else
  {
    v4->fields.__1__state = -1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    if ( SoundManager__isBusyVoice(0LL, 0LL) )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
    else
    {
      v15 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v15, 0.5, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v15;
      v16 = &v4->fields.__2__current;
      sub_B5D560(v16);
      *((_DWORD *)v16 - 2) = 2;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A60 & 1) == 0 )
  {
    sub_B5D5C4(&NoticeInfoComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5A60 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(NoticeInfoComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct NoticeInfoComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall NoticeInfoComponent___c___ctor(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NoticeInfoComponent___c___SetReboot_b__23_0(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ManagementManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5A61 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5A61 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ManagementManager__reboot(Instance, 0, 0LL);
}