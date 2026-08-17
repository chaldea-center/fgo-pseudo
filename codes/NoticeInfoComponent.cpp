void NoticeInfoComponent___cctor(const MethodInfo *method)
{
  struct NoticeInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_596BB71 & 1) == 0 )
  {
    sub_2213A60(&NoticeInfoComponent_TypeInfo);
    byte_596BB71 = 1;
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

  if ( (byte_596BB6B & 1) == 0 )
  {
    sub_2213A60(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BB6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_2213CCC(AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
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

  if ( (byte_596BB6F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BB6F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0);
  if ( !Instance )
    sub_2213CDC(v7, v8);
  CommonUI__OpenAccountDeletePasswordDialog((CommonUI_o *)Instance, 0, password, v6, 0);
}


void NoticeInfoComponent__OpenAccountDeleteReConfirmDialog(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  CommonConfirmDialog_ClickDelegate_o *v9; // x24
  __int64 v10; // x1
  __int64 v11; // x2
  NoticeInfoComponent_c *v12; // x0

  if ( (byte_596BB6C & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__);
    sub_2213A60(&NoticeInfoComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_1943/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_1942/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_1944/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BB6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1944/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1943/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1942/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0);
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0);
  v12 = NoticeInfoComponent_TypeInfo;
  if ( !*(&NoticeInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo, v10, v11);
  if ( !Instance )
    sub_2213CDC(v12, v10);
  CommonUI__OpenConfirmDialog_37373676(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v6,
    v7,
    v8,
    1,
    v9,
    NoticeInfoComponent_TypeInfo->static_fields->ACCOUNT_DELETE_RECONFIRM_MESSAGE_FONT_SIZE,
    1,
    NoticeInfoComponent_TypeInfo->static_fields->ACCOUNT_DELETE_RECONFIRM_DECIDE_FONT_SIZE,
    NoticeInfoComponent_TypeInfo->static_fields->ACCOUNT_DELETE_RECONFIRM_CANCEL_FONT_SIZE,
    0);
}


void NoticeInfoComponent__SetReboot(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  NoticeInfoComponent___c_c *v7; // x0
  float DEFAULT_FADE_TIME; // s8
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v11; // x21
  struct NoticeInfoComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596BB70 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__);
    sub_2213A60(&NoticeInfoComponent___c_TypeInfo);
    byte_596BB70 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3, v4);
    v5 = AvalonSceneManager_TypeInfo;
  }
  v7 = NoticeInfoComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !*(&NoticeInfoComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent___c_TypeInfo, v3, v4);
    v7 = NoticeInfoComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__23_0 = static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v3, v4);
      static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v11, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0);
    v12 = NoticeInfoComponent___c_TypeInfo->static_fields;
    v12->__9__23_0 = _9__23_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__23_0, (int32_t)_9__23_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !v6 )
    sub_2213CDC(v7, v3);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__23_0, 0);
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
    sub_2213CDC(gameObject, v3);
  }
  v4.fields.y = 0.0;
  v4.fields.z = 0.0;
  v4.fields.x = 1200.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v4, 0);
}


System_Collections_IEnumerator_o *NoticeInfoComponent__WaitForSE(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596BB64 & 1) == 0 )
  {
    sub_2213A60(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
    byte_596BB64 = 1;
  }
  v3 = sub_2213CCC(NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_596BB72 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3612/*"CLICK_OK"*/);
    sub_2213A60(&StringLiteral_3583/*"CLICK_CANCLE"*/);
    byte_596BB72 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.myRoomFsm;
  if ( !isDecide )
  {
    if ( Instance )
    {
      v7 = &StringLiteral_3583/*"CLICK_CANCLE"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  v7 = &StringLiteral_3612/*"CLICK_OK"*/;
LABEL_9:
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

  if ( (byte_596BB74 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BB74 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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

  if ( (byte_596BB73 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3583/*"CLICK_CANCLE"*/);
    byte_596BB73 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_2213CDC(Instance, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCLE"*/, 0);
}


void NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596BB69 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3667/*"CLOSE_WEBVIEW"*/);
    byte_596BB69 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3667/*"CLOSE_WEBVIEW"*/, 0);
}


void NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *path; // x19

  if ( (byte_596BB6A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    byte_596BB6A = 1;
  }
  path = this->fields.path;
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  UnityEngine_Application__OpenURL(path, 0);
}


void NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *title; // x20
  System_String_o *path; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_596BB68 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_NoticeInfoComponent_onEndWebView__);
    sub_2213A60(&WebViewManager_TypeInfo);
    byte_596BB68 = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0);
  if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v6, v7);
  WebViewManager__OpenView(title, path, v5, 0);
}


void NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_596BB6D & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_UserDeleteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_NoticeInfoComponent_userDeleteCallback__);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596BB6D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_NoticeInfoComponent_userDeleteCallback__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void NoticeInfoComponent__setCreditWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_String_o *WebViewAddress_48359816; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596BB66 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_16160/*"WEB_VIEW_TITLE_CREDIT"*/);
    byte_596BB66 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_16160/*"WEB_VIEW_TITLE_CREDIT"*/, 0);
  this->fields.title = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(5, 0);
  this->fields.path = WebViewAddress_48359816;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_48359816,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void NoticeInfoComponent__setHelpWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_String_o *WebViewAddress_48359816; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596BB62 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_16161/*"WEB_VIEW_TITLE_HELP"*/);
    byte_596BB62 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_16161/*"WEB_VIEW_TITLE_HELP"*/, 0);
  this->fields.title = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(2, 0);
  this->fields.path = WebViewAddress_48359816;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_48359816,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void NoticeInfoComponent__setInfomationWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_String_o *WebViewAddress_48359816; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596BB61 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_16162/*"WEB_VIEW_TITLE_INFOMATION"*/);
    byte_596BB61 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_16162/*"WEB_VIEW_TITLE_INFOMATION"*/, 0);
  this->fields.title = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(0, 0);
  this->fields.path = WebViewAddress_48359816;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_48359816,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void NoticeInfoComponent__setInquiryWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_String_o *WebViewAddress_48359816; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  System_Collections_IEnumerator_o *v21; // x1

  if ( (byte_596BB63 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_16159/*"WEB_VIEW_TITLE_CONTACT_US"*/);
    byte_596BB63 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_16159/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0);
  this->fields.title = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(3, 0);
  this->fields.path = WebViewAddress_48359816;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_48359816,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v21 = NoticeInfoComponent__WaitForSE(this, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v21, 0);
}


void NoticeInfoComponent__setNoticeInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596BB60 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BB60 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, v5, v6, v7, v8, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.path = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.path, v12, v13, v14, v15, v16, v17, v18);
}


void NoticeInfoComponent__setRightWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_String_o *WebViewAddress_48359816; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596BB67 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_16163/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/);
    byte_596BB67 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_16163/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0);
  this->fields.title = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(6, 0);
  this->fields.path = WebViewAddress_48359816;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_48359816,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void NoticeInfoComponent__setRulesWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_String_o *WebViewAddress_48359816; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596BB65 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_16167/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/);
    byte_596BB65 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_16167/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0);
  this->fields.title = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(4, 0);
  this->fields.path = WebViewAddress_48359816;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.path,
    (int32_t)WebViewAddress_48359816,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void NoticeInfoComponent__userDeleteCallback(
        NoticeInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NoticeInfoComponent_o *v4; // x19
  __int64 v5; // x2
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  UserDeleteReservationEntity_o *v8; // x0
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_596BB6E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserDeleteReservationEntity_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    this = (NoticeInfoComponent_o *)sub_2213A60(&StringLiteral_3583/*"CLICK_CANCLE"*/);
    byte_596BB6E = 1;
  }
  if ( !result )
    goto LABEL_19;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
    goto LABEL_17;
  if ( !*(&UserDeleteReservationEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo, result, v5);
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0);
  this = (NoticeInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, result, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  this = (NoticeInfoComponent_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, result, v6);
    this = (NoticeInfoComponent_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_19:
    sub_2213CDC(this, result);
  v8 = UserDeleteReservationMaster__GetEntity(
         (UserDeleteReservationMaster_o *)MasterData_object,
         *(_QWORD *)(this[3].fields.m_CachedPtr + 64),
         0);
  if ( v8 )
  {
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(v4, v8->fields.password, v9);
    return;
  }
LABEL_17:
  this = (NoticeInfoComponent_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3583/*"CLICK_CANCLE"*/, 0);
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
  __int64 v2; // x2
  NoticeInfoComponent__WaitForSE_d__11_o *v3; // x19
  unsigned int _1__state; // w8
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  UnityEngine_WaitForSeconds_o *v14; // x20
  MissionNaviTransitionBoardItem_o *v15; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  v3 = this;
  if ( (byte_596BB77 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (NoticeInfoComponent__WaitForSE_d__11_o *)sub_2213A60(&StringLiteral_10034/*"OPEN_BROWSER"*/);
    byte_596BB77 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = v3->fields.__4__this;
      v3->fields.__1__state = -1;
      if ( !_4__this || (this = (NoticeInfoComponent__WaitForSE_d__11_o *)_4__this->fields.myRoomFsm) == 0 )
        sub_2213CDC(this, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10034/*"OPEN_BROWSER"*/, 0);
    }
    return 0;
  }
  else
  {
    v3->fields.__1__state = -1;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
    if ( SoundManager__isBusyVoice(0, 0) )
    {
      v3->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
      sub_2213A04(p__2__current, 0, v5, v6, v7, v8, v9, v10);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
    }
    else
    {
      v14 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v14, 0.5, 0);
      v3->fields.__2__current = (Il2CppObject *)v14;
      v15 = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
      sub_2213A04(v15, (int32_t)v14, v16, v17, v18, v19, v20, v21);
      result = 1;
      v15[-1].fields._BoardType_k__BackingField = 2;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BB75 & 1) == 0 )
  {
    sub_2213A60(&NoticeInfoComponent___c_TypeInfo);
    byte_596BB75 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(NoticeInfoComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  NoticeInfoComponent___c_TypeInfo->static_fields->__9 = (struct NoticeInfoComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)NoticeInfoComponent___c_TypeInfo->static_fields,
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

  if ( (byte_596BB76 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_596BB76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}