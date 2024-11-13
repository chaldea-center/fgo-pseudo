void __fastcall MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCollectionComponent___openMenu_b__5_0(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B1170B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    byte_4B1170B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_1BCAA3C(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


bool __fastcall MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B11708 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCollectionComponent_onClose__, v5, v6);
    byte_4B11708 = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0LL);
  if ( !materialCollectionMenu )
    sub_1BCAA3C(v9, v10);
  MaterialCollectionMenu__Close_31712188(materialCollectionMenu, v8, v11);
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
    sub_1BCAA3C(materialCollectionMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0LL);
}


void __fastcall MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11709 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3623/*"CLOSE_MENU"*/, method, v2);
    byte_4B11709 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3623/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MaterialCollectionComponent__onCloseWebView(
        MaterialCollectionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11707 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3620/*"CLOSE_MATERIAL"*/, method, v2);
    byte_4B11707 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3620/*"CLOSE_MATERIAL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionComponent__onEndMenu(
        MaterialCollectionComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v8; // x8

  if ( (byte_4B1170A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3620/*"CLOSE_MATERIAL"*/, *(_QWORD *)&result, method);
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v5, v6);
    byte_4B1170A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&result);
  v8 = &StringLiteral_3554/*"CLICK_BACK"*/;
  if ( result != 1 )
    v8 = &StringLiteral_3620/*"CLOSE_MATERIAL"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v8, 0LL);
}


bool __fastcall MaterialCollectionComponent__openMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  MaterialCollectionMenu_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3

  if ( (byte_4B11706 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&MaterialCollectionMenu_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_MaterialCollectionComponent__openMenu_b__5_0__, v6, v7);
    sub_1BCA7E0(&Method_MaterialCollectionComponent_onEndMenu__, v8, v9);
    byte_4B11706 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0LL),
        v20 = (MaterialCollectionMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                         MaterialCollectionMenu_CallbackFunc_TypeInfo,
                                                         v17,
                                                         v18,
                                                         v19),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          v21),
        !materialCollectionMenu) )
  {
    sub_1BCAA3C(gameObject, v11);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v16, v20, v22);
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
    sub_1BCAA3C(gameObject, v4);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}