void MaterialCostumeComponent___ctor(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialCostumeComponent___openMenu_b__5_0(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_59335F4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7261/*"GO_NEXT"*/);
    byte_59335F4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7261/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_21FFECC(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


bool MaterialCostumeComponent__closeMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_59335F1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialCostumeComponent_onClose__);
    byte_59335F1 = 1;
  }
  materialCostumeMenu = this->fields.materialCostumeMenu;
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCostumeComponent_onClose__, 0);
  if ( !materialCostumeMenu )
    sub_21FFECC(v5, v6);
  MaterialCostumeMenu__Close_39992376(materialCostumeMenu, v4, v7);
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
    sub_21FFECC(materialCostumeMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCostumeMenu, 0, 0);
}


void MaterialCostumeComponent__onClose(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_59335F2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3651/*"CLOSE_MENU"*/);
    byte_59335F2 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3651/*"CLOSE_MENU"*/, 0);
}


void MaterialCostumeComponent__onCloseWebView(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_59335F0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3648/*"CLOSE_MATERIAL"*/);
    byte_59335F0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3648/*"CLOSE_MATERIAL"*/, 0);
}


void MaterialCostumeComponent__onEndMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_59335F3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3648/*"CLOSE_MATERIAL"*/);
    byte_59335F3 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3648/*"CLOSE_MATERIAL"*/, 0);
}


bool MaterialCostumeComponent__openMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v6; // x21
  MaterialCostumeMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_59335EF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&MaterialCostumeMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_MaterialCostumeComponent__openMenu_b__5_0__);
    sub_21FFC50(&Method_MaterialCostumeComponent_onEndMenu__);
    byte_59335EF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        materialCostumeMenu = this->fields.materialCostumeMenu,
        v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCostumeComponent__openMenu_b__5_0__, 0),
        v7 = (MaterialCostumeMenu_CallbackFunc_o *)sub_21FFEBC(MaterialCostumeMenu_CallbackFunc_TypeInfo),
        MaterialCostumeMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCostumeComponent_onEndMenu__,
          v8),
        !materialCostumeMenu) )
  {
    sub_21FFECC(gameObject, v4);
  }
  MaterialCostumeMenu__Open(materialCostumeMenu, v6, v7, v9);
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
    sub_21FFECC(gameObject, v4);
  }
  MaterialCostumeMenu__Init((MaterialCostumeMenu_o *)gameObject, v4);
}