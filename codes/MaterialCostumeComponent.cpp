void __fastcall MaterialCostumeComponent___ctor(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCostumeComponent___openMenu_b__5_0(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42B371E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6939/*"GO_NEXT"*/);
    byte_42B371E = 1;
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


bool __fastcall MaterialCostumeComponent__closeMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42B371B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MaterialCostumeComponent_onClose__);
    byte_42B371B = 1;
  }
  materialCostumeMenu = this->fields.materialCostumeMenu;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCostumeComponent_onClose__, 0LL);
  if ( !materialCostumeMenu )
    sub_B52A5C(v5, v6);
  MaterialCostumeMenu__Close_31523308(materialCostumeMenu, v4, v7);
  return 1;
}


void __fastcall MaterialCostumeComponent__hideMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  MaterialCostumeMenu_o *materialCostumeMenu; // x0

  materialCostumeMenu = this->fields.materialCostumeMenu;
  if ( !materialCostumeMenu
    || (MaterialCostumeMenu__Init(materialCostumeMenu, method),
        (materialCostumeMenu = (MaterialCostumeMenu_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL)) == 0LL) )
  {
    sub_B52A5C(materialCostumeMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCostumeMenu, 0, 0LL);
}


void __fastcall MaterialCostumeComponent__onClose(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42B371C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3135/*"CLOSE_MENU"*/);
    byte_42B371C = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3135/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCostumeComponent__onCloseWebView(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42B371A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3132/*"CLOSE_MATERIAL"*/);
    byte_42B371A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3132/*"CLOSE_MATERIAL"*/, 0LL);
}


void __fastcall MaterialCostumeComponent__onEndMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42B371D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3132/*"CLOSE_MATERIAL"*/);
    byte_42B371D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3132/*"CLOSE_MATERIAL"*/, 0LL);
}


bool __fastcall MaterialCostumeComponent__openMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v6; // x21
  MaterialCostumeMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_42B3719 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&MaterialCostumeMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_MaterialCostumeComponent__openMenu_b__5_0__);
    sub_B52984(&Method_MaterialCostumeComponent_onEndMenu__);
    byte_42B3719 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCostumeMenu = this->fields.materialCostumeMenu,
        v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCostumeComponent__openMenu_b__5_0__, 0LL),
        v7 = (MaterialCostumeMenu_CallbackFunc_o *)sub_B52A54(MaterialCostumeMenu_CallbackFunc_TypeInfo),
        MaterialCostumeMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCostumeComponent_onEndMenu__,
          0LL),
        !materialCostumeMenu) )
  {
    sub_B52A5C(gameObject, v4);
  }
  MaterialCostumeMenu__Open(materialCostumeMenu, v6, v7, v8);
  return 1;
}


void __fastcall MaterialCostumeComponent__showMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeMenu) == 0LL) )
  {
    sub_B52A5C(gameObject, v4);
  }
  MaterialCostumeMenu__Init((MaterialCostumeMenu_o *)gameObject, v4);
}