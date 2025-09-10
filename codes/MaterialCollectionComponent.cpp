void MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialCollectionComponent___openMenu_b__5_0(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C22427 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C22427 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_1C2D6EC(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


bool MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C22424 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MaterialCollectionComponent_onClose__);
    byte_4C22424 = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0);
  if ( !materialCollectionMenu )
    sub_1C2D6EC(v5, v6);
  MaterialCollectionMenu__Close_33046632(materialCollectionMenu, v4, v7);
  return 1;
}


void MaterialCollectionComponent__hideMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  MaterialCollectionMenu_o *materialCollectionMenu; // x0

  materialCollectionMenu = this->fields.materialCollectionMenu;
  if ( !materialCollectionMenu
    || (MaterialCollectionMenu__Init(materialCollectionMenu, method),
        (materialCollectionMenu = (MaterialCollectionMenu_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0)) == 0) )
  {
    sub_1C2D6EC(materialCollectionMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0);
}


void MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C22425 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3507/*"CLOSE_MENU"*/);
    byte_4C22425 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3507/*"CLOSE_MENU"*/, 0);
}


void MaterialCollectionComponent__onCloseWebView(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C22423 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3504/*"CLOSE_MATERIAL"*/);
    byte_4C22423 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3504/*"CLOSE_MATERIAL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionComponent__onEndMenu(
        MaterialCollectionComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v6; // x8

  if ( (byte_4C22426 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3504/*"CLOSE_MATERIAL"*/);
    sub_1C2D490(&StringLiteral_3430/*"CLICK_BACK"*/);
    byte_4C22426 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C2D6EC(0, *(_QWORD *)&result);
  v6 = &StringLiteral_3430/*"CLICK_BACK"*/;
  if ( result != 1 )
    v6 = &StringLiteral_3504/*"CLOSE_MATERIAL"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v6, 0);
}


bool MaterialCollectionComponent__openMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v6; // x21
  MaterialCollectionMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_4C22422 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_MaterialCollectionComponent__openMenu_b__5_0__);
    sub_1C2D490(&Method_MaterialCollectionComponent_onEndMenu__);
    byte_4C22422 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0),
        v7 = (MaterialCollectionMenu_CallbackFunc_o *)sub_1C2D6DC(MaterialCollectionMenu_CallbackFunc_TypeInfo),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          v8),
        !materialCollectionMenu) )
  {
    sub_1C2D6EC(gameObject, v4);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v6, v7, v9);
  return 1;
}


void MaterialCollectionComponent__showMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.materialCollectionMenu) == 0) )
  {
    sub_1C2D6EC(gameObject, v4);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}