void __fastcall ExchangeSvtCoinComponent___ctor(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinComponent__Awake(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ExchangeSvtCoinComponent__CloseMenu(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  ExchangeSvtCoinMenu_o *exchangeSvtCoinMenu; // x0
  BaseMenu_o *v6; // x20
  System_Action_o *v7; // x21

  if ( (byte_4B174D6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ExchangeSvtCoinComponent__CloseMenu_b__4_0__, v4);
    byte_4B174D6 = 1;
  }
  exchangeSvtCoinMenu = this->fields.exchangeSvtCoinMenu;
  if ( !exchangeSvtCoinMenu
    || (ExchangeSvtCoinMenu__SetDispCurrencyInfo(exchangeSvtCoinMenu, 0, v2),
        v6 = (BaseMenu_o *)this->fields.exchangeSvtCoinMenu,
        v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ExchangeSvtCoinComponent__CloseMenu_b__4_0__, 0LL),
        !v6) )
  {
    sub_1BCB254(exchangeSvtCoinMenu, method);
  }
  BaseMenu__Close(v6, v7, 0LL);
}


void __fastcall ExchangeSvtCoinComponent__ExitMenu(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BaseMenu_o *exchangeSvtCoinMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B174D7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ExchangeSvtCoinComponent__ExitMenu_b__5_0__, v3);
    byte_4B174D7 = 1;
  }
  exchangeSvtCoinMenu = (BaseMenu_o *)this->fields.exchangeSvtCoinMenu;
  v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ExchangeSvtCoinComponent__ExitMenu_b__5_0__, 0LL);
  if ( !exchangeSvtCoinMenu )
    sub_1BCB254(v6, v7);
  BaseMenu__Close(exchangeSvtCoinMenu, v5, 0LL);
}


void __fastcall ExchangeSvtCoinComponent__HideMenu(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinMenu_o *exchangeSvtCoinMenu; // x0

  exchangeSvtCoinMenu = this->fields.exchangeSvtCoinMenu;
  if ( !exchangeSvtCoinMenu
    || (ExchangeSvtCoinMenu__Init(exchangeSvtCoinMenu, method),
        (exchangeSvtCoinMenu = (ExchangeSvtCoinMenu_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL)) == 0LL) )
  {
    sub_1BCB254(exchangeSvtCoinMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeSvtCoinMenu, 0, 0LL);
}


bool __fastcall ExchangeSvtCoinComponent__IsOpenFolder(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinMenu_o *exchangeSvtCoinMenu; // x0

  exchangeSvtCoinMenu = this->fields.exchangeSvtCoinMenu;
  if ( !exchangeSvtCoinMenu )
    sub_1BCB254(0LL, method);
  return ExchangeSvtCoinMenu__get_IsActiveSvtCoinList(exchangeSvtCoinMenu, method);
}


void __fastcall ExchangeSvtCoinComponent__OpenMenu(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeSvtCoinMenu) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeSvtCoinMenu) == 0LL)
    || (ExchangeSvtCoinMenu__SetDispCurrencyInfo((ExchangeSvtCoinMenu_o *)gameObject, 1, v5),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeSvtCoinMenu) == 0LL) )
  {
    sub_1BCB254(gameObject, v4);
  }
  ExchangeSvtCoinMenu__Open((ExchangeSvtCoinMenu_o *)gameObject, v4);
}


void __fastcall ExchangeSvtCoinComponent___CloseMenu_b__4_0(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ExchangeSvtCoinComponent___ExitMenu_b__5_0(ExchangeSvtCoinComponent_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinMenu_o *exchangeSvtCoinMenu; // x0

  exchangeSvtCoinMenu = this->fields.exchangeSvtCoinMenu;
  if ( !exchangeSvtCoinMenu
    || (ExchangeSvtCoinMenu__Init(exchangeSvtCoinMenu, method),
        (exchangeSvtCoinMenu = (ExchangeSvtCoinMenu_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL)) == 0LL) )
  {
    sub_1BCB254(exchangeSvtCoinMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeSvtCoinMenu, 0, 0LL);
}