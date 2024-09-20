void __fastcall NoticeInfoComponent___cctor(const MethodInfo *method)
{
  struct NoticeInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_4A56B7C & 1) == 0 )
  {
    sub_1B885B0(&NoticeInfoComponent_TypeInfo);
    byte_4A56B7C = 1;
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
  Il2CppObject *Instance; // x20
  AccountDeleteConfirmDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A56B76 & 1) == 0 )
  {
    sub_1B885B0(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56B76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_1B887FC(AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v5, v6);
  CommonUI__OpenAccountDeleteConfirmDialog((CommonUI_o *)Instance, v4, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeletePasswordDialog(
        NoticeInfoComponent_o *this,
        System_String_o *password,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A56B7A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56B7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  CommonUI__OpenAccountDeletePasswordDialog((CommonUI_o *)Instance, 0, password, v6, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeleteReConfirmDialog(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  CommonConfirmDialog_ClickDelegate_o *v7; // x24
  __int64 v8; // x1
  NoticeInfoComponent_c *v9; // x0

  if ( (byte_4A56B77 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__);
    sub_1B885B0(&NoticeInfoComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_1989/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_1988/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_1990/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56B77 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1990/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1989/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1988/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0LL);
  v7 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0LL);
  v9 = NoticeInfoComponent_TypeInfo;
  if ( !NoticeInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo);
    v9 = NoticeInfoComponent_TypeInfo;
  }
  if ( !Instance )
    sub_1B8880C(v9, v8);
  CommonUI__OpenConfirmDialog_30494436(
    (CommonUI_o *)Instance,
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x19
  NoticeInfoComponent___c_c *v6; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v9; // x21
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4A56B7B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__);
    sub_1B885B0(&NoticeInfoComponent___c_TypeInfo);
    byte_4A56B7B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v6 = NoticeInfoComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( !NoticeInfoComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent___c_TypeInfo);
    v6 = NoticeInfoComponent___c_TypeInfo;
  }
  _9__23_0 = v6->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = NoticeInfoComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v9, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0LL);
    static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = _9__23_0;
    v6 = (NoticeInfoComponent___c_c *)sub_1B88554(&static_fields->__9__23_0, _9__23_0);
  }
  if ( !v5 )
    sub_1B8880C(v6, v3);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, _9__23_0, 0LL);
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
    sub_1B8880C(gameObject, v3);
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
  __int64 v3; // x20

  if ( (byte_4A56B6F & 1) == 0 )
  {
    sub_1B885B0(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
    byte_4A56B6F = 1;
  }
  v3 = sub_1B887FC(NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554(v3 + 32, this);
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

  if ( (byte_4A56B7D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_3558/*"CLICK_OK"*/);
    sub_1B885B0(&StringLiteral_3534/*"CLICK_CANCLE"*/);
    byte_4A56B7D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  v7 = &StringLiteral_3558/*"CLICK_OK"*/;
  if ( !isDecide )
    v7 = &StringLiteral_3534/*"CLICK_CANCLE"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0LL);
}


void __fastcall NoticeInfoComponent___OpenAccountDeletePasswordDialog_b__22_0(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  NoticeInfoComponent_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A56B7F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56B7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseAccountDeletePasswordDialog((CommonUI_o *)Instance, 0LL, 0LL);
  NoticeInfoComponent__SetReboot(v4, v5);
}


void __fastcall NoticeInfoComponent___OpenAccountDeleteReConfirmDialog_b__19_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A56B7E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_3534/*"CLICK_CANCLE"*/);
    byte_4A56B7E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(Instance, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3534/*"CLICK_CANCLE"*/, 0LL);
}


void __fastcall NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A56B74 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3605/*"CLOSE_WEBVIEW"*/);
    byte_4A56B74 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3605/*"CLOSE_WEBVIEW"*/, 0LL);
}


void __fastcall NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *path; // x19

  if ( (byte_4A56B75 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    byte_4A56B75 = 1;
  }
  path = this->fields.path;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__OpenURL(path, 0LL);
}


void __fastcall NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *title; // x20
  System_String_o *path; // x21
  System_Action_o *v5; // x22

  if ( (byte_4A56B73 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NoticeInfoComponent_onEndWebView__);
    sub_1B885B0(&WebViewManager_TypeInfo);
    byte_4A56B73 = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(title, path, v5, 0LL);
}


void __fastcall NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4A56B78 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_UserDeleteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_NoticeInfoComponent_userDeleteCallback__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56B78 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent_userDeleteCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall NoticeInfoComponent__setCreditWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  struct System_String_o *WebViewAddress_38491324; // x0

  if ( (byte_4A56B71 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15547/*"WEB_VIEW_TITLE_CREDIT"*/);
    byte_4A56B71 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15547/*"WEB_VIEW_TITLE_CREDIT"*/, 0LL);
  this->fields.title = v3;
  sub_1B88554(&this->fields.title, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38491324 = NetworkManager__getWebViewAddress_38491324(5, 0LL);
  this->fields.path = WebViewAddress_38491324;
  sub_1B88554(&this->fields.path, WebViewAddress_38491324);
}


void __fastcall NoticeInfoComponent__setHelpWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  struct System_String_o *WebViewAddress_38491324; // x0

  if ( (byte_4A56B6D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15548/*"WEB_VIEW_TITLE_HELP"*/);
    byte_4A56B6D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15548/*"WEB_VIEW_TITLE_HELP"*/, 0LL);
  this->fields.title = v3;
  sub_1B88554(&this->fields.title, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38491324 = NetworkManager__getWebViewAddress_38491324(2, 0LL);
  this->fields.path = WebViewAddress_38491324;
  sub_1B88554(&this->fields.path, WebViewAddress_38491324);
}


void __fastcall NoticeInfoComponent__setInfomationWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  struct System_String_o *WebViewAddress_38491324; // x0

  if ( (byte_4A56B6C & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15549/*"WEB_VIEW_TITLE_INFOMATION"*/);
    byte_4A56B6C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15549/*"WEB_VIEW_TITLE_INFOMATION"*/, 0LL);
  this->fields.title = v3;
  sub_1B88554(&this->fields.title, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38491324 = NetworkManager__getWebViewAddress_38491324(0, 0LL);
  this->fields.path = WebViewAddress_38491324;
  sub_1B88554(&this->fields.path, WebViewAddress_38491324);
}


void __fastcall NoticeInfoComponent__setInquiryWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  struct System_String_o *WebViewAddress_38491324; // x0
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4A56B6E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15546/*"WEB_VIEW_TITLE_CONTACT_US"*/);
    byte_4A56B6E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15546/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0LL);
  this->fields.title = v3;
  sub_1B88554(&this->fields.title, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38491324 = NetworkManager__getWebViewAddress_38491324(3, 0LL);
  this->fields.path = WebViewAddress_38491324;
  sub_1B88554(&this->fields.path, WebViewAddress_38491324);
  v6 = NoticeInfoComponent__WaitForSE(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall NoticeInfoComponent__setNoticeInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  void *v5; // x1
  void *v6; // x1

  if ( (byte_4A56B6B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56B6B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v5 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(&this->fields.title, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.path = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(&this->fields.path, v6);
}


void __fastcall NoticeInfoComponent__setRightWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  struct System_String_o *WebViewAddress_38491324; // x0

  if ( (byte_4A56B72 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15550/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/);
    byte_4A56B72 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15550/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0LL);
  this->fields.title = v3;
  sub_1B88554(&this->fields.title, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38491324 = NetworkManager__getWebViewAddress_38491324(6, 0LL);
  this->fields.path = WebViewAddress_38491324;
  sub_1B88554(&this->fields.path, WebViewAddress_38491324);
}


void __fastcall NoticeInfoComponent__setRulesWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  struct System_String_o *WebViewAddress_38491324; // x0

  if ( (byte_4A56B70 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15554/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/);
    byte_4A56B70 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15554/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0LL);
  this->fields.title = v3;
  sub_1B88554(&this->fields.title, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38491324 = NetworkManager__getWebViewAddress_38491324(4, 0LL);
  this->fields.path = WebViewAddress_38491324;
  sub_1B88554(&this->fields.path, WebViewAddress_38491324);
}


void __fastcall NoticeInfoComponent__userDeleteCallback(
        NoticeInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NoticeInfoComponent_o *v4; // x19
  Il2CppObject *MasterData_object; // x20
  UserDeleteReservationEntity_o *v6; // x0
  const MethodInfo *v7; // x2

  v4 = this;
  if ( (byte_4A56B79 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserDeleteReservationEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    this = (NoticeInfoComponent_o *)sub_1B885B0(&StringLiteral_3534/*"CLICK_CANCLE"*/);
    byte_4A56B79 = 1;
  }
  if ( !result )
    goto LABEL_15;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
    goto LABEL_13;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0LL);
  this = (NoticeInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (NoticeInfoComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_15:
    sub_1B8880C(this, result);
  v6 = UserDeleteReservationMaster__GetEntity((UserDeleteReservationMaster_o *)MasterData_object, (int64_t)this, 0LL);
  if ( v6 )
  {
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(v4, v6->fields.password, v7);
    return;
  }
LABEL_13:
  this = (NoticeInfoComponent_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3534/*"CLICK_CANCLE"*/, 0LL);
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
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **v8; // x19

  v2 = this;
  if ( (byte_4A56B82 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (NoticeInfoComponent__WaitForSE_d__11_o *)sub_1B885B0(&StringLiteral_9630/*"OPEN_BROWSER"*/);
    byte_4A56B82 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this || (this = (NoticeInfoComponent__WaitForSE_d__11_o *)_4__this->fields.myRoomFsm) == 0LL )
        sub_1B8880C(this, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9630/*"OPEN_BROWSER"*/, 0LL);
    }
    return 0;
  }
  else
  {
    v2->fields.__1__state = -1;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    if ( SoundManager__isBusyVoice(0LL, 0LL) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_1B88554(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
    else
    {
      v7 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v7, 0.5, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v7;
      v8 = &v2->fields.__2__current;
      sub_1B88554(v8, v7);
      *((_DWORD *)v8 - 2) = 2;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A56B80 & 1) == 0 )
  {
    sub_1B885B0(&NoticeInfoComponent___c_TypeInfo);
    byte_4A56B80 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(NoticeInfoComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  NoticeInfoComponent___c_TypeInfo->static_fields->__9 = (struct NoticeInfoComponent___c_o *)v1;
  sub_1B88554(NoticeInfoComponent___c_TypeInfo->static_fields, v1);
}


void __fastcall NoticeInfoComponent___c___ctor(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NoticeInfoComponent___c___SetReboot_b__23_0(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A56B81 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A56B81 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}