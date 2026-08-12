void ExRoomStateShop___ctor(ExRoomStateShop_o *this, ExRoomRootComponent_o *exRoom, const MethodInfo *method)
{
  ExRoomStateShop_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = this;
  *(_QWORD *)&this->fields.titleBackKind = 0x6400000002LL;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.root = exRoom;
  v4 = (ExRoomStateShop_o *)((char *)v4 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v4, (int32_t)exRoom, v5, v6, v7, v8, v9, v10);
  v4->fields.root = (struct ExRoomRootComponent_o *)0x7500000066LL;
}


void ExRoomStateShop__OnClickBack(ExRoomStateShop_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExRoomRootComponent_o *root; // x0

  root = this->fields.root;
  if ( !root )
    sub_2213CDC(0, method);
  ExRoomRootComponent__ChangeState(root, 1, v2);
}


void ExRoomStateShop__OnEnter(ExRoomStateShop_o *this, const MethodInfo *method)
{
  struct ExRoomRootComponent_o *root; // x8
  ExRoomStateShop_o *v3; // x19

  root = this->fields.root;
  if ( !root || (v3 = this, (this = (ExRoomStateShop_o *)root->fields._ShopDisp_k__BackingField) == 0) )
    sub_2213CDC(this, method);
  ExRoomShopComponent__Init((ExRoomShopComponent_o *)this, method);
  MainMenuBar__FrameIn(0, 0);
  v3->fields._OnEndEnter_k__BackingField = 1;
}


void ExRoomStateShop__OnExit(ExRoomStateShop_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  ExRoomShopComponent_o *declaringType; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2
  Il2CppClass *v7; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_596AE9C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ExRoomStateShop_o *)sub_2213A60(&Method_ExRoomStateShop__OnExit_b__2_0__);
    byte_596AE9C = 1;
  }
  klass = v2[1].klass;
  if ( !klass
    || (declaringType = (ExRoomShopComponent_o *)klass->_1.declaringType,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, v2, Method_ExRoomStateShop__OnExit_b__2_0__, 0),
        !declaringType)
    || (ExRoomShopComponent__Quit(declaringType, v5, v6), (v7 = v2[1].klass) == 0) )
  {
    sub_2213CDC(this, method);
  }
  if ( HIDWORD(v7->_1.generic_class) == 2 )
    MainMenuBar__FrameOut(0, 0);
}


void ExRoomStateShop___OnExit_b__2_0(ExRoomStateShop_o *this, const MethodInfo *method)
{
  this->fields._OnEndExit_k__BackingField = 1;
}