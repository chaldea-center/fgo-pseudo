void __fastcall MaterialCostumeComponent___ctor(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCostumeComponent___openMenu_b__5_0(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  MyRoomControl_o *myRoomCtrl; // x0

  if ( (byte_40FCBC3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864/*"GO_NEXT"*/, method);
    byte_40FCBC3 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL),
        (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B170D4();
  }
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
}


bool __fastcall MaterialCostumeComponent__closeMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_40FCBC0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MaterialCostumeComponent_onClose__, v6);
    byte_40FCBC0 = 1;
  }
  materialCostumeMenu = this->fields.materialCostumeMenu;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MaterialCostumeComponent_onClose__, 0LL);
  if ( !materialCostumeMenu )
    sub_B170D4();
  MaterialCostumeMenu__Close_30120400(materialCostumeMenu, v8, v9);
  return 1;
}


void __fastcall MaterialCostumeComponent__hideMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  MaterialCostumeMenu_o *materialCostumeMenu; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  materialCostumeMenu = this->fields.materialCostumeMenu;
  if ( !materialCostumeMenu
    || (MaterialCostumeMenu__Init(materialCostumeMenu, method),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall MaterialCostumeComponent__onClose(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FCBC1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3094/*"CLOSE_MENU"*/, method);
    byte_40FCBC1 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3094/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCostumeComponent__onCloseWebView(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FCBBF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3091/*"CLOSE_MATERIAL"*/, method);
    byte_40FCBBF = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3091/*"CLOSE_MATERIAL"*/, 0LL);
}


void __fastcall MaterialCostumeComponent__onEndMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FCBC2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3091/*"CLOSE_MATERIAL"*/, method);
    byte_40FCBC2 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3091/*"CLOSE_MATERIAL"*/, 0LL);
}


bool __fastcall MaterialCostumeComponent__openMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialCostumeMenu_o *materialCostumeMenu; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  MaterialCostumeMenu_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_40FCBBE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&MaterialCostumeMenu_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_MaterialCostumeComponent__openMenu_b__5_0__, v4);
    sub_B16FFC(&Method_MaterialCostumeComponent_onEndMenu__, v5);
    byte_40FCBBE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCostumeMenu = this->fields.materialCostumeMenu,
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_MaterialCostumeComponent__openMenu_b__5_0__, 0LL),
        v17 = (MaterialCostumeMenu_CallbackFunc_o *)sub_B170CC(
                                                      MaterialCostumeMenu_CallbackFunc_TypeInfo,
                                                      v13,
                                                      v14,
                                                      v15,
                                                      v16),
        MaterialCostumeMenu_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_MaterialCostumeComponent_onEndMenu__,
          0LL),
        !materialCostumeMenu) )
  {
    sub_B170D4();
  }
  MaterialCostumeMenu__Open(materialCostumeMenu, v12, v17, v18);
  return 1;
}


void __fastcall MaterialCostumeComponent__showMenu(MaterialCostumeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  MaterialCostumeMenu_o *materialCostumeMenu; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (materialCostumeMenu = this->fields.materialCostumeMenu) == 0LL) )
  {
    sub_B170D4();
  }
  MaterialCostumeMenu__Init(materialCostumeMenu, v4);
}