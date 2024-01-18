void __fastcall MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCollectionComponent___openMenu_b__5_0(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4189CE5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, method);
    byte_4189CE5 = 1;
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


bool __fastcall MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4189CE2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MaterialCollectionComponent_onClose__, v3);
    byte_4189CE2 = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0LL);
  if ( !materialCollectionMenu )
    sub_B2C434(v6, v7);
  MaterialCollectionMenu__Close_28942972(materialCollectionMenu, v5, v8);
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
    sub_B2C434(materialCollectionMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0LL);
}


void __fastcall MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4189CE3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3103/*"CLOSE_MENU"*/, method);
    byte_4189CE3 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3103/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCollectionComponent__onCloseWebView(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4189CE1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3100/*"CLOSE_MATERIAL"*/, method);
    byte_4189CE1 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3100/*"CLOSE_MATERIAL"*/, 0LL);
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

  if ( (byte_4189CE4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3100/*"CLOSE_MATERIAL"*/, *(_QWORD *)&result);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v5);
    byte_4189CE4 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, *(_QWORD *)&result);
  if ( result == 1 )
    v7 = &StringLiteral_3043/*"CLICK_BACK"*/;
  else
    v7 = &StringLiteral_3100/*"CLOSE_MATERIAL"*/;
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

  if ( (byte_4189CE0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&MaterialCollectionMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_MaterialCollectionComponent__openMenu_b__5_0__, v4);
    sub_B2C35C(&Method_MaterialCollectionComponent_onEndMenu__, v5);
    byte_4189CE0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0LL),
        v10 = (MaterialCollectionMenu_CallbackFunc_o *)sub_B2C42C(MaterialCollectionMenu_CallbackFunc_TypeInfo),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          0LL),
        !materialCollectionMenu) )
  {
    sub_B2C434(gameObject, v7);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v9, v10, v11);
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
    sub_B2C434(gameObject, v4);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}