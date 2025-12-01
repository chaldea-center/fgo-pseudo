void NoticeInfoComponent___cctor(const MethodInfo *method)
{
  struct NoticeInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_4CC295A & 1) == 0 )
  {
    sub_1C713B0(&NoticeInfoComponent_TypeInfo);
    byte_4CC295A = 1;
  }
  static_fields = NoticeInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE = 0x180000001CLL;
  static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE = 24;
}


void NoticeInfoComponent___ctor(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NoticeInfoComponent__OpenAccountDeleteConfirmDialog(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  AccountDeleteConfirmDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CC2954 & 1) == 0 )
  {
    sub_1C713B0(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2954 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_1C715FC(AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0);
  if ( !Instance )
    sub_1C71608(v5, v6);
  CommonUI__OpenAccountDeleteConfirmDialog((CommonUI_o *)Instance, v4, 0);
}


void NoticeInfoComponent__OpenAccountDeletePasswordDialog(
        NoticeInfoComponent_o *this,
        System_String_o *password,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CC2958 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2958 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0);
  if ( !Instance )
    sub_1C71608(v7, v8);
  CommonUI__OpenAccountDeletePasswordDialog((CommonUI_o *)Instance, 0, password, v6, 0);
}


void NoticeInfoComponent__OpenAccountDeleteReConfirmDialog(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  CommonConfirmDialog_ClickDelegate_o *v7; // x24
  __int64 v8; // x1
  NoticeInfoComponent_c *v9; // x0

  if ( (byte_4CC2955 & 1) == 0 )
  {
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__);
    sub_1C713B0(&NoticeInfoComponent_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_1856/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_1855/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_1857/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2955 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1857/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1856/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1855/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0);
  v7 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0);
  v9 = NoticeInfoComponent_TypeInfo;
  if ( !NoticeInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo);
    v9 = NoticeInfoComponent_TypeInfo;
  }
  if ( !Instance )
    sub_1C71608(v9, v8);
  CommonUI__OpenConfirmDialog_31440768(
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
    0);
}


void NoticeInfoComponent__SetReboot(NoticeInfoComponent_o *this, const MethodInfo *method)
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC2959 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__);
    sub_1C713B0(&NoticeInfoComponent___c_TypeInfo);
    byte_4CC2959 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__23_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v9, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0);
    static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = _9__23_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__23_0,
      (int32_t)_9__23_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v5 )
    sub_1C71608(v6, v3);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, _9__23_0, 0);
}


void NoticeInfoComponent__Start(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C71608(gameObject, v3);
  }
  v4.fields.y = 0.0;
  v4.fields.z = 0.0;
  v4.fields.x = 1200.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v4, 0);
}


System_Collections_IEnumerator_o *NoticeInfoComponent__WaitForSE(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC294D & 1) == 0 )
  {
    sub_1C713B0(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
    byte_4CC294D = 1;
  }
  v3 = sub_1C715FC(NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void NoticeInfoComponent___OpenAccountDeleteConfirmDialog_b__18_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_4CC295B & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_3466/*"CLICK_OK"*/);
    sub_1C713B0(&StringLiteral_3438/*"CLICK_CANCLE"*/);
    byte_4CC295B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0) )
  {
    sub_1C71608(Instance, v6);
  }
  v7 = &StringLiteral_3466/*"CLICK_OK"*/;
  if ( !isDecide )
    v7 = &StringLiteral_3438/*"CLICK_CANCLE"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0);
}


void NoticeInfoComponent___OpenAccountDeletePasswordDialog_b__22_0(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  NoticeInfoComponent_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CC295D & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC295D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  CommonUI__CloseAccountDeletePasswordDialog((CommonUI_o *)Instance, 0, 0);
  NoticeInfoComponent__SetReboot(v4, v5);
}


void NoticeInfoComponent___OpenAccountDeleteReConfirmDialog_b__19_0(
        NoticeInfoComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CC295C & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_3438/*"CLICK_CANCLE"*/);
    byte_4CC295C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    NoticeInfoComponent__requestUserDelete(this, v6);
    return;
  }
  Instance = (CommonUI_o *)this->fields.myRoomFsm;
  if ( !Instance )
LABEL_8:
    sub_1C71608(Instance, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3438/*"CLICK_CANCLE"*/, 0);
}


void NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CC2952 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3520/*"CLOSE_WEBVIEW"*/);
    byte_4CC2952 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3520/*"CLOSE_WEBVIEW"*/, 0);
}


void NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *path; // x19

  if ( (byte_4CC2953 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    byte_4CC2953 = 1;
  }
  path = this->fields.path;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__OpenURL(path, 0);
}


void NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *title; // x20
  System_String_o *path; // x21
  System_Action_o *v5; // x22

  if ( (byte_4CC2951 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_NoticeInfoComponent_onEndWebView__);
    sub_1C713B0(&WebViewManager_TypeInfo);
    byte_4CC2951 = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(title, path, v5, 0);
}


void NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4CC2956 & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_UserDeleteRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_NoticeInfoComponent_userDeleteCallback__);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CC2956 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_NoticeInfoComponent_userDeleteCallback__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_object )
    sub_1C71608(0, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void NoticeInfoComponent__setCreditWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_String_o *WebViewAddress_41656216; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC294F & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15552/*"WEB_VIEW_TITLE_CREDIT"*/);
    byte_4CC294F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15552/*"WEB_VIEW_TITLE_CREDIT"*/, 0);
  this->fields.title = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_41656216 = NetworkManager__getWebViewAddress_41656216(5, 0);
  this->fields.path = WebViewAddress_41656216;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_41656216,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void NoticeInfoComponent__setHelpWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_String_o *WebViewAddress_41656216; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC294B & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15553/*"WEB_VIEW_TITLE_HELP"*/);
    byte_4CC294B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15553/*"WEB_VIEW_TITLE_HELP"*/, 0);
  this->fields.title = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_41656216 = NetworkManager__getWebViewAddress_41656216(2, 0);
  this->fields.path = WebViewAddress_41656216;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_41656216,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void NoticeInfoComponent__setInfomationWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_String_o *WebViewAddress_41656216; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC294A & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15554/*"WEB_VIEW_TITLE_INFOMATION"*/);
    byte_4CC294A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15554/*"WEB_VIEW_TITLE_INFOMATION"*/, 0);
  this->fields.title = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_41656216 = NetworkManager__getWebViewAddress_41656216(0, 0);
  this->fields.path = WebViewAddress_41656216;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_41656216,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void NoticeInfoComponent__setInquiryWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_String_o *WebViewAddress_41656216; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4CC294C & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15551/*"WEB_VIEW_TITLE_CONTACT_US"*/);
    byte_4CC294C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15551/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0);
  this->fields.title = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_41656216 = NetworkManager__getWebViewAddress_41656216(3, 0);
  this->fields.path = WebViewAddress_41656216;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_41656216,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = NoticeInfoComponent__WaitForSE(this, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v18, 0);
}


void NoticeInfoComponent__setNoticeInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CC2949 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2949 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, v5, v6, v7, v8, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.path = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.path, v12, v13, v14, v15, v16, v17, v18);
}


void NoticeInfoComponent__setRightWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_String_o *WebViewAddress_41656216; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC2950 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15555/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/);
    byte_4CC2950 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15555/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0);
  this->fields.title = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_41656216 = NetworkManager__getWebViewAddress_41656216(6, 0);
  this->fields.path = WebViewAddress_41656216;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_41656216,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void NoticeInfoComponent__setRulesWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_String_o *WebViewAddress_41656216; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC294E & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15559/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/);
    byte_4CC294E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_15559/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0);
  this->fields.title = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_41656216 = NetworkManager__getWebViewAddress_41656216(4, 0);
  this->fields.path = WebViewAddress_41656216;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_41656216,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void NoticeInfoComponent__userDeleteCallback(
        NoticeInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NoticeInfoComponent_o *v4; // x19
  Il2CppObject *MasterData_object; // x20
  UserDeleteReservationEntity_o *v6; // x0
  const MethodInfo *v7; // x2

  v4 = this;
  if ( (byte_4CC2957 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&UserDeleteReservationEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    this = (NoticeInfoComponent_o *)sub_1C713B0(&StringLiteral_3438/*"CLICK_CANCLE"*/);
    byte_4CC2957 = 1;
  }
  if ( !result )
    goto LABEL_19;
  if ( System_String__Equals_64067044(result, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
    goto LABEL_17;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0);
  this = (NoticeInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  this = (NoticeInfoComponent_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (NoticeInfoComponent_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_19:
    sub_1C71608(this, result);
  v6 = UserDeleteReservationMaster__GetEntity(
         (UserDeleteReservationMaster_o *)MasterData_object,
         *(_QWORD *)(this[3].fields.m_CachedPtr + 64),
         0);
  if ( v6 )
  {
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(v4, v6->fields.password, v7);
    return;
  }
LABEL_17:
  this = (NoticeInfoComponent_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3438/*"CLICK_CANCLE"*/, 0);
}


void NoticeInfoComponent__WaitForSE_d__11___ctor(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool NoticeInfoComponent__WaitForSE_d__11__MoveNext(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  NoticeInfoComponent__WaitForSE_d__11_o *v2; // x19
  unsigned int _1__state; // w8
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  UnityEngine_WaitForSeconds_o *v13; // x20
  GrandQuestFolderBoardItem_o *v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  v2 = this;
  if ( (byte_4CC2960 & 1) == 0 )
  {
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (NoticeInfoComponent__WaitForSE_d__11_o *)sub_1C713B0(&StringLiteral_9637/*"OPEN_BROWSER"*/);
    byte_4CC2960 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this || (this = (NoticeInfoComponent__WaitForSE_d__11_o *)_4__this->fields.myRoomFsm) == 0 )
        sub_1C71608(this, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9637/*"OPEN_BROWSER"*/, 0);
    }
    return 0;
  }
  else
  {
    v2->fields.__1__state = -1;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    if ( SoundManager__isBusyVoice(0, 0) )
    {
      v2->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C71354(p__2__current, 0, v4, v5, v6, v7, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    }
    else
    {
      v13 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v13, 0.5, 0);
      v2->fields.__2__current = (Il2CppObject *)v13;
      v14 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C71354(v14, (int32_t)v13, v15, v16, v17, v18, v19, v20);
      LODWORD(v14[-1].fields._ClosedMessage_k__BackingField) = 2;
      return 1;
    }
  }
  return result;
}


Il2CppObject *NoticeInfoComponent__WaitForSE_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn NoticeInfoComponent__WaitForSE_d__11__System_Collections_IEnumerator_Reset(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *NoticeInfoComponent__WaitForSE_d__11__System_Collections_IEnumerator_get_Current(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void NoticeInfoComponent__WaitForSE_d__11__System_IDisposable_Dispose(
        NoticeInfoComponent__WaitForSE_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void NoticeInfoComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC295E & 1) == 0 )
  {
    sub_1C713B0(&NoticeInfoComponent___c_TypeInfo);
    byte_4CC295E = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(NoticeInfoComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  NoticeInfoComponent___c_TypeInfo->static_fields->__9 = (struct NoticeInfoComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)NoticeInfoComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NoticeInfoComponent___c___ctor(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void NoticeInfoComponent___c___SetReboot_b__23_0(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC295F & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CC295F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}