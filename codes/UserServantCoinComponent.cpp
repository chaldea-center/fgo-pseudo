void __fastcall UserServantCoinComponent___ctor(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserServantCoinComponent___openMenu_b__5_0(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42AE176 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6939/*"GO_NEXT"*/);
    byte_42AE176 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6939/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B52A5C(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall UserServantCoinComponent__closeMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42AE173 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UserServantCoinComponent_onClose__);
    byte_42AE173 = 1;
  }
  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserServantCoinComponent_onClose__, 0LL);
  if ( !userServantCoinListMenu )
    sub_B52A5C(v5, v6);
  UserServantCoinMenu__Close_21444352(userServantCoinListMenu, v4, v7);
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
    sub_B52A5C(userServantCoinListMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userServantCoinListMenu, 0, 0LL);
}


void __fastcall UserServantCoinComponent__onClose(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42AE174 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3135/*"CLOSE_MENU"*/);
    byte_42AE174 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3135/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall UserServantCoinComponent__onEndMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42AE175 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3144/*"CLOSE_USER_SERVANT_COIN"*/);
    byte_42AE175 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3144/*"CLOSE_USER_SERVANT_COIN"*/, 0LL);
}


bool __fastcall UserServantCoinComponent__openMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v6; // x21
  UserServantCoinMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_42AE172 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_UserServantCoinComponent__openMenu_b__5_0__);
    sub_B52984(&Method_UserServantCoinComponent_onEndMenu__);
    byte_42AE172 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        userServantCoinListMenu = this->fields.userServantCoinListMenu,
        v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_UserServantCoinComponent__openMenu_b__5_0__, 0LL),
        v7 = (UserServantCoinMenu_CallbackFunc_o *)sub_B52A54(UserServantCoinMenu_CallbackFunc_TypeInfo),
        UserServantCoinMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_UserServantCoinComponent_onEndMenu__,
          0LL),
        !userServantCoinListMenu) )
  {
    sub_B52A5C(gameObject, v4);
  }
  UserServantCoinMenu__Open(userServantCoinListMenu, v6, v7, v8);
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
    sub_B52A5C(gameObject, v4);
  }
  UserServantCoinMenu__Init((UserServantCoinMenu_o *)gameObject, v4);
}