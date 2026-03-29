void UserServantCoinComponent___ctor(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UserServantCoinComponent___openMenu_b__5_0(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4D2BF1B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7014/*"GO_NEXT"*/);
    byte_4D2BF1B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7014/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_1C93D2C(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


bool UserServantCoinComponent__closeMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2BF18 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UserServantCoinComponent_onClose__);
    byte_4D2BF18 = 1;
  }
  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserServantCoinComponent_onClose__, 0);
  if ( !userServantCoinListMenu )
    sub_1C93D2C(v5, v6);
  UserServantCoinMenu__Close_34393580(userServantCoinListMenu, v4, v7);
  return 1;
}


void UserServantCoinComponent__hideMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UserServantCoinMenu_o *userServantCoinListMenu; // x0

  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  if ( !userServantCoinListMenu
    || (UserServantCoinMenu__Init(userServantCoinListMenu, method),
        (userServantCoinListMenu = (UserServantCoinMenu_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0) )
  {
    sub_1C93D2C(userServantCoinListMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userServantCoinListMenu, 0, 0);
}


void UserServantCoinComponent__onClose(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4D2BF19 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3535/*"CLOSE_MENU"*/);
    byte_4D2BF19 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3535/*"CLOSE_MENU"*/, 0);
}


void UserServantCoinComponent__onEndMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4D2BF1A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3545/*"CLOSE_USER_SERVANT_COIN"*/);
    byte_4D2BF1A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3545/*"CLOSE_USER_SERVANT_COIN"*/, 0);
}


bool UserServantCoinComponent__openMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v6; // x21
  UserServantCoinMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_4D2BF17 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_UserServantCoinComponent__openMenu_b__5_0__);
    sub_1C93AD4(&Method_UserServantCoinComponent_onEndMenu__);
    byte_4D2BF17 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        userServantCoinListMenu = this->fields.userServantCoinListMenu,
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_UserServantCoinComponent__openMenu_b__5_0__, 0),
        v7 = (UserServantCoinMenu_CallbackFunc_o *)sub_1C93D20(UserServantCoinMenu_CallbackFunc_TypeInfo),
        UserServantCoinMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_UserServantCoinComponent_onEndMenu__,
          v8),
        !userServantCoinListMenu) )
  {
    sub_1C93D2C(gameObject, v4);
  }
  UserServantCoinMenu__Open(userServantCoinListMenu, v6, v7, v9);
  return 1;
}


void UserServantCoinComponent__showMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListMenu) == 0) )
  {
    sub_1C93D2C(gameObject, v4);
  }
  UserServantCoinMenu__Init((UserServantCoinMenu_o *)gameObject, v4);
}