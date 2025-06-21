void __fastcall MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCollectionComponent___openMenu_b__5_0(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B176FE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_6926/*"GO_NEXT"*/, method);
    byte_4B176FE = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6926/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_1BCB254(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B176FB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_MaterialCollectionComponent_onClose__, v3);
    byte_4B176FB = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0LL);
  if ( !materialCollectionMenu )
    sub_1BCB254(v6, v7);
  MaterialCollectionMenu__Close_32524672(materialCollectionMenu, v5, v8);
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
    sub_1BCB254(materialCollectionMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0LL);
}


void __fastcall MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B176FC & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3479/*"CLOSE_MENU"*/, method);
    byte_4B176FC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCB254(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3479/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCollectionComponent__onCloseWebView(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B176FA & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3476/*"CLOSE_MATERIAL"*/, method);
    byte_4B176FA = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCB254(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3476/*"CLOSE_MATERIAL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionComponent__onEndMenu(
        MaterialCollectionComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v7; // x8

  if ( (byte_4B176FD & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3476/*"CLOSE_MATERIAL"*/, *(_QWORD *)&result);
    sub_1BCAFF8(&StringLiteral_3404/*"CLICK_BACK"*/, v5);
    byte_4B176FD = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCB254(0LL, *(_QWORD *)&result);
  v7 = &StringLiteral_3404/*"CLICK_BACK"*/;
  if ( result != 1 )
    v7 = &StringLiteral_3476/*"CLOSE_MATERIAL"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v7, 0LL);
}


bool __fastcall MaterialCollectionComponent__openMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v9; // x21
  MaterialCollectionMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  if ( (byte_4B176F9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&MaterialCollectionMenu_CallbackFunc_TypeInfo, v3);
    sub_1BCAFF8(&Method_MaterialCollectionComponent__openMenu_b__5_0__, v4);
    sub_1BCAFF8(&Method_MaterialCollectionComponent_onEndMenu__, v5);
    byte_4B176F9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v9 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0LL),
        v10 = (MaterialCollectionMenu_CallbackFunc_o *)sub_1BCB244(MaterialCollectionMenu_CallbackFunc_TypeInfo),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          v11),
        !materialCollectionMenu) )
  {
    sub_1BCB254(gameObject, v7);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v9, v10, v12);
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
    sub_1BCB254(gameObject, v4);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}