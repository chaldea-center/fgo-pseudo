void __fastcall Shop17Component___ctor(Shop17Component_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall Shop17Component__Awake(Shop17Component_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall Shop17Component__CloseMenu(Shop17Component_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Shop17Menu_o *shop17Menu; // x0
  BaseMenu_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x21

  if ( (byte_4B11C51 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_Shop17Component__CloseMenu_b__4_0__, v4, v5);
    byte_4B11C51 = 1;
  }
  shop17Menu = this->fields.shop17Menu;
  if ( !shop17Menu
    || (Shop17Menu__SetDispCurrencyInfo(shop17Menu, 0, v2),
        v7 = (BaseMenu_o *)this->fields.shop17Menu,
        v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_Shop17Component__CloseMenu_b__4_0__, 0LL),
        !v7) )
  {
    sub_1BCAA3C(shop17Menu, method);
  }
  BaseMenu__Close(v7, v11, 0LL);
}


void __fastcall Shop17Component__ExitMenu(Shop17Component_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  BaseMenu_o *shop17Menu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11C52 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_Shop17Component__ExitMenu_b__5_0__, v5, v6);
    byte_4B11C52 = 1;
  }
  shop17Menu = (BaseMenu_o *)this->fields.shop17Menu;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_Shop17Component__ExitMenu_b__5_0__, 0LL);
  if ( !shop17Menu )
    sub_1BCAA3C(v9, v10);
  BaseMenu__Close(shop17Menu, v8, 0LL);
}


void __fastcall Shop17Component__HideMenu(Shop17Component_o *this, const MethodInfo *method)
{
  Shop17Menu_o *shop17Menu; // x0

  shop17Menu = this->fields.shop17Menu;
  if ( !shop17Menu
    || (Shop17Menu__Init(shop17Menu, method),
        (shop17Menu = (Shop17Menu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(shop17Menu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shop17Menu, 0, 0LL);
}


bool __fastcall Shop17Component__IsOpenFolder(Shop17Component_o *this, const MethodInfo *method)
{
  Shop17Menu_o *shop17Menu; // x0

  shop17Menu = this->fields.shop17Menu;
  if ( !shop17Menu )
    sub_1BCAA3C(0LL, method);
  return Shop17Menu__get_IsActiveSvtCoinList(shop17Menu, method);
}


void __fastcall Shop17Component__OpenMenu(Shop17Component_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.shop17Menu) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.shop17Menu) == 0LL)
    || (Shop17Menu__SetDispCurrencyInfo((Shop17Menu_o *)gameObject, 1, v5),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.shop17Menu) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v4);
  }
  Shop17Menu__Open((Shop17Menu_o *)gameObject, v4);
}


void __fastcall Shop17Component___CloseMenu_b__4_0(Shop17Component_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall Shop17Component___ExitMenu_b__5_0(Shop17Component_o *this, const MethodInfo *method)
{
  Shop17Menu_o *shop17Menu; // x0

  shop17Menu = this->fields.shop17Menu;
  if ( !shop17Menu
    || (Shop17Menu__Init(shop17Menu, method),
        (shop17Menu = (Shop17Menu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(shop17Menu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)shop17Menu, 0, 0LL);
}