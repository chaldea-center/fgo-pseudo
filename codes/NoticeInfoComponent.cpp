void __fastcall NoticeInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct NoticeInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_4AB1788 & 1) == 0 )
  {
    sub_1BAB41C(&NoticeInfoComponent_TypeInfo, v1);
    byte_4AB1788 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  AccountDeleteConfirmDialog_ClickDelegate_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4AB1782 & 1) == 0 )
  {
    sub_1BAB41C(&AccountDeleteConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BAB41C(&Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4AB1782 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (AccountDeleteConfirmDialog_ClickDelegate_o *)sub_1BAB668(AccountDeleteConfirmDialog_ClickDelegate_TypeInfo);
  AccountDeleteConfirmDialog_ClickDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteConfirmDialog_b__18_0__,
    0LL);
  if ( !Instance )
    sub_1BAB678(v7, v8);
  CommonUI__OpenAccountDeleteConfirmDialog((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall NoticeInfoComponent__OpenAccountDeletePasswordDialog(
        NoticeInfoComponent_o *this,
        System_String_o *password,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4AB1786 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, password);
    sub_1BAB41C(&Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB1786 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeletePasswordDialog_b__22_0__,
    0LL);
  if ( !Instance )
    sub_1BAB678(v9, v10);
  CommonUI__OpenAccountDeletePasswordDialog((CommonUI_o *)Instance, 0, password, v8, 0LL);
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
  Il2CppObject *Instance; // x20
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  CommonConfirmDialog_ClickDelegate_o *v15; // x24
  __int64 v16; // x1
  NoticeInfoComponent_c *v17; // x0

  if ( (byte_4AB1783 & 1) == 0 )
  {
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v3);
    sub_1BAB41C(&Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__, v4);
    sub_1BAB41C(&NoticeInfoComponent_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BAB41C(&StringLiteral_1986/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, v7);
    sub_1BAB41C(&StringLiteral_1985/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, v8);
    sub_1BAB41C(&StringLiteral_1987/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, v9);
    sub_1BAB41C(&StringLiteral_1/*""*/, v10);
    byte_4AB1783 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1987/*"ACCOUNT_DELETE_RECONFIRM_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1986/*"ACCOUNT_DELETE_RECONFIRM_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1985/*"ACCOUNT_DELETE_RECONFIRM_CANCEL"*/, 0LL);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent__OpenAccountDeleteReConfirmDialog_b__19_0__,
    0LL);
  v17 = NoticeInfoComponent_TypeInfo;
  if ( !NoticeInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent_TypeInfo);
    v17 = NoticeInfoComponent_TypeInfo;
  }
  if ( !Instance )
    sub_1BAB678(v17, v16);
  CommonUI__OpenConfirmDialog_30637164(
    (CommonUI_o *)Instance,
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x19
  NoticeInfoComponent___c_c *v10; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v13; // x21
  struct NoticeInfoComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4AB1787 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v2);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BAB41C(&Method_NoticeInfoComponent___c__SetReboot_b__23_0__, v4);
    sub_1BAB41C(&NoticeInfoComponent___c_TypeInfo, v5);
    byte_4AB1787 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  v10 = NoticeInfoComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  if ( !NoticeInfoComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeInfoComponent___c_TypeInfo);
    v10 = NoticeInfoComponent___c_TypeInfo;
  }
  _9__23_0 = v10->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = NoticeInfoComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v13, Method_NoticeInfoComponent___c__SetReboot_b__23_0__, 0LL);
    static_fields = NoticeInfoComponent___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = _9__23_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v15, v16);
  }
  if ( !v9 )
    sub_1BAB678(v10, v7);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, _9__23_0, 0LL);
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
    sub_1BAB678(gameObject, v3);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB177B & 1) == 0 )
  {
    sub_1BAB41C(&NoticeInfoComponent__WaitForSE_d__11_TypeInfo, method);
    byte_4AB177B = 1;
  }
  v3 = sub_1BAB668(NoticeInfoComponent__WaitForSE_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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

  if ( (byte_4AB1789 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1BAB41C(&StringLiteral_3556/*"CLICK_OK"*/, v5);
    sub_1BAB41C(&StringLiteral_3532/*"CLICK_CANCLE"*/, v6);
    byte_4AB1789 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountDeleteConfirmDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BAB678(Instance, v8);
  }
  v9 = &StringLiteral_3556/*"CLICK_OK"*/;
  if ( !isDecide )
    v9 = &StringLiteral_3532/*"CLICK_CANCLE"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0LL);
}


void __fastcall NoticeInfoComponent___OpenAccountDeletePasswordDialog_b__22_0(
        NoticeInfoComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  NoticeInfoComponent_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4AB178B & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB178B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  CommonUI__CloseAccountDeletePasswordDialog((CommonUI_o *)Instance, 0LL, 0LL);
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

  if ( (byte_4AB178A & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1BAB41C(&StringLiteral_3532/*"CLICK_CANCLE"*/, v5);
    byte_4AB178A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BAB678(Instance, v7);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3532/*"CLICK_CANCLE"*/, 0LL);
}


void __fastcall NoticeInfoComponent__onEndWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AB1780 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_3603/*"CLOSE_WEBVIEW"*/, method);
    byte_4AB1780 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BAB678(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3603/*"CLOSE_WEBVIEW"*/, 0LL);
}


void __fastcall NoticeInfoComponent__openBrowser(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *path; // x19

  if ( (byte_4AB1781 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Application_TypeInfo, method);
    byte_4AB1781 = 1;
  }
  path = this->fields.path;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__OpenURL(path, 0LL);
}


void __fastcall NoticeInfoComponent__openWebView(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *title; // x20
  System_String_o *path; // x21
  System_Action_o *v7; // x22

  if ( (byte_4AB177F & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_NoticeInfoComponent_onEndWebView__, v3);
    sub_1BAB41C(&WebViewManager_TypeInfo, v4);
    byte_4AB177F = 1;
  }
  title = this->fields.title;
  path = this->fields.path;
  v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_NoticeInfoComponent_onEndWebView__, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(title, path, v7, 0LL);
}


void __fastcall NoticeInfoComponent__requestUserDelete(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4AB1784 & 1) == 0 )
  {
    sub_1BAB41C(&Method_NetworkManager_getRequest_UserDeleteRequest___, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&Method_NoticeInfoComponent_userDeleteCallback__, v4);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4AB1784 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_NoticeInfoComponent_userDeleteCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_UserDeleteRequest___);
  if ( !Request_object )
    sub_1BAB678(0LL, v8);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall NoticeInfoComponent__setCreditWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *WebViewAddress_38951176; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB177D & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_15578/*"WEB_VIEW_TITLE_CREDIT"*/, v4);
    byte_4AB177D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15578/*"WEB_VIEW_TITLE_CREDIT"*/, 0LL);
  this->fields.title = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38951176 = NetworkManager__getWebViewAddress_38951176(5, 0LL);
  this->fields.path = WebViewAddress_38951176;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.path, (int32_t)WebViewAddress_38951176, v9, v10);
}


void __fastcall NoticeInfoComponent__setHelpWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *WebViewAddress_38951176; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB1779 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_15579/*"WEB_VIEW_TITLE_HELP"*/, v4);
    byte_4AB1779 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15579/*"WEB_VIEW_TITLE_HELP"*/, 0LL);
  this->fields.title = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38951176 = NetworkManager__getWebViewAddress_38951176(2, 0LL);
  this->fields.path = WebViewAddress_38951176;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.path, (int32_t)WebViewAddress_38951176, v9, v10);
}


void __fastcall NoticeInfoComponent__setInfomationWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *WebViewAddress_38951176; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB1778 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_15580/*"WEB_VIEW_TITLE_INFOMATION"*/, v4);
    byte_4AB1778 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15580/*"WEB_VIEW_TITLE_INFOMATION"*/, 0LL);
  this->fields.title = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38951176 = NetworkManager__getWebViewAddress_38951176(0, 0LL);
  this->fields.path = WebViewAddress_38951176;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.path, (int32_t)WebViewAddress_38951176, v9, v10);
}


void __fastcall NoticeInfoComponent__setInquiryWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *WebViewAddress_38951176; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_4AB177A & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_15577/*"WEB_VIEW_TITLE_CONTACT_US"*/, v4);
    byte_4AB177A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15577/*"WEB_VIEW_TITLE_CONTACT_US"*/, 0LL);
  this->fields.title = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38951176 = NetworkManager__getWebViewAddress_38951176(3, 0LL);
  this->fields.path = WebViewAddress_38951176;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.path, (int32_t)WebViewAddress_38951176, v9, v10);
  v12 = NoticeInfoComponent__WaitForSE(this, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall NoticeInfoComponent__setNoticeInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB1777 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, method);
    byte_4AB1777 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.title, v5, v6, v7);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.path = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.path, v8, v9, v10);
}


void __fastcall NoticeInfoComponent__setRightWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *WebViewAddress_38951176; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB177E & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_15581/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, v4);
    byte_4AB177E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15581/*"WEB_VIEW_TITLE_RIGHT_NOTATION"*/, 0LL);
  this->fields.title = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38951176 = NetworkManager__getWebViewAddress_38951176(6, 0LL);
  this->fields.path = WebViewAddress_38951176;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.path, (int32_t)WebViewAddress_38951176, v9, v10);
}


void __fastcall NoticeInfoComponent__setRulesWebViewInfo(NoticeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *WebViewAddress_38951176; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB177C & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_15585/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, v4);
    byte_4AB177C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15585/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0LL);
  this->fields.title = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)v5, v6, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38951176 = NetworkManager__getWebViewAddress_38951176(4, 0LL);
  this->fields.path = WebViewAddress_38951176;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.path, (int32_t)WebViewAddress_38951176, v9, v10);
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
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  UserDeleteReservationEntity_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4AB1785 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___, result);
    sub_1BAB41C(&NetworkManager_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BAB41C(&UserDeleteReservationEntity_TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v8);
    this = (NoticeInfoComponent_o *)sub_1BAB41C(&StringLiteral_3532/*"CLICK_CANCLE"*/, v9);
    byte_4AB1785 = 1;
  }
  if ( !result )
    goto LABEL_15;
  if ( System_String__Equals_62056444(result, (System_String_o *)StringLiteral_22090/*"ng"*/, 0LL) )
    goto LABEL_13;
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  UserDeleteReservationEntity__SetUserDeleteFlag(1, 0LL);
  this = (NoticeInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (NoticeInfoComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_15:
    sub_1BAB678(this, result);
  v11 = UserDeleteReservationMaster__GetEntity((UserDeleteReservationMaster_o *)MasterData_object, (int64_t)this, 0LL);
  if ( v11 )
  {
    NoticeInfoComponent__OpenAccountDeletePasswordDialog(v4, v11->fields.password, v12);
    return;
  }
LABEL_13:
  this = (NoticeInfoComponent_o *)v4->fields.myRoomFsm;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3532/*"CLICK_CANCLE"*/, 0LL);
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
  int32_t v6; // w2
  int32_t v7; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct NoticeInfoComponent_o *_4__this; // x8
  UnityEngine_WaitForSeconds_o *v11; // x20
  ServantStatusBattleListViewItem_o *v12; // x19
  int32_t v13; // w2
  int32_t v14; // w3

  v2 = this;
  if ( (byte_4AB178E & 1) == 0 )
  {
    sub_1BAB41C(&SoundManager_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    this = (NoticeInfoComponent__WaitForSE_d__11_o *)sub_1BAB41C(&StringLiteral_9636/*"OPEN_BROWSER"*/, v4);
    byte_4AB178E = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      _4__this = v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this || (this = (NoticeInfoComponent__WaitForSE_d__11_o *)_4__this->fields.myRoomFsm) == 0LL )
        sub_1BAB678(this, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9636/*"OPEN_BROWSER"*/, 0LL);
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
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1BAB3C0(p__2__current, 0, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    }
    else
    {
      v11 = (UnityEngine_WaitForSeconds_o *)sub_1BAB668(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v11, 0.5, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v11;
      v12 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1BAB3C0(v12, (int32_t)v11, v13, v14);
      *(_DWORD *)&v12[-1].fields.isMine = 2;
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_NoticeInfoComponent__WaitForSE_d__11_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB178C & 1) == 0 )
  {
    sub_1BAB41C(&NoticeInfoComponent___c_TypeInfo, v1);
    byte_4AB178C = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(NoticeInfoComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  NoticeInfoComponent___c_TypeInfo->static_fields->__9 = (struct NoticeInfoComponent___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)NoticeInfoComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall NoticeInfoComponent___c___ctor(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NoticeInfoComponent___c___SetReboot_b__23_0(NoticeInfoComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB178D & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4AB178D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}