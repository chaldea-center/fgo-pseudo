void __fastcall MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCollectionComponent___openMenu_b__5_0(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_49F7B29 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6910/*"GO_NEXT"*/, method);
    byte_49F7B29 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6910/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_1B64324(myRoomFsm);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49F7B26 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MaterialCollectionComponent_onClose__, v4);
    byte_49F7B26 = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0LL);
  if ( !materialCollectionMenu )
    sub_1B64324(v7);
  MaterialCollectionMenu__Close_30881096(materialCollectionMenu, v6, v8);
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
    sub_1B64324(materialCollectionMenu);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0LL);
}


void __fastcall MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_49F7B27 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3573/*"CLOSE_MENU"*/, method);
    byte_49F7B27 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3573/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCollectionComponent__onCloseWebView(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_49F7B25 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3570/*"CLOSE_MATERIAL"*/, method);
    byte_49F7B25 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3570/*"CLOSE_MATERIAL"*/, 0LL);
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

  if ( (byte_49F7B28 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3570/*"CLOSE_MATERIAL"*/, *(_QWORD *)&result);
    sub_1B640C8(&StringLiteral_3506/*"CLICK_BACK"*/, v5);
    byte_49F7B28 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B64324(0LL);
  v7 = &StringLiteral_3506/*"CLICK_BACK"*/;
  if ( result != 1 )
    v7 = &StringLiteral_3570/*"CLOSE_MATERIAL"*/;
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
  System_Action_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  MaterialCollectionMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3

  if ( (byte_49F7B24 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&MaterialCollectionMenu_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_MaterialCollectionComponent__openMenu_b__5_0__, v4);
    sub_1B640C8(&Method_MaterialCollectionComponent_onEndMenu__, v5);
    byte_49F7B24 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0LL),
        v13 = (MaterialCollectionMenu_CallbackFunc_o *)sub_1B64314(
                                                         MaterialCollectionMenu_CallbackFunc_TypeInfo,
                                                         v11,
                                                         v12),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          v14),
        !materialCollectionMenu) )
  {
    sub_1B64324(gameObject);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v10, v13, v15);
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
    sub_1B64324(gameObject);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}