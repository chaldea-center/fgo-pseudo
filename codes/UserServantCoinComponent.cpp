void __fastcall UserServantCoinComponent___ctor(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserServantCoinComponent___openMenu_b__5_0(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AFD7AC & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6921/*"GO_NEXT"*/, method);
    byte_4AFD7AC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6921/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_1BC3264(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall UserServantCoinComponent__closeMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4AFD7A9 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_UserServantCoinComponent_onClose__, v3);
    byte_4AFD7A9 = 1;
  }
  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  v5 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserServantCoinComponent_onClose__, 0LL);
  if ( !userServantCoinListMenu )
    sub_1BC3264(v6, v7);
  UserServantCoinMenu__Close_32991964(userServantCoinListMenu, v5, v8);
  return 1;
}


void __fastcall UserServantCoinComponent__hideMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UserServantCoinMenu_o *userServantCoinListMenu; // x0

  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  if ( !userServantCoinListMenu
    || (UserServantCoinMenu__Init(userServantCoinListMenu, method),
        (userServantCoinListMenu = (UserServantCoinMenu_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL) )
  {
    sub_1BC3264(userServantCoinListMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userServantCoinListMenu, 0, 0LL);
}


void __fastcall UserServantCoinComponent__onClose(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AFD7AA & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3477/*"CLOSE_MENU"*/, method);
    byte_4AFD7AA = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BC3264(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3477/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall UserServantCoinComponent__onEndMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AFD7AB & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3487/*"CLOSE_USER_SERVANT_COIN"*/, method);
    byte_4AFD7AB = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BC3264(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3487/*"CLOSE_USER_SERVANT_COIN"*/, 0LL);
}


bool __fastcall UserServantCoinComponent__openMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v9; // x21
  UserServantCoinMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  if ( (byte_4AFD7A8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&UserServantCoinMenu_CallbackFunc_TypeInfo, v3);
    sub_1BC3008(&Method_UserServantCoinComponent__openMenu_b__5_0__, v4);
    sub_1BC3008(&Method_UserServantCoinComponent_onEndMenu__, v5);
    byte_4AFD7A8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        userServantCoinListMenu = this->fields.userServantCoinListMenu,
        v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_UserServantCoinComponent__openMenu_b__5_0__, 0LL),
        v10 = (UserServantCoinMenu_CallbackFunc_o *)sub_1BC3254(UserServantCoinMenu_CallbackFunc_TypeInfo),
        UserServantCoinMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_UserServantCoinComponent_onEndMenu__,
          v11),
        !userServantCoinListMenu) )
  {
    sub_1BC3264(gameObject, v7);
  }
  UserServantCoinMenu__Open(userServantCoinListMenu, v9, v10, v12);
  return 1;
}


void __fastcall UserServantCoinComponent__showMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListMenu) == 0LL) )
  {
    sub_1BC3264(gameObject, v4);
  }
  UserServantCoinMenu__Init((UserServantCoinMenu_o *)gameObject, v4);
}