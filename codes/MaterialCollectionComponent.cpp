void __fastcall MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCollectionComponent___openMenu_b__5_0(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  MyRoomControl_o *myRoomCtrl; // x0

  if ( (byte_40FCB4A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864, method);
    byte_40FCB4A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864, 0LL),
        (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B170D4();
  }
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
}


bool __fastcall MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_40FCB47 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MaterialCollectionComponent_onClose__, v6);
    byte_40FCB47 = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0LL);
  if ( !materialCollectionMenu )
    sub_B170D4();
  MaterialCollectionMenu__Close_30080128(materialCollectionMenu, v8, v9);
  return 1;
}


void __fastcall MaterialCollectionComponent__hideMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  MaterialCollectionMenu_o *materialCollectionMenu; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  materialCollectionMenu = this->fields.materialCollectionMenu;
  if ( !materialCollectionMenu
    || (MaterialCollectionMenu__Init(materialCollectionMenu, method),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FCB48 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3094, method);
    byte_40FCB48 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3094, 0LL);
}


void __fastcall MaterialCollectionComponent__onCloseWebView(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FCB46 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3091, method);
    byte_40FCB46 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3091, 0LL);
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

  if ( (byte_40FCB49 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3091, *(_QWORD *)&result);
    sub_B16FFC(&StringLiteral_3034, v5);
    byte_40FCB49 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  if ( result == 1 )
    v7 = &StringLiteral_3034;
  else
    v7 = &StringLiteral_3091;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v7, 0LL);
}


bool __fastcall MaterialCollectionComponent__openMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  MaterialCollectionMenu_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_40FCB45 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&MaterialCollectionMenu_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_MaterialCollectionComponent__openMenu_b__5_0__, v4);
    sub_B16FFC(&Method_MaterialCollectionComponent_onEndMenu__, v5);
    byte_40FCB45 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0LL),
        v17 = (MaterialCollectionMenu_CallbackFunc_o *)sub_B170CC(
                                                         MaterialCollectionMenu_CallbackFunc_TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15,
                                                         v16),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          0LL),
        !materialCollectionMenu) )
  {
    sub_B170D4();
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v12, v17, v18);
  return 1;
}


void __fastcall MaterialCollectionComponent__showMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (materialCollectionMenu = this->fields.materialCollectionMenu) == 0LL) )
  {
    sub_B170D4();
  }
  MaterialCollectionMenu__Init(materialCollectionMenu, v4);
}