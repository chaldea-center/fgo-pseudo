void ExchangeSvtCoinComponent___ctor(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExchangeSvtCoinComponent__Awake(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void ExchangeSvtCoinComponent__CloseMenu(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExchangeSvtCoinMenu_o *exchangeSvtCoinMenu; // x0
  BaseMenu_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4C51C3E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ExchangeSvtCoinComponent__CloseMenu_b__4_0__);
    byte_4C51C3E = 1;
  }
  exchangeSvtCoinMenu = this->fields.exchangeSvtCoinMenu;
  if ( !exchangeSvtCoinMenu
    || (ExchangeSvtCoinMenu__SetDispCurrencyInfo(exchangeSvtCoinMenu, 0, v2),
        v5 = (BaseMenu_o *)this->fields.exchangeSvtCoinMenu,
        v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_ExchangeSvtCoinComponent__CloseMenu_b__4_0__, 0),
        !v5) )
  {
    sub_1C3E7C0(exchangeSvtCoinMenu, method);
  }
  BaseMenu__Close(v5, v6, 0);
}


void ExchangeSvtCoinComponent__ExitMenu(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  BaseMenu_o *exchangeSvtCoinMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C51C3F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ExchangeSvtCoinComponent__ExitMenu_b__5_0__);
    byte_4C51C3F = 1;
  }
  exchangeSvtCoinMenu = (BaseMenu_o *)this->fields.exchangeSvtCoinMenu;
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ExchangeSvtCoinComponent__ExitMenu_b__5_0__, 0);
  if ( !exchangeSvtCoinMenu )
    sub_1C3E7C0(v5, v6);
  BaseMenu__Close(exchangeSvtCoinMenu, v4, 0);
}


void ExchangeSvtCoinComponent__HideMenu(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinMenu_o *exchangeSvtCoinMenu; // x0

  exchangeSvtCoinMenu = this->fields.exchangeSvtCoinMenu;
  if ( !exchangeSvtCoinMenu
    || (ExchangeSvtCoinMenu__Init(exchangeSvtCoinMenu, method),
        (exchangeSvtCoinMenu = (ExchangeSvtCoinMenu_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0)) == 0) )
  {
    sub_1C3E7C0(exchangeSvtCoinMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeSvtCoinMenu, 0, 0);
}


bool ExchangeSvtCoinComponent__IsOpenFolder(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinMenu_o *exchangeSvtCoinMenu; // x0

  exchangeSvtCoinMenu = this->fields.exchangeSvtCoinMenu;
  if ( !exchangeSvtCoinMenu )
    sub_1C3E7C0(0, method);
  return ExchangeSvtCoinMenu__get_IsActiveSvtCoinList(exchangeSvtCoinMenu, method);
}


void ExchangeSvtCoinComponent__OpenMenu(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeSvtCoinMenu) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeSvtCoinMenu) == 0)
    || (ExchangeSvtCoinMenu__SetDispCurrencyInfo((ExchangeSvtCoinMenu_o *)gameObject, 1, v5),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeSvtCoinMenu) == 0) )
  {
    sub_1C3E7C0(gameObject, v4);
  }
  ExchangeSvtCoinMenu__Open((ExchangeSvtCoinMenu_o *)gameObject, v4);
}


void ExchangeSvtCoinComponent___CloseMenu_b__4_0(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ExchangeSvtCoinComponent___ExitMenu_b__5_0(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinMenu_o *exchangeSvtCoinMenu; // x0

  exchangeSvtCoinMenu = this->fields.exchangeSvtCoinMenu;
  if ( !exchangeSvtCoinMenu
    || (ExchangeSvtCoinMenu__Init(exchangeSvtCoinMenu, method),
        (exchangeSvtCoinMenu = (ExchangeSvtCoinMenu_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0)) == 0) )
  {
    sub_1C3E7C0(exchangeSvtCoinMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeSvtCoinMenu, 0, 0);
}