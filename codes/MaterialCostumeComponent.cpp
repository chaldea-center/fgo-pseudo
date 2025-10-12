void MaterialCostumeComponent___ctor(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialCostumeComponent___openMenu_b__5_0(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C32B7C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6978/*"GO_NEXT"*/);
    byte_4C32B7C = 1;
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


bool MaterialCostumeComponent__closeMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C32B79 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_MaterialCostumeComponent_onClose__);
    byte_4C32B79 = 1;
  }
  materialCostumeMenu = this->fields.materialCostumeMenu;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCostumeComponent_onClose__, 0);
  if ( !materialCostumeMenu )
    sub_1C32E7C(v5);
  MaterialCostumeMenu__Close_33203640(materialCostumeMenu, v4, v6);
  return 1;
}


void MaterialCostumeComponent__hideMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  MaterialCostumeMenu_o *materialCostumeMenu; // x0

  materialCostumeMenu = this->fields.materialCostumeMenu;
  if ( !materialCostumeMenu
    || (MaterialCostumeMenu__Init(materialCostumeMenu, method),
        (materialCostumeMenu = (MaterialCostumeMenu_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0)) == 0) )
  {
    sub_1C32E7C(materialCostumeMenu);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCostumeMenu, 0, 0);
}


void MaterialCostumeComponent__onClose(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C32B7A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3514/*"CLOSE_MENU"*/);
    byte_4C32B7A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3514/*"CLOSE_MENU"*/, 0);
}


void MaterialCostumeComponent__onCloseWebView(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C32B78 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3511/*"CLOSE_MATERIAL"*/);
    byte_4C32B78 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3511/*"CLOSE_MATERIAL"*/, 0);
}


void MaterialCostumeComponent__onEndMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C32B7B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3511/*"CLOSE_MATERIAL"*/);
    byte_4C32B7B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3511/*"CLOSE_MATERIAL"*/, 0);
}


bool MaterialCostumeComponent__openMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v5; // x21
  MaterialCostumeMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( (byte_4C32B77 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&MaterialCostumeMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_MaterialCostumeComponent__openMenu_b__5_0__);
    sub_1C32C20(&Method_MaterialCostumeComponent_onEndMenu__);
    byte_4C32B77 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        materialCostumeMenu = this->fields.materialCostumeMenu,
        v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCostumeComponent__openMenu_b__5_0__, 0),
        v6 = (MaterialCostumeMenu_CallbackFunc_o *)sub_1C32E6C(MaterialCostumeMenu_CallbackFunc_TypeInfo),
        MaterialCostumeMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_MaterialCostumeComponent_onEndMenu__,
          v7),
        !materialCostumeMenu) )
  {
    sub_1C32E7C(gameObject);
  }
  MaterialCostumeMenu__Open(materialCostumeMenu, v5, v6, v8);
  return 1;
}


void MaterialCostumeComponent__showMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeMenu) == 0) )
  {
    sub_1C32E7C(gameObject);
  }
  MaterialCostumeMenu__Init((MaterialCostumeMenu_o *)gameObject, v4);
}