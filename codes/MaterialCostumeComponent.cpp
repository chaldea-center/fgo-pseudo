void MaterialCostumeComponent___ctor(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialCostumeComponent___openMenu_b__5_0(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C224AD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C224AD = 1;
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


bool MaterialCostumeComponent__closeMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C224AA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeComponent_onClose__);
    byte_4C224AA = 1;
  }
  materialCostumeMenu = this->fields.materialCostumeMenu;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCostumeComponent_onClose__, 0);
  if ( !materialCostumeMenu )
    sub_1C2D6EC(v5, v6);
  MaterialCostumeMenu__Close_33090040(materialCostumeMenu, v4, v7);
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
    sub_1C2D6EC(materialCostumeMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCostumeMenu, 0, 0);
}


void MaterialCostumeComponent__onClose(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C224AB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3507/*"CLOSE_MENU"*/);
    byte_4C224AB = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3507/*"CLOSE_MENU"*/, 0);
}


void MaterialCostumeComponent__onCloseWebView(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C224A9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3504/*"CLOSE_MATERIAL"*/);
    byte_4C224A9 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3504/*"CLOSE_MATERIAL"*/, 0);
}


void MaterialCostumeComponent__onEndMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C224AC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3504/*"CLOSE_MATERIAL"*/);
    byte_4C224AC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3504/*"CLOSE_MATERIAL"*/, 0);
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

  if ( (byte_4C224A8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&MaterialCostumeMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeComponent__openMenu_b__5_0__);
    sub_1C2D490(&Method_MaterialCostumeComponent_onEndMenu__);
    byte_4C224A8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        materialCostumeMenu = this->fields.materialCostumeMenu,
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCostumeComponent__openMenu_b__5_0__, 0),
        v7 = (MaterialCostumeMenu_CallbackFunc_o *)sub_1C2D6DC(MaterialCostumeMenu_CallbackFunc_TypeInfo),
        MaterialCostumeMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCostumeComponent_onEndMenu__,
          v8),
        !materialCostumeMenu) )
  {
    sub_1C2D6EC(gameObject, v4);
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
    sub_1C2D6EC(gameObject, v4);
  }
  MaterialCostumeMenu__Init((MaterialCostumeMenu_o *)gameObject, v4);
}