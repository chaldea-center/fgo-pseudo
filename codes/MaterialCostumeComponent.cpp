void __fastcall MaterialCostumeComponent___ctor(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCostumeComponent___openMenu_b__5_0(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4189D5E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    byte_4189D5E = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B2C434(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall MaterialCostumeComponent__closeMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4189D5B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MaterialCostumeComponent_onClose__, v3);
    byte_4189D5B = 1;
  }
  materialCostumeMenu = this->fields.materialCostumeMenu;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCostumeComponent_onClose__, 0LL);
  if ( !materialCostumeMenu )
    sub_B2C434(v6, v7);
  MaterialCostumeMenu__Close_28983160(materialCostumeMenu, v5, v8);
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
    sub_B2C434(materialCostumeMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCostumeMenu, 0, 0LL);
}


void __fastcall MaterialCostumeComponent__onClose(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4189D5C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3103/*"CLOSE_MENU"*/, method);
    byte_4189D5C = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3103/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCostumeComponent__onCloseWebView(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4189D5A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3100/*"CLOSE_MATERIAL"*/, method);
    byte_4189D5A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3100/*"CLOSE_MATERIAL"*/, 0LL);
}


void __fastcall MaterialCostumeComponent__onEndMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4189D5D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3100/*"CLOSE_MATERIAL"*/, method);
    byte_4189D5D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3100/*"CLOSE_MATERIAL"*/, 0LL);
}


bool __fastcall MaterialCostumeComponent__openMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v9; // x21
  MaterialCostumeMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_4189D59 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&MaterialCostumeMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_MaterialCostumeComponent__openMenu_b__5_0__, v4);
    sub_B2C35C(&Method_MaterialCostumeComponent_onEndMenu__, v5);
    byte_4189D59 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCostumeMenu = this->fields.materialCostumeMenu,
        v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCostumeComponent__openMenu_b__5_0__, 0LL),
        v10 = (MaterialCostumeMenu_CallbackFunc_o *)sub_B2C42C(MaterialCostumeMenu_CallbackFunc_TypeInfo),
        MaterialCostumeMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MaterialCostumeComponent_onEndMenu__,
          0LL),
        !materialCostumeMenu) )
  {
    sub_B2C434(gameObject, v7);
  }
  MaterialCostumeMenu__Open(materialCostumeMenu, v9, v10, v11);
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
    sub_B2C434(gameObject, v4);
  }
  MaterialCostumeMenu__Init((MaterialCostumeMenu_o *)gameObject, v4);
}