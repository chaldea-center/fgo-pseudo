void __fastcall NoticeInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct NoticeInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_4B11B71 & 1) == 0 )
  {
    sub_1BCA7E0(&NoticeInfoComponent_TypeInfo, v1, v2);
    byte_4B11B71 = 1;
  }
  static_fields = NoticeInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE = 0x180000001CLL;
  static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE = 24;
}


void __fastcall NoticeInfoComponent___ctor(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeleteConfirmDialog(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  AccountDeleteConfirmDialog_ClickDelegate_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B11B6B & 1) == 0 )
  {
    sub_1BCA7E0(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B11B6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        AccountDeleteConfirmDialog_ClickDelegate_TypeInfo,
                                                        v9,
                                                        v10,
                                                        v11);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__OpenAccountDeleteConfirmDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeletePasswordDialog(
        NoticeInfoComponent_o *this,
        System_String_o *password,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B11B6F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, password, method);
    sub_1BCA7E0(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B11B6F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__OpenAccountDeletePasswordDialog((CommonUI_o *)Instance, 0, password, v13, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeleteReConfirmDialog(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  CommonConfirmDialog_ClickDelegate_o *v28; // x24
  __int64 v29; // x1
  NoticeInfoComponent_c *v30; // x0

  if ( (byte_4B11B6C & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__, v6, v7);
    sub_1BCA7E0(&NoticeInfoComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_1986/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1985/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1987/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B11B6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_1987/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1986/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_1985/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0LL);
  v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v25, v26, v27);
  CommonConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0LL);
  v30 = NoticeInfoComponent_TypeInfo;
  if ( !NoticeInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo, v29);
    v30 = NoticeInfoComponent_TypeInfo;
  }
  if ( !Instance )
    sub_1BCAA3C(v30, v29);
  CommonUI__OpenConfirmDialog_30766760(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v22,
    v23,
    v24,
    1,
    v28,
    v30->static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE,
    1,
    v30->static_fields->ACCOUNT_DELETE_RECONFIRM_DECIDE_FONT_SIZE,
    v30->static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE,
    0LL);
}


void __fastcall NoticeInfoComponent__SetReboot(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  NoticeInfoComponent___c_c *v17; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v20; // x21
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B11B70 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__, v7, v8);
    sub_1BCA7E0(&NoticeInfoComponent___c_TypeInfo, v9, v10);
    byte_4B11B70 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v12);
    v15 = AvalonSceneManager_TypeInfo;
  }
  v17 = NoticeInfoComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  if ( !NoticeInfoComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent___c_TypeInfo, v12);
    v17 = NoticeInfoComponent___c_TypeInfo;
  }
  _9__23_0 = v17->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v12);
      v17 = NoticeInfoComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(_9__23_0, v20, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0LL);
    static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = _9__23_0;
    v17 = (NoticeInfoComponent___c_c *)sub_1BCA784(&static_fields->__9__23_0, _9__23_0);
  }
  if ( !v16 )
    sub_1BCAA3C(v17, v12);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, _9__23_0, 0LL);
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
    sub_1BCAA3C(gameObject, v3);
  }
  v4.fields.y = 0.0;
  v4.fields.z = 0.0;
  v4.fields.x = 1200.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v4, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NoticeInfoComponent__WaitForSE(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20

  if ( (byte_4B11B64 & 1) == 0 )
  {
    sub_1BCA7E0(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo, method, v2);
    byte_4B11B64 = 1;
  }
  v5 = sub_1BCAA2C(NoticeInfoComponent__WaitForSE_d__11_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784(v5 + 32, this);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeInfoComponent___OpenAccountDeleteConfirmDialog_b__18_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  __int64 *v11; // x8

  if ( (byte_4B11B72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&StringLiteral_3584/*"CLICK_OK"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_3560/*"CLICK_CANCLE"*/, v7, v8);
    byte_4B11B72 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(Instance, v10);
  }
  v11 = &StringLiteral_3584/*"CLICK_OK"*/;
  if ( !isDecide )
    v11 = &StringLiteral_3560/*"CLICK_CANCLE"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v11, 0LL);
}


void __fastcall NoticeInfoComponent___OpenAccountDeletePasswordDialog_b__22_0(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  NoticeInfoComponent_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B11B74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11B74 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountDeletePasswordDialog((CommonUI_o *)Instance, 0LL, 0LL);
  NoticeInfoComponent__SetReboot(v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeInfoComponent___OpenAccountDeleteReConfirmDialog_b__19_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B11B73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&StringLiteral_3560/*"CLICK_CANCLE"*/, v5, v6);
    byte_4B11B73 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    NoticeInfoComponent__requestUserDelete(this, v8);
    return;
  }
  Instance = (CommonUI_o *)this->fields.myRoomFsm;
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(Instance, v8);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3560/*"CLICK_CANCLE"*/, 0LL);
}


void __fastcall NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11B69 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3635/*"CLOSE_WEBVIEW"*/, method, v2);
    byte_4B11B69 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3635/*"CLOSE_WEBVIEW"*/, 0LL);
}


void __fastcall NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *path; // x19

  if ( (byte_4B11B6A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    byte_4B11B6A = 1;
  }
  path = this->fields.path;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  UnityEngine_Application__OpenURL(path, 0LL);
}


void __fastcall NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *title; // x20
  System_String_o *path; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x1

  if ( (byte_4B11B68 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_NoticeInfoComponent_onEndWebView__, v5, v6);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v7, v8);
    byte_4B11B68 = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v12);
  WebViewManager__OpenView(title, path, v11, 0LL);
}


void __fastcall NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_4B11B6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserDeleteRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NoticeInfoComponent_userDeleteCallback__, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B11B6D = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent_userDeleteCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall NoticeInfoComponent__setCreditWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_String_o *WebViewAddress_39282648; // x0

  if ( (byte_4B11B66 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_15714/*"WEB_VIEW_TITLE_CREDIT"*/, v6, v7);
    byte_4B11B66 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15714/*"WEB_VIEW_TITLE_CREDIT"*/, 0LL);
  this->fields.title = v8;
  sub_1BCA784(&this->fields.title, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(5, 0LL);
  this->fields.path = WebViewAddress_39282648;
  sub_1BCA784(&this->fields.path, WebViewAddress_39282648);
}


void __fastcall NoticeInfoComponent__setHelpWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_String_o *WebViewAddress_39282648; // x0

  if ( (byte_4B11B62 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_15715/*"WEB_VIEW_TITLE_HELP"*/, v6, v7);
    byte_4B11B62 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15715/*"WEB_VIEW_TITLE_HELP"*/, 0LL);
  this->fields.title = v8;
  sub_1BCA784(&this->fields.title, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(2, 0LL);
  this->fields.path = WebViewAddress_39282648;
  sub_1BCA784(&this->fields.path, WebViewAddress_39282648);
}


void __fastcall NoticeInfoComponent__setInfomationWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_String_o *WebViewAddress_39282648; // x0

  if ( (byte_4B11B61 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_15716/*"WEB_VIEW_TITLE_INFOMATION"*/, v6, v7);
    byte_4B11B61 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15716/*"WEB_VIEW_TITLE_INFOMATION"*/, 0LL);
  this->fields.title = v8;
  sub_1BCA784(&this->fields.title, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(0, 0LL);
  this->fields.path = WebViewAddress_39282648;
  sub_1BCA784(&this->fields.path, WebViewAddress_39282648);
}


void __fastcall NoticeInfoComponent__setInquiryWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_String_o *WebViewAddress_39282648; // x0
  const MethodInfo *v11; // x1
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_4B11B63 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_15713/*"WEB_VIEW_TITLE_CONTACT_US"*/, v6, v7);
    byte_4B11B63 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15713/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0LL);
  this->fields.title = v8;
  sub_1BCA784(&this->fields.title, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(3, 0LL);
  this->fields.path = WebViewAddress_39282648;
  sub_1BCA784(&this->fields.path, WebViewAddress_39282648);
  v12 = NoticeInfoComponent__WaitForSE(this, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall NoticeInfoComponent__setNoticeInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  void *v6; // x1
  void *v7; // x1

  if ( (byte_4B11B60 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11B60 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v6 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.title, v6);
  v7 = StringLiteral_1/*""*/;
  this->fields.path = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.path, v7);
}


void __fastcall NoticeInfoComponent__setRightWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_String_o *WebViewAddress_39282648; // x0

  if ( (byte_4B11B67 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_15717/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, v6, v7);
    byte_4B11B67 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15717/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0LL);
  this->fields.title = v8;
  sub_1BCA784(&this->fields.title, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(6, 0LL);
  this->fields.path = WebViewAddress_39282648;
  sub_1BCA784(&this->fields.path, WebViewAddress_39282648);
}


void __fastcall NoticeInfoComponent__setRulesWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_String_o *WebViewAddress_39282648; // x0

  if ( (byte_4B11B65 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_15721/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, v6, v7);
    byte_4B11B65 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15721/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0LL);
  this->fields.title = v8;
  sub_1BCA784(&this->fields.title, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(4, 0LL);
  this->fields.path = WebViewAddress_39282648;
  sub_1BCA784(&this->fields.path, WebViewAddress_39282648);
}


void __fastcall NoticeInfoComponent__userDeleteCallback(
        NoticeInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NoticeInfoComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  UserDeleteReservationEntity_o *v17; // x0
  const MethodInfo *v18; // x2

  v4 = this;
  if ( (byte_4B11B6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___, result, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&UserDeleteReservationEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    this = (NoticeInfoComponent_o *)sub_1BCA7E0(&StringLiteral_3560/*"CLICK_CANCLE"*/, v13, v14);
    byte_4B11B6E = 1;
  }
  if ( !result )
    goto LABEL_15;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    goto LABEL_13;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo, result);
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0LL);
  this = (NoticeInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  this = (NoticeInfoComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_15:
    sub_1BCAA3C(this, result);
  v17 = UserDeleteReservationMaster__GetEntity((UserDeleteReservationMaster_o *)MasterData_object, (int64_t)this, 0LL);
  if ( v17 )
  {
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(v4, v17->fields.password, v18);
    return;
  }
LABEL_13:
  this = (NoticeInfoComponent_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3560/*"CLICK_CANCLE"*/, 0LL);
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
  __int64 v2; // x2
  NoticeInfoComponent__WaitForSE_d__11_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned int _1__state; // w8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **v16; // x19

  v3 = this;
  if ( (byte_4B11B77 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v4, v5);
    this = (NoticeInfoComponent__WaitForSE_d__11_o *)sub_1BCA7E0(&StringLiteral_9763/*"OPEN_BROWSER"*/, v6, v7);
    byte_4B11B77 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = v3->fields.__4__this;
      v3->fields.__1__state = -1;
      if ( !_4__this || (this = (NoticeInfoComponent__WaitForSE_d__11_o *)_4__this->fields.myRoomFsm) == 0LL )
        sub_1BCAA3C(this, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9763/*"OPEN_BROWSER"*/, 0LL);
    }
    return 0;
  }
  else
  {
    v3->fields.__1__state = -1;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    if ( SoundManager__isBusyVoice(0LL, 0LL) )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
    else
    {
      v15 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v9, v10, v11);
      UnityEngine_WaitForSeconds___ctor(v15, 0.5, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v15;
      v16 = &v3->fields.__2__current;
      sub_1BCA784(v16, v15);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19

  if ( (byte_4B11B75 & 1) == 0 )
  {
    sub_1BCA7E0(&NoticeInfoComponent___c_TypeInfo, v1, v2);
    byte_4B11B75 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(NoticeInfoComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  NoticeInfoComponent___c_TypeInfo->static_fields->__9 = (struct NoticeInfoComponent___c_o *)v4;
  sub_1BCA784(NoticeInfoComponent___c_TypeInfo->static_fields, v4);
}


void __fastcall NoticeInfoComponent___c___ctor(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NoticeInfoComponent___c___SetReboot_b__23_0(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11B76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method, v2);
    byte_4B11B76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}