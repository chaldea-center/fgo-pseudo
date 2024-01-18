void __fastcall SerialCodeComponent___ctor(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall SerialCodeComponent__closeMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4187B48 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3103/*"CLOSE_MENU"*/, method);
    byte_4187B48 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3103/*"CLOSE_MENU"*/, 0LL);
  return 1;
}


void __fastcall SerialCodeComponent__hideMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SerialCodeComponent__onCloseWebView(SerialCodeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4187B47 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3107/*"CLOSE_SERIAL_CODE"*/, method);
    byte_4187B47 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3107/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


bool __fastcall SerialCodeComponent__openMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4187B46 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SerialCodeComponent_onCloseWebView__, v4);
    sub_B2C35C(&WebViewManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15367/*"WEB_VIEW_TITLE_SERIAL_CODE"*/, v6);
    sub_B2C35C(&StringLiteral_12695/*"SerialCodeTop"*/, v7);
    byte_4187B46 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v9);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15367/*"WEB_VIEW_TITLE_SERIAL_CODE"*/, 0LL);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SerialCodeComponent_onCloseWebView__, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenViewDynamic(v10, (System_String_o *)StringLiteral_12695/*"SerialCodeTop"*/, v11, 0LL);
  return 1;
}


void __fastcall SerialCodeComponent__showMenu(SerialCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}