void MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialCollectionComponent___openMenu_b__5_0(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C32AF6 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6978/*"GO_NEXT"*/);
    byte_4C32AF6 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6978/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_1C32E7C(myRoomFsm);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


bool MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C32AF3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_MaterialCollectionComponent_onClose__);
    byte_4C32AF3 = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0);
  if ( !materialCollectionMenu )
    sub_1C32E7C(v5);
  MaterialCollectionMenu__Close_33160228(materialCollectionMenu, v4, v6);
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
    sub_1C32E7C(materialCollectionMenu);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0);
}


void MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C32AF4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3514/*"CLOSE_MENU"*/);
    byte_4C32AF4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3514/*"CLOSE_MENU"*/, 0);
}


void MaterialCollectionComponent__onCloseWebView(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C32AF2 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3511/*"CLOSE_MATERIAL"*/);
    byte_4C32AF2 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3511/*"CLOSE_MATERIAL"*/, 0);
}


void MaterialCollectionComponent__onEndMenu(
        MaterialCollectionComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v6; // x8

  if ( (byte_4C32AF5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3511/*"CLOSE_MATERIAL"*/);
    sub_1C32C20(&StringLiteral_3437/*"CLICK_BACK"*/);
    byte_4C32AF5 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C32E7C(0);
  v6 = &StringLiteral_3437/*"CLICK_BACK"*/;
  if ( result != 1 )
    v6 = &StringLiteral_3511/*"CLOSE_MATERIAL"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v6, 0);
}


bool MaterialCollectionComponent__openMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v5; // x21
  MaterialCollectionMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( (byte_4C32AF1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_MaterialCollectionComponent__openMenu_b__5_0__);
    sub_1C32C20(&Method_MaterialCollectionComponent_onEndMenu__);
    byte_4C32AF1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0),
        v6 = (MaterialCollectionMenu_CallbackFunc_o *)sub_1C32E6C(MaterialCollectionMenu_CallbackFunc_TypeInfo),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          v7),
        !materialCollectionMenu) )
  {
    sub_1C32E7C(gameObject);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v5, v6, v8);
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
    sub_1C32E7C(gameObject);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}