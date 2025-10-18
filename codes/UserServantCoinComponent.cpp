void UserServantCoinComponent___ctor(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UserServantCoinComponent___openMenu_b__5_0(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E67B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C3E67B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_1C372B4(myRoomFsm);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


bool UserServantCoinComponent__closeMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3E678 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UserServantCoinComponent_onClose__);
    byte_4C3E678 = 1;
  }
  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserServantCoinComponent_onClose__, 0);
  if ( !userServantCoinListMenu )
    sub_1C372B4(v5);
  UserServantCoinMenu__Close_33865548(userServantCoinListMenu, v4, v6);
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
    sub_1C372B4(userServantCoinListMenu);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userServantCoinListMenu, 0, 0);
}


void UserServantCoinComponent__onClose(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E679 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3514/*"CLOSE_MENU"*/);
    byte_4C3E679 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3514/*"CLOSE_MENU"*/, 0);
}


void UserServantCoinComponent__onEndMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E67A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3524/*"CLOSE_USER_SERVANT_COIN"*/);
    byte_4C3E67A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3524/*"CLOSE_USER_SERVANT_COIN"*/, 0);
}


bool UserServantCoinComponent__openMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v5; // x21
  UserServantCoinMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( (byte_4C3E677 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_UserServantCoinComponent__openMenu_b__5_0__);
    sub_1C37058(&Method_UserServantCoinComponent_onEndMenu__);
    byte_4C3E677 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        userServantCoinListMenu = this->fields.userServantCoinListMenu,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_UserServantCoinComponent__openMenu_b__5_0__, 0),
        v6 = (UserServantCoinMenu_CallbackFunc_o *)sub_1C372A4(UserServantCoinMenu_CallbackFunc_TypeInfo),
        UserServantCoinMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserServantCoinComponent_onEndMenu__,
          v7),
        !userServantCoinListMenu) )
  {
    sub_1C372B4(gameObject);
  }
  UserServantCoinMenu__Open(userServantCoinListMenu, v5, v6, v8);
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
    sub_1C372B4(gameObject);
  }
  UserServantCoinMenu__Init((UserServantCoinMenu_o *)gameObject, v4);
}