void SerialCodeComponent___ctor(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool SerialCodeComponent__closeMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4D27DAD & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3519/*"CLOSE_MENU"*/);
    byte_4D27DAD = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3519/*"CLOSE_MENU"*/, 0);
  return 1;
}


void SerialCodeComponent__hideMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void SerialCodeComponent__onCloseWebView(SerialCodeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4D27DAC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3523/*"CLOSE_SERIAL_CODE"*/);
    byte_4D27DAC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3523/*"CLOSE_SERIAL_CODE"*/, 0);
}


bool SerialCodeComponent__openMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4D27DAB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SerialCodeComponent_onCloseWebView__);
    sub_1C94098(&WebViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_15609/*"WEB_VIEW_TITLE_SERIAL_CODE"*/);
    sub_1C94098(&StringLiteral_12763/*"SerialCodeTop"*/);
    byte_4D27DAB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15609/*"WEB_VIEW_TITLE_SERIAL_CODE"*/, 0);
  v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SerialCodeComponent_onCloseWebView__, 0);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenViewDynamic(v5, (System_String_o *)StringLiteral_12763/*"SerialCodeTop"*/, v6, 0);
  return 1;
}


void SerialCodeComponent__showMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}