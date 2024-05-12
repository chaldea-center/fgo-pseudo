void __fastcall MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCollectionComponent___openMenu_b__5_0(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_438BBA3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7045/*"GO_NEXT"*/);
    byte_438BBA3 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7045/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B7769C(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_438BBA0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MaterialCollectionComponent_onClose__);
    byte_438BBA0 = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0LL);
  if ( !materialCollectionMenu )
    sub_B7769C(v5, v6);
  MaterialCollectionMenu__Close_26366608(materialCollectionMenu, v4, v7);
  return 1;
}


void __fastcall MaterialCollectionComponent__hideMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  MaterialCollectionMenu_o *materialCollectionMenu; // x0

  materialCollectionMenu = this->fields.materialCollectionMenu;
  if ( !materialCollectionMenu
    || (MaterialCollectionMenu__Init(materialCollectionMenu, method),
        (materialCollectionMenu = (MaterialCollectionMenu_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL)) == 0LL) )
  {
    sub_B7769C(materialCollectionMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0LL);
}


void __fastcall MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_438BBA1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3228/*"CLOSE_MENU"*/);
    byte_438BBA1 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3228/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCollectionComponent__onCloseWebView(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_438BB9F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3225/*"CLOSE_MATERIAL"*/);
    byte_438BB9F = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3225/*"CLOSE_MATERIAL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionComponent__onEndMenu(
        MaterialCollectionComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v6; // x8

  if ( (byte_438BBA2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3225/*"CLOSE_MATERIAL"*/);
    sub_B775C4(&StringLiteral_3161/*"CLICK_BACK"*/);
    byte_438BBA2 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7769C(0LL, *(_QWORD *)&result);
  if ( result == 1 )
    v6 = &StringLiteral_3161/*"CLICK_BACK"*/;
  else
    v6 = &StringLiteral_3225/*"CLOSE_MATERIAL"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v6, 0LL);
}


bool __fastcall MaterialCollectionComponent__openMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v6; // x21
  MaterialCollectionMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_438BB9E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_MaterialCollectionComponent__openMenu_b__5_0__);
    sub_B775C4(&Method_MaterialCollectionComponent_onEndMenu__);
    byte_438BB9E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0LL),
        v7 = (MaterialCollectionMenu_CallbackFunc_o *)sub_B77694(MaterialCollectionMenu_CallbackFunc_TypeInfo),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          0LL),
        !materialCollectionMenu) )
  {
    sub_B7769C(gameObject, v4);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v6, v7, v8);
  return 1;
}


void __fastcall MaterialCollectionComponent__showMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.materialCollectionMenu) == 0LL) )
  {
    sub_B7769C(gameObject, v4);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}