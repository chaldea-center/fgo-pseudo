void __fastcall ShopSceneListViewControlHelper___ctor(
        ShopSceneListViewControlHelper_o *this,
        UnityEngine_GameObject_o *topListViewBase,
        UnityEngine_GameObject_o *eventListViewBase,
        UnityEngine_GameObject_o *buyItemListViewBase,
        UnityEngine_GameObject_o *helpListViewBase,
        ShopCurrencyInfoController_o *currencyInfoController,
        ShopTopListViewManager_o *topListViewManager,
        ShopEventListViewManager_o *eventListViewManager,
        ShopBuyItemListViewManager_o *buyItemListViewManager,
        ServantSellMenu_o *servantSellMenu,
        ShopHelpListViewManager_o *helpListViewManager,
        const MethodInfo *method)
{
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.topListViewBase = topListViewBase;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)topListViewBase, v20, v21);
  this->fields.eventListViewBase = eventListViewBase;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventListViewBase,
    (int32_t)eventListViewBase,
    v22,
    v23);
  this->fields.buyItemListViewBase = buyItemListViewBase;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.buyItemListViewBase,
    (int32_t)buyItemListViewBase,
    v24,
    v25);
  this->fields.helpListViewBase = helpListViewBase;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.helpListViewBase, (int32_t)helpListViewBase, v26, v27);
  this->fields.currencyInfoController = currencyInfoController;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.currencyInfoController,
    (int32_t)currencyInfoController,
    v28,
    v29);
  this->fields.topListViewManager = topListViewManager;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.topListViewManager,
    (int32_t)topListViewManager,
    v30,
    v31);
  this->fields.eventListViewManager = eventListViewManager;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventListViewManager,
    (int32_t)eventListViewManager,
    v32,
    v33);
  this->fields.buyItemListViewManager = buyItemListViewManager;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.buyItemListViewManager,
    (int32_t)buyItemListViewManager,
    v34,
    v35);
  this->fields.servantSellMenu = servantSellMenu;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantSellMenu, (int32_t)servantSellMenu, v36, v37);
  this->fields.helpListViewManager = helpListViewManager;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.helpListViewManager,
    (int32_t)helpListViewManager,
    v38,
    v39);
}


int32_t __fastcall ShopSceneListViewControlHelper__GetEventId(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t index,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0
  ShopEventListViewItem_o *Item; // x0

  if ( state == 8 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager )
      sub_1B9026C(0LL, state);
    Item = ShopEventListViewManager__GetItem(eventListViewManager, index, 0LL);
    if ( Item )
      LODWORD(Item) = Item->fields.eventId;
  }
  else
  {
    LODWORD(Item) = 0;
  }
  return (int)Item;
}


int32_t __fastcall ShopSceneListViewControlHelper__GetHierarchy(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( (unsigned int)(state - 1) > 0x14 )
    return 0;
  else
    return dword_BF0ACC[state - 1];
}


bool __fastcall ShopSceneListViewControlHelper__GetIsBuyItemList(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( (unsigned int)(state - 2) > 0x13 )
    LOBYTE(v3) = 0;
  else
    return (0xF765Fu >> (state - 2)) & 1;
  return v3;
}


ShopBuyItemListViewItem_o *__fastcall ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
        ShopSceneListViewControlHelper_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0

  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    sub_1B9026C(0LL, index);
  return ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
}


ShopEventListViewItem_o *__fastcall ShopSceneListViewControlHelper__GetShopEventListViewItem(
        ShopSceneListViewControlHelper_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  eventListViewManager = this->fields.eventListViewManager;
  if ( !eventListViewManager )
    sub_1B9026C(0LL, index);
  return ShopEventListViewManager__GetItem(eventListViewManager, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetBgm(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        bool isEnter,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  ShopRootConstants_c *v8; // x0
  System_String_o *SVT_COSTUME_BGM_NAME; // x19

  if ( (byte_4A6C555 & 1) == 0 )
  {
    sub_1B90010(&BgmManager_TypeInfo, *(_QWORD *)&state);
    sub_1B90010(&ShopRootConstants_TypeInfo, v6);
    sub_1B90010(&SoundManager_TypeInfo, v7);
    byte_4A6C555 = 1;
  }
  if ( state == 15 )
  {
    if ( isEnter )
    {
      v8 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v8 = ShopRootConstants_TypeInfo;
      }
      SVT_COSTUME_BGM_NAME = v8->static_fields->SVT_COSTUME_BGM_NAME;
    }
    else
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      SVT_COSTUME_BGM_NAME = BgmManager__GetMainBgmName(0LL);
    }
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(SVT_COSTUME_BGM_NAME, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetBuyItemListView(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *buyItemListViewBase; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x22
  ShopCurrencyInfoController_o *currencyInfoController; // x21

  if ( ShopSceneListViewControlHelper__GetIsBuyItemList(this, state, *(const MethodInfo **)&eventId) )
  {
    buyItemListViewBase = this->fields.buyItemListViewBase;
    if ( !buyItemListViewBase )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(buyItemListViewBase, 1, 0LL);
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( state == 8 )
    {
      if ( !buyItemListViewManager )
        goto LABEL_12;
      ShopBuyItemListViewManager__CreateList_32904896(this->fields.buyItemListViewManager, eventId, 0LL);
    }
    else
    {
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0LL);
      if ( !buyItemListViewManager )
        goto LABEL_12;
      ShopBuyItemListViewManager__CreateList(buyItemListViewManager, (int32_t)buyItemListViewBase, 0LL);
      currencyInfoController = this->fields.currencyInfoController;
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0LL);
      if ( !currencyInfoController )
        goto LABEL_12;
      ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, (int32_t)buyItemListViewBase, state, 0LL);
    }
    buyItemListViewBase = (UnityEngine_GameObject_o *)this->fields.buyItemListViewManager;
    if ( buyItemListViewBase )
    {
      ShopBuyItemListViewManager__SetMode_32910556(
        (ShopBuyItemListViewManager_o *)buyItemListViewBase,
        1,
        this->fields.onMoveEnd,
        0.1,
        0LL);
      return;
    }
LABEL_12:
    sub_1B9026C(buyItemListViewBase, v7);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetBuyItemListViewClear(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ListViewManager_o *buyItemListViewManager; // x0

  if ( ShopSceneListViewControlHelper__GetIsBuyItemList(this, state, method) )
  {
    buyItemListViewManager = (ListViewManager_o *)this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager
      || (ListViewManager__DestroyList(buyItemListViewManager, 0LL),
          (buyItemListViewManager = (ListViewManager_o *)this->fields.buyItemListViewBase) == 0LL) )
    {
      sub_1B9026C(buyItemListViewManager, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 0, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetBuyItemListViewExit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0

  if ( ShopSceneListViewControlHelper__GetIsBuyItemList(this, state, method) )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      sub_1B9026C(0LL, v4);
    ShopBuyItemListViewManager__SetMode_32910556(buyItemListViewManager, 4, this->fields.onMoveEnd, 0.1, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetBuyItemListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0

  if ( ShopSceneListViewControlHelper__GetIsBuyItemList(this, state, method) )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      sub_1B9026C(0LL, v4);
    ShopBuyItemListViewManager__SetMode(buyItemListViewManager, 2, this->fields.onSelectBuyItem, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetBuyItemListViewModify(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0

  if ( ShopSceneListViewControlHelper__GetIsBuyItemList(this, state, method) )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_7;
    if ( ShopBuyItemListViewManager__ModifyList(buyItemListViewManager, 0LL) )
    {
      buyItemListViewManager = this->fields.buyItemListViewManager;
      if ( buyItemListViewManager )
      {
        ShopBuyItemListViewManager__SetMode_32909284(buyItemListViewManager, 5, 0LL);
        return;
      }
LABEL_7:
      sub_1B9026C(buyItemListViewManager, v4);
    }
  }
}


void __fastcall ShopSceneListViewControlHelper__SetCallbackEvents(
        ShopSceneListViewControlHelper_o *this,
        System_Action_o *onMoveEnd,
        System_Action_ShopRootConstants_State__o *onSelectTop,
        System_Action_int__o *onSelectEvent,
        System_Action_int__o *onSelectBuyItem,
        System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant,
        System_Action_o *onOpenHelp,
        const MethodInfo *method)
{
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3

  this->fields.onMoveEnd = onMoveEnd;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    (int32_t)onSelectTop,
    (int32_t)onSelectEvent);
  this->fields.onSelectTop = onSelectTop;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onSelectTop, (int32_t)onSelectTop, v14, v15);
  this->fields.onSelectEvent = onSelectEvent;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onSelectEvent, (int32_t)onSelectEvent, v16, v17);
  this->fields.onSelectBuyItem = onSelectBuyItem;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onSelectBuyItem, (int32_t)onSelectBuyItem, v18, v19);
  this->fields.onSelectSellServant = onSelectSellServant;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelectSellServant,
    (int32_t)onSelectSellServant,
    v20,
    v21);
  this->fields.onOpenHelp = onOpenHelp;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onOpenHelp, (int32_t)onOpenHelp, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetEventListView(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventListViewManager; // x0
  System_Action_o *onMoveEnd; // x2
  int32_t v6; // w1

  if ( state == 8 )
  {
    eventListViewManager = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
    if ( eventListViewManager )
    {
      onMoveEnd = this->fields.onMoveEnd;
      v6 = 3;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B9026C(eventListViewManager, *(_QWORD *)&state);
  }
  if ( state == 7 )
  {
    eventListViewManager = this->fields.eventListViewBase;
    if ( eventListViewManager )
    {
      UnityEngine_GameObject__SetActive(eventListViewManager, 1, 0LL);
      eventListViewManager = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
      if ( eventListViewManager )
      {
        ShopEventListViewManager__CreateList((ShopEventListViewManager_o *)eventListViewManager, 0, 0LL);
        eventListViewManager = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
        if ( eventListViewManager )
        {
          onMoveEnd = this->fields.onMoveEnd;
          v6 = 1;
LABEL_9:
          ShopEventListViewManager__SetMode_32934060(
            (ShopEventListViewManager_o *)eventListViewManager,
            v6,
            onMoveEnd,
            0LL);
          return;
        }
      }
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetEventListViewClear(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  if ( state == 7 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager
      || (ShopEventListViewManager__DestroyList(eventListViewManager, 0LL),
          (eventListViewManager = (ShopEventListViewManager_o *)this->fields.eventListViewBase) == 0LL) )
    {
      sub_1B9026C(eventListViewManager, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventListViewManager, 0, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetEventListViewExit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  if ( state == 7 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager )
      sub_1B9026C(0LL, state);
    ShopEventListViewManager__SetMode_32934060(eventListViewManager, 4, this->fields.onMoveEnd, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetEventListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  if ( state == 7 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager )
      sub_1B9026C(0LL, state);
    ShopEventListViewManager__SetMode(eventListViewManager, 2, this->fields.onSelectEvent, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetEventListViewOnInit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t eventId,
        int32_t *selectedEventIndex,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventListViewBase; // x0
  ShopEventListViewItem_o *v9; // x0
  int32_t v10; // w8

  if ( state != 8 )
  {
    *selectedEventIndex = 0;
    return;
  }
  eventListViewBase = this->fields.eventListViewBase;
  if ( !eventListViewBase )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(eventListViewBase, 1, 0LL);
  eventListViewBase = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__CreateList((ShopEventListViewManager_o *)eventListViewBase, 0, 0LL);
  eventListViewBase = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
  if ( !eventListViewBase )
    goto LABEL_16;
  v9 = ShopEventListViewManager__SearchItem((ShopEventListViewManager_o *)eventListViewBase, eventId, 0LL);
  v10 = v9 ? v9->fields.index : 0;
  *selectedEventIndex = v10;
  eventListViewBase = this->fields.eventListViewBase;
  if ( !eventListViewBase )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(eventListViewBase, eventId < 1, 0LL);
  eventListViewBase = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__SearchItem((ShopEventListViewManager_o *)eventListViewBase, eventId, 0LL);
  eventListViewBase = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
  if ( eventId >= 1 )
  {
    if ( eventListViewBase )
    {
      ShopEventListViewManager__SetMode_32933896((ShopEventListViewManager_o *)eventListViewBase, 6, 0LL);
      return;
    }
LABEL_16:
    sub_1B9026C(eventListViewBase, *(_QWORD *)&state);
  }
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__SetMode_32934060(
    (ShopEventListViewManager_o *)eventListViewBase,
    1,
    this->fields.onMoveEnd,
    0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetEventListViewRetry(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  if ( state == 8 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager )
      sub_1B9026C(0LL, state);
    ShopEventListViewManager__SetMode_32934060(eventListViewManager, 5, this->fields.onMoveEnd, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetGiftButtonEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Component_o *giftButtonControl; // x0

  if ( (unsigned int)state <= 0x15 && ((1 << state) & 0x3D99DE) != 0 )
  {
    giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
    if ( !giftButtonControl
      || (giftButtonControl = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(giftButtonControl, 0LL)) == 0LL )
    {
      sub_1B9026C(giftButtonControl, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)giftButtonControl, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetGiftButtonPosition(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *giftButtonControl; // x0
  UnityEngine_Transform_o *transform; // x19
  const MethodInfo *v9; // x1
  bool IsShowEventItemWindow; // w20
  int v11; // s0

  if ( (byte_4A6C558 & 1) == 0 )
  {
    sub_1B90010(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    byte_4A6C558 = 1;
  }
  giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
  if ( !giftButtonControl )
    goto LABEL_8;
  transform = UnityEngine_Component__get_transform(giftButtonControl, 0LL);
  IsShowEventItemWindow = ShopBuyItemListViewManager__GetIsShowEventItemWindow(state, eventId, 0LL);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  *(UnityEngine_Vector3_o *)&v11 = ShopRootConstants__GetGiftButtonPos(IsShowEventItemWindow, v9);
  if ( !transform )
LABEL_8:
    sub_1B9026C(giftButtonControl, *(_QWORD *)&state);
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetGiftButtonUnEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Component_o *giftButtonControl; // x0

  if ( (unsigned int)state <= 0x15 && ((1 << state) & 0x3D9B5C) != 0 )
  {
    giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
    if ( !giftButtonControl
      || (giftButtonControl = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(giftButtonControl, 0LL)) == 0LL )
    {
      sub_1B9026C(giftButtonControl, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)giftButtonControl, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetGuideDetail(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        System_Action_o *endSet,
        bool isEnter,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  GuideEntity_o *GuideData; // x21
  ShopRootConstants_c *v20; // x0
  int *p_bgImageId; // x8
  int v22; // w24
  System_String_o *BG_ROOT; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  ShopRootConstants_c *v29; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  ExUITexture_o *backgroundTexture; // x23
  ShopRootConstants_c *v34; // x0
  int32_t guideFaceId; // w4
  int32_t *p_guideImageId; // x8
  int32_t *p_guideLimitCount; // x9
  struct ShopRootConstants_StaticFields *v38; // x9
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-38h] BYREF
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A6C554 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_GuideMaster___, *(_QWORD *)&state);
    sub_1B90010(&FSUtility_TypeInfo, v9);
    sub_1B90010(&int_TypeInfo, v10);
    sub_1B90010(&ShopRootConstants_TypeInfo, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A6C554 = 1;
  }
  if ( state == 15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_GuideMaster___);
    if ( !Instance )
      goto LABEL_32;
    v15 = isEnter ? 3 : 2;
    GuideData = GuideMaster__getGuideData((GuideMaster_o *)Instance, v15, 0LL);
    if ( GuideData )
    {
      v20 = ShopRootConstants_TypeInfo;
      p_bgImageId = &GuideData->fields.bgImageId;
    }
    else
    {
      v20 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v20 = ShopRootConstants_TypeInfo;
      }
      p_bgImageId = &v20->static_fields->DEFAULT_BG_ID;
    }
    v22 = *p_bgImageId;
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ShopRootConstants_TypeInfo;
    }
    BG_ROOT = v20->static_fields->BG_ROOT;
    v40 = v22;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v16, v17, v18);
    Instance = (DataManager_o *)System_String__Format(BG_ROOT, v24, 0LL);
    if ( !this->fields.backgroundTexture )
      goto LABEL_32;
    v25 = (System_String_o *)Instance;
    if ( !ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0LL, 0LL) )
    {
      v29 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v29 = ShopRootConstants_TypeInfo;
      }
      static_fields = v29->static_fields;
      v31 = static_fields->BG_ROOT;
      DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID, v26, v27, v28);
      Instance = (DataManager_o *)System_String__Format(v31, v32, 0LL);
      if ( !this->fields.backgroundTexture )
        goto LABEL_32;
      v25 = (System_String_o *)Instance;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0LL, 0LL);
    }
    backgroundTexture = this->fields.backgroundTexture;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    FSUtility__SetUpBackTextureSize(backgroundTexture, v25, 0LL);
    v34 = ShopRootConstants_TypeInfo;
    if ( ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      if ( GuideData )
      {
LABEL_26:
        guideFaceId = GuideData->fields.guideFaceId;
        p_guideImageId = &GuideData->fields.guideImageId;
        p_guideLimitCount = &GuideData->fields.guideLimitCount;
        goto LABEL_29;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v34 = ShopRootConstants_TypeInfo;
      if ( GuideData )
        goto LABEL_26;
    }
    v38 = v34->static_fields;
    guideFaceId = 0;
    p_guideImageId = &v38->DEFAULT_FIGURE_ID;
    p_guideLimitCount = &v38->DEFAULT_FIGURE_LIMIT_CNT;
LABEL_29:
    Instance = (DataManager_o *)this->fields.standFigureBack;
    if ( Instance )
    {
      StandFigureBack__CreatedStandFigure(
        (StandFigureBack_o *)Instance,
        *p_guideImageId,
        *p_guideLimitCount,
        1,
        guideFaceId,
        endSet,
        0,
        0LL);
      return;
    }
LABEL_32:
    sub_1B9026C(Instance, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetHelpButtonEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *HelpSaveKey; // x20
  TitleInfoControl_o *Int; // x0
  __int64 v9; // x1
  struct System_Action_o *onOpenHelp; // x8

  if ( (byte_4A6C556 & 1) == 0 )
  {
    sub_1B90010(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    sub_1B90010(&TutorialFlag_TypeInfo, v5);
    sub_1B90010(&StringLiteral_1/*""*/, v6);
    byte_4A6C556 = 1;
  }
  if ( (unsigned int)state <= 0x14 && ((1 << state) & 0x10006A) != 0 )
  {
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    HelpSaveKey = ShopRootConstants__GetHelpSaveKey(state, *(const MethodInfo **)&state);
    if ( System_String__op_Inequality(HelpSaveKey, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      Int = (TitleInfoControl_o *)UnityEngine_PlayerPrefs__GetInt(HelpSaveKey, 0, 0LL);
      if ( (_DWORD)Int )
        goto LABEL_9;
    }
    else
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      Int = (TitleInfoControl_o *)TutorialFlag__Get_37740444(103, 0LL);
      if ( ((unsigned __int8)Int & 1) != 0 )
      {
LABEL_9:
        Int = this->fields.titleInfo;
        if ( Int )
        {
          TitleInfoControl__SetHelpBtn(Int, 1, 0LL);
          return;
        }
LABEL_17:
        sub_1B9026C(Int, v9);
      }
    }
    onOpenHelp = this->fields.onOpenHelp;
    if ( !onOpenHelp )
      goto LABEL_17;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onOpenHelp->fields.m_target)(
      onOpenHelp->fields.original_method_info,
      *(_QWORD *)&onOpenHelp->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetHelpButtonPosition(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // s0

  if ( (byte_4A6C557 & 1) == 0 )
  {
    sub_1B90010(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    byte_4A6C557 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  *(UnityEngine_Vector3_o *)&v8 = ShopRootConstants__GetHelpButtonPos(state, *(const MethodInfo **)&state);
  if ( !titleInfo )
    sub_1B9026C(v6, v7);
  TitleInfoControl__SetHelpBtnPos(titleInfo, *(UnityEngine_Vector3_o *)&v8, 0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetHelpButtonUnEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( state != 10 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      sub_1B9026C(0LL, state);
    TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetHelpListViewClose(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopHelpListViewManager_o *helpListViewManager; // x0

  if ( state == 13 )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager
      || (ShopHelpListViewManager__DestroyList(helpListViewManager, 0LL),
          (helpListViewManager = (ShopHelpListViewManager_o *)this->fields.helpListViewBase) == 0LL) )
    {
      sub_1B9026C(helpListViewManager, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpListViewManager, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetHelpListViewOpen(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpListViewBase; // x0

  if ( state == 13 )
  {
    helpListViewBase = this->fields.helpListViewBase;
    if ( !helpListViewBase
      || (UnityEngine_GameObject__SetActive(helpListViewBase, 1, 0LL),
          (helpListViewBase = (UnityEngine_GameObject_o *)this->fields.helpListViewManager) == 0LL) )
    {
      sub_1B9026C(helpListViewBase, *(_QWORD *)&state);
    }
    ShopHelpListViewManager__CreateList((ShopHelpListViewManager_o *)helpListViewBase, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetListViewInvalidate(
        ShopSceneListViewControlHelper_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_17;
  buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buyItemListViewManager, 0LL);
  if ( !buyItemListViewManager )
    goto LABEL_17;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)buyItemListViewManager, 0LL) )
  {
    buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_17;
    ShopBuyItemListViewManager__InvalidateList((ShopBuyItemListViewManager_o *)buyItemListViewManager, 0LL);
  }
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.eventListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_17;
  buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buyItemListViewManager, 0LL);
  if ( !buyItemListViewManager )
    goto LABEL_17;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)buyItemListViewManager, 0LL) )
  {
    buyItemListViewManager = (UnityEngine_Component_o *)this->fields.eventListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_17;
    ShopEventListViewManager__InvalidateList((ShopEventListViewManager_o *)buyItemListViewManager, 0LL);
  }
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              buyItemListViewManager,
                                                              0LL)) == 0LL )
  {
LABEL_17:
    sub_1B9026C(buyItemListViewManager, method);
  }
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)buyItemListViewManager, 0LL) )
  {
    buyItemListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
    if ( buyItemListViewManager )
    {
      ShopTopListViewManager__InvalidateList((ShopTopListViewManager_o *)buyItemListViewManager, method);
      return;
    }
    goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetListViewOnBackMenu(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t backedState,
        System_Action_o *endGuildSet,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x4
  ShopSceneListViewControlHelper_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  ShopSceneListViewControlHelper__SetTopListViewRetry(this, state, *(const MethodInfo **)&backedState);
  ShopSceneListViewControlHelper__SetEventListViewRetry(this, state, v9);
  ShopSceneListViewControlHelper__SetEventListViewExit(this, state, v10);
  ShopSceneListViewControlHelper__SetBuyItemListViewExit(this, state, v11);
  ShopSceneListViewControlHelper__SetSellServantMenuExit(this, state, v12);
  ShopSceneListViewControlHelper__SetStandFigureBackFadein(this, state, v13);
  ShopSceneListViewControlHelper__SetGuideDetail(this, state, endGuildSet, 0, v14);
  ShopSceneListViewControlHelper__SetBgm(v15, state, 0, v16);
  ShopSceneListViewControlHelper__SetTitleInfo(this, backedState, v17);
  ShopSceneListViewControlHelper__SetGiftButtonUnEnable(this, state, v18);
}


void __fastcall ShopSceneListViewControlHelper__SetListViewOnCloseBuyItemConfirm(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  ShopSceneListViewControlHelper__SetBuyItemListViewModify(this, state, method);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(this, state, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x19
  System_Action_o *v13; // x20

  if ( (byte_4A6C552 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1B90010(&Method_ShopSceneListViewControlHelper___c__DisplayClass31_0__SetListViewOnCloseEventShop_b__0__, v5);
    sub_1B90010(&ShopSceneListViewControlHelper___c__DisplayClass31_0_TypeInfo, v6);
    byte_4A6C552 = 1;
  }
  v7 = sub_1B9025C(ShopSceneListViewControlHelper___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = state;
  if ( state == 8 )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    v13 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)v7,
      Method_ShopSceneListViewControlHelper___c__DisplayClass31_0__SetListViewOnCloseEventShop_b__0__,
      0LL);
    if ( buyItemListViewManager )
    {
      ShopBuyItemListViewManager__SetMode_32910556(buyItemListViewManager, 4, v13, 0.1, 0LL);
      return;
    }
LABEL_8:
    sub_1B9026C(v8, v9);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetListViewOnCloseSellServantConfirm(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        System_Int64_array *selectedServantIds,
        System_Int64_array *selectedCommandCodeIds,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  ShopSceneListViewControlHelper__SetSellServantMenuModify(
    this,
    state,
    selectedServantIds,
    selectedCommandCodeIds,
    method);
  ShopSceneListViewControlHelper__SetSellServantMenuInput(this, state, v7);
}


void __fastcall ShopSceneListViewControlHelper__SetListViewOnCloseStonePurchase(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  ShopSceneListViewControlHelper__SetTopListViewInput(this, state, method);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(this, state, v5);
}


void __fastcall ShopSceneListViewControlHelper__SetListViewOnOpenHelp(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *topListViewBase; // x0

  ShopSceneListViewControlHelper__SetHelpListViewOpen(this, state, method);
  topListViewBase = this->fields.topListViewBase;
  if ( !topListViewBase )
    sub_1B9026C(0LL, v4);
  UnityEngine_GameObject__SetActive(topListViewBase, 0, 0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetListViewOnQuitHelp(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *topListViewBase; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  topListViewBase = this->fields.topListViewBase;
  if ( !topListViewBase )
    sub_1B9026C(0LL, state);
  UnityEngine_GameObject__SetActive(topListViewBase, 1, 0LL);
  ShopSceneListViewControlHelper__SetTopListViewRetry(this, state, v6);
  ShopSceneListViewControlHelper__SetHelpListViewClose(this, state, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetListViewOnSceneInit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t jumpInfoId,
        float overrideScrollBarValue,
        int32_t *selectedEventIndex,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  const MethodInfo *v18; // x2

  ShopSceneListViewControlHelper__SetTopListViewOnInit(
    this,
    state,
    overrideScrollBarValue,
    *(const MethodInfo **)&jumpInfoId);
  ShopSceneListViewControlHelper__SetEventListViewOnInit(this, state, jumpInfoId, selectedEventIndex, v10);
  ShopSceneListViewControlHelper__SetBuyItemListView(this, state, jumpInfoId, v11);
  ShopSceneListViewControlHelper__SetTitleInfo(this, state, v12);
  ShopSceneListViewControlHelper__SetHelpButtonUnEnable(this, state, v13);
  ShopSceneListViewControlHelper__SetGiftButtonUnEnable(this, state, v14);
  ShopSceneListViewControlHelper__SetStandFigureBackFadeout(this, state, v15);
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    sub_1B9026C(0LL, v16);
  ServantSellMenu__Init_32846484(servantSellMenu, jumpInfoId, 0LL);
  ShopSceneListViewControlHelper__SetSellServantMenuInput(this, state, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetListViewOnSceneQuit(
        ShopSceneListViewControlHelper_o *this,
        const MethodInfo *method)
{
  char *topListViewManager; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A6C551 & 1) == 0 )
  {
    sub_1B90010(&ShopRootConstants_TypeInfo, method);
    byte_4A6C551 = 1;
  }
  topListViewManager = (char *)this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_21;
  ShopTopListViewManager__DestroyList((ShopTopListViewManager_o *)topListViewManager, method);
  topListViewManager = (char *)this->fields.buyItemListViewManager;
  if ( !topListViewManager )
    goto LABEL_21;
  ListViewManager__DestroyList((ListViewManager_o *)topListViewManager, 0LL);
  topListViewManager = (char *)this->fields.eventListViewManager;
  if ( !topListViewManager )
    goto LABEL_21;
  ShopEventListViewManager__DestroyList((ShopEventListViewManager_o *)topListViewManager, 0LL);
  topListViewManager = (char *)this->fields.helpListViewManager;
  if ( !topListViewManager )
    goto LABEL_21;
  ShopHelpListViewManager__DestroyList((ShopHelpListViewManager_o *)topListViewManager, 0LL);
  topListViewManager = (char *)this->fields.topListViewBase;
  if ( !topListViewManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  topListViewManager = (char *)this->fields.buyItemListViewBase;
  if ( !topListViewManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  topListViewManager = (char *)this->fields.eventListViewBase;
  if ( !topListViewManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_21;
  topListViewManager = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)topListViewManager, 0LL);
  if ( !topListViewManager )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)topListViewManager, 0LL);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  *(UnityEngine_Vector3_o *)&v6 = ShopRootConstants__GetGiftButtonPos(0, v4);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_21;
  topListViewManager = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)topListViewManager, 0LL);
  if ( !topListViewManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager
    || (*((_QWORD *)topListViewManager + 13) = 0LL,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(topListViewManager + 104), 0, v9, v10),
        (topListViewManager = (char *)this->fields.giftButtonControl) == 0LL)
    || (*((_QWORD *)topListViewManager + 12) = 0LL,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(topListViewManager + 96), 0, v11, v12),
        (topListViewManager = (char *)this->fields.helpListViewManager) == 0LL) )
  {
LABEL_21:
    sub_1B9026C(topListViewManager, method);
  }
  ShopHelpListViewManager__ReleaseBaseSprite((ShopHelpListViewManager_o *)topListViewManager, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t *eventId,
        int32_t selectedEventIndex,
        System_Action_o *endGuildSet,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x4
  ShopSceneListViewControlHelper_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  *eventId = ShopSceneListViewControlHelper__GetEventId(
               this,
               state,
               selectedEventIndex,
               *(const MethodInfo **)&selectedEventIndex);
  ShopSceneListViewControlHelper__SetTopListViewEnter(this, state, v10);
  ShopSceneListViewControlHelper__SetEventListView(this, state, v11);
  ShopSceneListViewControlHelper__SetBuyItemListView(this, state, *eventId, v12);
  ShopSceneListViewControlHelper__SetStandFigureBackFadeout(this, state, v13);
  ShopSceneListViewControlHelper__SetGuideDetail(this, state, endGuildSet, 1, v14);
  ShopSceneListViewControlHelper__SetBgm(v15, state, 1, v16);
  ShopSceneListViewControlHelper__SetSellServantMenuInput(this, state, v17);
  ShopSceneListViewControlHelper__SetTitleInfo(this, state, v18);
  ShopSceneListViewControlHelper__SetHelpButtonUnEnable(this, state, v19);
  ShopSceneListViewControlHelper__SetGiftButtonUnEnable(this, state, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetListViewOnStateInitEnd(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t selectedEventIndex,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  int32_t EventId; // w0
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  ShopSceneListViewControlHelper__SetGiftButtonEnable(this, state, *(const MethodInfo **)&selectedEventIndex);
  EventId = ShopSceneListViewControlHelper__GetEventId(this, state, selectedEventIndex, v7);
  ShopSceneListViewControlHelper__SetGiftButtonPosition(this, state, EventId, v9);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(this, state, v10);
  ShopSceneListViewControlHelper__SetHelpButtonPosition(this, state, v11);
  ShopSceneListViewControlHelper__SetTopListViewInput(this, state, v12);
  ShopSceneListViewControlHelper__SetEventListViewInput(this, state, v13);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(this, state, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetListViewOnStateQuitEnd(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t backedState,
        int32_t selectedEventIndex,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  int32_t EventId; // w0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  ShopSceneListViewControlHelper__SetEventListViewClear(this, state, *(const MethodInfo **)&backedState);
  ShopSceneListViewControlHelper__SetBuyItemListViewClear(this, state, v9);
  ShopSceneListViewControlHelper__SetSellServantMenuClear(this, state, v10);
  ShopSceneListViewControlHelper__SetGiftButtonEnable(this, backedState, v11);
  EventId = ShopSceneListViewControlHelper__GetEventId(this, backedState, selectedEventIndex, v12);
  ShopSceneListViewControlHelper__SetGiftButtonPosition(this, backedState, EventId, v14);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(this, backedState, v15);
  ShopSceneListViewControlHelper__SetHelpButtonPosition(this, backedState, v16);
  ShopSceneListViewControlHelper__SetTopListViewInput(this, backedState, v17);
  ShopSceneListViewControlHelper__SetEventListViewInput(this, backedState, v18);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(this, backedState, v19);
}


void __fastcall ShopSceneListViewControlHelper__SetOtherObjects(
        ShopSceneListViewControlHelper_o *this,
        TitleInfoControl_o *titleInfo,
        StandFigureBack_o *standFigureBack,
        GiftButtonCtrl_o *giftButtonControl,
        ExUITexture_o *backgroundTexture,
        const MethodInfo *method)
{
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  this->fields.titleInfo = titleInfo;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.titleInfo,
    (int32_t)titleInfo,
    (int32_t)standFigureBack,
    (int32_t)giftButtonControl);
  this->fields.standFigureBack = standFigureBack;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.standFigureBack, (int32_t)standFigureBack, v10, v11);
  this->fields.giftButtonControl = giftButtonControl;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.giftButtonControl,
    (int32_t)giftButtonControl,
    v12,
    v13);
  this->fields.backgroundTexture = backgroundTexture;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.backgroundTexture,
    (int32_t)backgroundTexture,
    v14,
    v15);
}


void __fastcall ShopSceneListViewControlHelper__SetSellServantMenuClear(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  if ( state == 9 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      sub_1B9026C(0LL, state);
    ServantSellMenu__Init(servantSellMenu, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetSellServantMenuExit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  if ( state == 9 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu
      || (ServantSellMenu__InitBackListView(servantSellMenu, 0LL),
          (servantSellMenu = this->fields.servantSellMenu) == 0LL) )
    {
      sub_1B9026C(servantSellMenu, *(_QWORD *)&state);
    }
    ServantSellMenu__Close(servantSellMenu, this->fields.onMoveEnd, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetSellServantMenuInit(
        ShopSceneListViewControlHelper_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    sub_1B9026C(0LL, kind);
  ServantSellMenu__Init_32846484(servantSellMenu, kind, 0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetSellServantMenuInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 9 )
  {
    if ( !this->fields.servantSellMenu )
      sub_1B9026C(this, state);
    ServantSellMenu__Open(this->fields.servantSellMenu, this->fields.onSelectSellServant, this->fields.onMoveEnd, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetSellServantMenuModify(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        System_Int64_array *servantIds,
        System_Int64_array *commandCodeIds,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  if ( state == 9 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      sub_1B9026C(0LL, state);
    ServantSellMenu__ModifyListItem(servantSellMenu, servantIds, commandCodeIds, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetStandFigureBackFadein(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  if ( state == 9 )
  {
    standFigureBack = this->fields.standFigureBack;
    if ( !standFigureBack )
      sub_1B9026C(0LL, state);
    StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetStandFigureBackFadeout(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  if ( state == 9 )
  {
    standFigureBack = this->fields.standFigureBack;
    if ( !standFigureBack )
      sub_1B9026C(0LL, state);
    StandFigureBack__Fadeout(standFigureBack, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetTitleInfo(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  int32_t v6; // w2
  TitleInfoControl_o *v7; // x19

  if ( (byte_4A6C553 & 1) == 0 )
  {
    sub_1B90010(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    byte_4A6C553 = 1;
  }
  if ( state == 15 )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      TitleInfoControl__changeTitleInfo_37240592(titleInfo, 1, 37, 0, 0LL);
      v7 = this->fields.titleInfo;
      titleInfo = (TitleInfoControl_o *)ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      if ( v7 )
      {
        TitleInfoControl__setTitleImgFromBanner(
          v7,
          ShopRootConstants_TypeInfo->static_fields->SVT_COSTUME_TITLE_ID,
          0,
          1,
          0,
          0LL);
        return;
      }
    }
    goto LABEL_15;
  }
  if ( state != 9 )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      v6 = 37;
      goto LABEL_14;
    }
LABEL_15:
    sub_1B9026C(titleInfo, *(_QWORD *)&state);
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  v6 = 38;
LABEL_14:
  TitleInfoControl__changeTitleInfo_37240592(titleInfo, 1, v6, 0, 0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetTopListViewEnter(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 Hierarchy; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct ShopTopListViewManager_o *topListViewManager; // x19
  struct System_Action_o *onMoveEnd; // x1
  const MethodInfo *v10; // x2

  Hierarchy = ShopSceneListViewControlHelper__GetHierarchy(this, state, method);
  if ( (_DWORD)Hierarchy == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1B9026C(Hierarchy, v5);
    onMoveEnd = this->fields.onMoveEnd;
    topListViewManager->fields.onMoveEnd = onMoveEnd;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&topListViewManager->fields.onMoveEnd, (int32_t)onMoveEnd, v6, v7);
    ShopTopListViewManager__SetMode_33022924(topListViewManager, 3, v10);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetTopListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ShopTopListViewManager_o *topListViewManager; // x19
  struct System_Action_ShopRootConstants_State__o *onSelectTop; // x1
  const MethodInfo *v6; // x2

  if ( state == 1 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1B9026C(this, state);
    onSelectTop = this->fields.onSelectTop;
    topListViewManager->fields.onClickListViewItem = onSelectTop;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&topListViewManager->fields.onClickListViewItem,
      (int32_t)onSelectTop,
      (int32_t)method,
      v3);
    topListViewManager->fields.initMode = 1;
    ListViewManager__set_IsInput((ListViewManager_o *)topListViewManager, 1, 0LL);
    ShopTopListViewManager__RequestListObject(topListViewManager, 1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetTopListViewOnInit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        float overrideScrollBarValue,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *topListViewBase; // x0
  const MethodInfo *v8; // x2
  int32_t v9; // w2
  int32_t v10; // w3
  int v11; // w8
  int v12; // w9
  struct ShopTopListViewManager_o *topListViewManager; // x20
  struct System_Action_o *v14; // x1
  const MethodInfo *v15; // x2
  int32_t v16; // w1
  struct System_Action_o *onMoveEnd; // x1

  topListViewBase = this->fields.topListViewBase;
  if ( !topListViewBase )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(topListViewBase, 1, 0LL);
  topListViewBase = (UnityEngine_GameObject_o *)this->fields.topListViewManager;
  if ( !topListViewBase )
    goto LABEL_14;
  ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)topListViewBase, state, overrideScrollBarValue, v8);
  if ( state <= 9 )
  {
    if ( (unsigned int)state > 9 )
      goto LABEL_12;
    v11 = 1 << state;
    v12 = 796;
  }
  else
  {
    if ( (unsigned int)state > 0x14 )
      goto LABEL_12;
    v11 = 1 << state;
    v12 = 1851392;
  }
  if ( (v11 & v12) == 0 )
  {
LABEL_12:
    topListViewManager = this->fields.topListViewManager;
    if ( topListViewManager )
    {
      onMoveEnd = this->fields.onMoveEnd;
      topListViewManager->fields.onMoveEnd = onMoveEnd;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&topListViewManager->fields.onMoveEnd,
        (int32_t)onMoveEnd,
        v9,
        v10);
      v16 = 2;
      goto LABEL_11;
    }
LABEL_14:
    sub_1B9026C(topListViewBase, *(_QWORD *)&state);
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_14;
  v14 = this->fields.onMoveEnd;
  topListViewManager->fields.onMoveEnd = v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&topListViewManager->fields.onMoveEnd, (int32_t)v14, v9, v10);
  v16 = 6;
LABEL_11:
  ShopTopListViewManager__SetMode_33022924(topListViewManager, v16, v15);
}


void __fastcall ShopSceneListViewControlHelper__SetTopListViewRetry(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 Hierarchy; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct ShopTopListViewManager_o *topListViewManager; // x19
  struct System_Action_o *onMoveEnd; // x1
  const MethodInfo *v10; // x2

  Hierarchy = ShopSceneListViewControlHelper__GetHierarchy(this, state, method);
  if ( (_DWORD)Hierarchy == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1B9026C(Hierarchy, v5);
    onMoveEnd = this->fields.onMoveEnd;
    topListViewManager->fields.onMoveEnd = onMoveEnd;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&topListViewManager->fields.onMoveEnd, (int32_t)onMoveEnd, v6, v7);
    ShopTopListViewManager__SetMode_33022924(topListViewManager, 5, v10);
  }
}


void __fastcall ShopSceneListViewControlHelper___c__DisplayClass31_0___ctor(
        ShopSceneListViewControlHelper___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopSceneListViewControlHelper___c__DisplayClass31_0___SetListViewOnCloseEventShop_b__0(
        ShopSceneListViewControlHelper___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B9026C(this, method);
  ShopSceneListViewControlHelper__SetBuyItemListViewClear(this->fields.__4__this, this->fields.state, v2);
}