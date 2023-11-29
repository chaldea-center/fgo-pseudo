void __fastcall UserServantCoinComponent___ctor(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserServantCoinComponent___openMenu_b__5_0(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  MyRoomControl_o *myRoomCtrl; // x0

  if ( (byte_40F8112 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864, method);
    byte_40F8112 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864, 0LL),
        (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B170D4();
  }
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
}


bool __fastcall UserServantCoinComponent__closeMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_40F810F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UserServantCoinComponent_onClose__, v6);
    byte_40F810F = 1;
  }
  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserServantCoinComponent_onClose__, 0LL);
  if ( !userServantCoinListMenu )
    sub_B170D4();
  UserServantCoinMenu__Close_21381496(userServantCoinListMenu, v8, v9);
  return 1;
}


void __fastcall UserServantCoinComponent__hideMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UserServantCoinMenu_o *userServantCoinListMenu; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  if ( !userServantCoinListMenu
    || (UserServantCoinMenu__Init(userServantCoinListMenu, method),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall UserServantCoinComponent__onClose(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F8110 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3094, method);
    byte_40F8110 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3094, 0LL);
}


void __fastcall UserServantCoinComponent__onEndMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F8111 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3103, method);
    byte_40F8111 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3103, 0LL);
}


bool __fastcall UserServantCoinComponent__openMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  UserServantCoinMenu_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_40F810E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UserServantCoinMenu_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_UserServantCoinComponent__openMenu_b__5_0__, v4);
    sub_B16FFC(&Method_UserServantCoinComponent_onEndMenu__, v5);
    byte_40F810E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        userServantCoinListMenu = this->fields.userServantCoinListMenu,
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_UserServantCoinComponent__openMenu_b__5_0__, 0LL),
        v17 = (UserServantCoinMenu_CallbackFunc_o *)sub_B170CC(
                                                      UserServantCoinMenu_CallbackFunc_TypeInfo,
                                                      v13,
                                                      v14,
                                                      v15,
                                                      v16),
        UserServantCoinMenu_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_UserServantCoinComponent_onEndMenu__,
          0LL),
        !userServantCoinListMenu) )
  {
    sub_B170D4();
  }
  UserServantCoinMenu__Open(userServantCoinListMenu, v12, v17, v18);
  return 1;
}


void __fastcall UserServantCoinComponent__showMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UserServantCoinMenu_o *userServantCoinListMenu; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (userServantCoinListMenu = this->fields.userServantCoinListMenu) == 0LL) )
  {
    sub_B170D4();
  }
  UserServantCoinMenu__Init(userServantCoinListMenu, v4);
}