void SerialCodeComponent___ctor(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool SerialCodeComponent__closeMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_5933B78 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3651/*"CLOSE_MENU"*/);
    byte_5933B78 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3651/*"CLOSE_MENU"*/, 0);
  return 1;
}


void SerialCodeComponent__hideMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void SerialCodeComponent__onCloseWebView(SerialCodeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_5933B77 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3655/*"CLOSE_SERIAL_CODE"*/);
    byte_5933B77 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3655/*"CLOSE_SERIAL_CODE"*/, 0);
}


bool SerialCodeComponent__openMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_5933B76 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SerialCodeComponent_onCloseWebView__);
    sub_21FFC50(&WebViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16133/*"WEB_VIEW_TITLE_SERIAL_CODE"*/);
    sub_21FFC50(&StringLiteral_13220/*"SerialCodeTop"*/);
    byte_5933B76 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_16133/*"WEB_VIEW_TITLE_SERIAL_CODE"*/, 0);
  v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SerialCodeComponent_onCloseWebView__, 0);
  if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v9, v10);
  WebViewManager__OpenViewDynamic(v7, (System_String_o *)StringLiteral_13220/*"SerialCodeTop"*/, v8, 0);
  return 1;
}


void SerialCodeComponent__showMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}