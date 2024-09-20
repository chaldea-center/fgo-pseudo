void __fastcall SerialCodeComponent___ctor(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall SerialCodeComponent__closeMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A56C0B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3595/*"CLOSE_MENU"*/);
    byte_4A56C0B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3595/*"CLOSE_MENU"*/, 0LL);
  return 1;
}


void __fastcall SerialCodeComponent__hideMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SerialCodeComponent__onCloseWebView(SerialCodeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A56C0A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3599/*"CLOSE_SERIAL_CODE"*/);
    byte_4A56C0A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3599/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


bool __fastcall SerialCodeComponent__openMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A56C09 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SerialCodeComponent_onCloseWebView__);
    sub_1B885B0(&WebViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15551/*"WEB_VIEW_TITLE_SERIAL_CODE"*/);
    sub_1B885B0(&StringLiteral_12609/*"SerialCodeTop"*/);
    byte_4A56C09 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15551/*"WEB_VIEW_TITLE_SERIAL_CODE"*/, 0LL);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SerialCodeComponent_onCloseWebView__, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenViewDynamic(v5, (System_String_o *)StringLiteral_12609/*"SerialCodeTop"*/, v6, 0LL);
  return 1;
}


void __fastcall SerialCodeComponent__showMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}