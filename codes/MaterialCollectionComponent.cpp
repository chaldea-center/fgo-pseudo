void MaterialCollectionComponent___ctor(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialCollectionComponent___openMenu_b__5_0(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596B67F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596B67F = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_2213CDC(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


bool MaterialCollectionComponent__closeMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596B67C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MaterialCollectionComponent_onClose__);
    byte_596B67C = 1;
  }
  materialCollectionMenu = this->fields.materialCollectionMenu;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCollectionComponent_onClose__, 0);
  if ( !materialCollectionMenu )
    sub_2213CDC(v5, v6);
  MaterialCollectionMenu__Close_39953136(materialCollectionMenu, v4, v7);
  return 1;
}


void MaterialCollectionComponent__hideMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  MaterialCollectionMenu_o *materialCollectionMenu; // x0

  materialCollectionMenu = this->fields.materialCollectionMenu;
  if ( !materialCollectionMenu
    || (MaterialCollectionMenu__Init(materialCollectionMenu, method),
        (materialCollectionMenu = (MaterialCollectionMenu_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0)) == 0) )
  {
    sub_2213CDC(materialCollectionMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionMenu, 0, 0);
}


void MaterialCollectionComponent__onClose(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596B67D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3656/*"CLOSE_MENU"*/);
    byte_596B67D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3656/*"CLOSE_MENU"*/, 0);
}


void MaterialCollectionComponent__onCloseWebView(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596B67B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3653/*"CLOSE_MATERIAL"*/);
    byte_596B67B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3653/*"CLOSE_MATERIAL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionComponent__onEndMenu(
        MaterialCollectionComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 *v6; // x8

  if ( (byte_596B67E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3653/*"CLOSE_MATERIAL"*/);
    sub_2213A60(&StringLiteral_3576/*"CLICK_BACK"*/);
    byte_596B67E = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( result != 1 )
  {
    if ( myRoomFsm )
    {
      v6 = &StringLiteral_3653/*"CLOSE_MATERIAL"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(myRoomFsm, *(_QWORD *)&result);
  }
  if ( !myRoomFsm )
    goto LABEL_9;
  v6 = &StringLiteral_3576/*"CLICK_BACK"*/;
LABEL_8:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v6, 0);
}


bool MaterialCollectionComponent__openMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  MaterialCollectionMenu_o *materialCollectionMenu; // x20
  System_Action_o *v6; // x21
  MaterialCollectionMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_596B67A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MaterialCollectionComponent__openMenu_b__5_0__);
    sub_2213A60(&Method_MaterialCollectionComponent_onEndMenu__);
    byte_596B67A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        materialCollectionMenu = this->fields.materialCollectionMenu,
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCollectionComponent__openMenu_b__5_0__, 0),
        v7 = (MaterialCollectionMenu_CallbackFunc_o *)sub_2213CCC(MaterialCollectionMenu_CallbackFunc_TypeInfo),
        MaterialCollectionMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCollectionComponent_onEndMenu__,
          v8),
        !materialCollectionMenu) )
  {
    sub_2213CDC(gameObject, v4);
  }
  MaterialCollectionMenu__Open(materialCollectionMenu, v6, v7, v9);
  return 1;
}


void MaterialCollectionComponent__showMenu(MaterialCollectionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.materialCollectionMenu) == 0) )
  {
    sub_2213CDC(gameObject, v4);
  }
  MaterialCollectionMenu__Init((MaterialCollectionMenu_o *)gameObject, v4);
}