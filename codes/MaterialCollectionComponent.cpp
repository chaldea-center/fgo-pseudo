void __fastcall MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCollectionComponent___openMenu_b__5_0(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E8A12 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E8A12 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B5D69C(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E8A0F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCollectionComponent_onClose__, v5, v6, v7);
    byte_42E8A0F = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0LL);
  if ( !materialCollectionMenu )
    sub_B5D69C(v10, v11);
  MaterialCollectionMenu__Close_25342140(materialCollectionMenu, v9, v12);
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
    sub_B5D69C(materialCollectionMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0LL);
}


void __fastcall MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E8A10 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3168/*"CLOSE_MENU"*/, (_DWORD)method, v2, v3);
    byte_42E8A10 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3168/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCollectionComponent__onCloseWebView(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E8A0E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3165/*"CLOSE_MATERIAL"*/, (_DWORD)method, v2, v3);
    byte_42E8A0E = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3165/*"CLOSE_MATERIAL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionComponent__onEndMenu(
        MaterialCollectionComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v10; // x8

  if ( (byte_42E8A11 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3165/*"CLOSE_MATERIAL"*/, result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v6, v7, v8);
    byte_42E8A11 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, *(_QWORD *)&result);
  if ( result == 1 )
    v10 = &StringLiteral_3102/*"CLICK_BACK"*/;
  else
    v10 = &StringLiteral_3165/*"CLOSE_MATERIAL"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v10, 0LL);
}


bool __fastcall MaterialCollectionComponent__openMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v17; // x21
  MaterialCollectionMenu_CallbackFunc_o *v18; // x22
  const MethodInfo *v19; // x3

  if ( (byte_42E8A0D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MaterialCollectionMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MaterialCollectionComponent__openMenu_b__5_0__, v8, v9, v10);
    sub_B5D5C4(&Method_MaterialCollectionComponent_onEndMenu__, v11, v12, v13);
    byte_42E8A0D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v17, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0LL),
        v18 = (MaterialCollectionMenu_CallbackFunc_o *)sub_B5D694(MaterialCollectionMenu_CallbackFunc_TypeInfo),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          0LL),
        !materialCollectionMenu) )
  {
    sub_B5D69C(gameObject, v15);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v17, v18, v19);
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
    sub_B5D69C(gameObject, v4);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}