void __fastcall UserServantCoinComponent___ctor(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserServantCoinComponent___openMenu_b__5_0(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E6ADD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E6ADD = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B5D69C(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall UserServantCoinComponent__closeMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E6ADA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UserServantCoinComponent_onClose__, v5, v6, v7);
    byte_42E6ADA = 1;
  }
  userServantCoinListMenu = this->fields.userServantCoinListMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserServantCoinComponent_onClose__, 0LL);
  if ( !userServantCoinListMenu )
    sub_B5D69C(v10, v11);
  UserServantCoinMenu__Close_21775540(userServantCoinListMenu, v9, v12);
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
    sub_B5D69C(userServantCoinListMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userServantCoinListMenu, 0, 0LL);
}


void __fastcall UserServantCoinComponent__onClose(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E6ADB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3168/*"CLOSE_MENU"*/, (_DWORD)method, v2, v3);
    byte_42E6ADB = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3168/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall UserServantCoinComponent__onEndMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E6ADC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3177/*"CLOSE_USER_SERVANT_COIN"*/, (_DWORD)method, v2, v3);
    byte_42E6ADC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3177/*"CLOSE_USER_SERVANT_COIN"*/, 0LL);
}


bool __fastcall UserServantCoinComponent__openMenu(UserServantCoinComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UserServantCoinMenu_o *userServantCoinListMenu; // x20
  System_Action_o *v17; // x21
  UserServantCoinMenu_CallbackFunc_o *v18; // x22
  const MethodInfo *v19; // x3

  if ( (byte_42E6AD9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserServantCoinMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UserServantCoinComponent__openMenu_b__5_0__, v8, v9, v10);
    sub_B5D5C4(&Method_UserServantCoinComponent_onEndMenu__, v11, v12, v13);
    byte_42E6AD9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        userServantCoinListMenu = this->fields.userServantCoinListMenu,
        v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v17, (Il2CppObject *)this, Method_UserServantCoinComponent__openMenu_b__5_0__, 0LL),
        v18 = (UserServantCoinMenu_CallbackFunc_o *)sub_B5D694(UserServantCoinMenu_CallbackFunc_TypeInfo),
        UserServantCoinMenu_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_UserServantCoinComponent_onEndMenu__,
          0LL),
        !userServantCoinListMenu) )
  {
    sub_B5D69C(gameObject, v15);
  }
  UserServantCoinMenu__Open(userServantCoinListMenu, v17, v18, v19);
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
    sub_B5D69C(gameObject, v4);
  }
  UserServantCoinMenu__Init((UserServantCoinMenu_o *)gameObject, v4);
}