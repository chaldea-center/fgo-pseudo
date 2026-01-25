void ShopSceneListViewControlHelper___ctor(
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
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.topListViewBase = topListViewBase;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)topListViewBase, v20, v21, v22, v23, v24, v25);
  this->fields.eventListViewBase = eventListViewBase;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventListViewBase,
    (int32_t)eventListViewBase,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.buyItemListViewBase = buyItemListViewBase;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.buyItemListViewBase,
    (int32_t)buyItemListViewBase,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.helpListViewBase = helpListViewBase;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.helpListViewBase,
    (int32_t)helpListViewBase,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.currencyInfoController = currencyInfoController;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currencyInfoController,
    (int32_t)currencyInfoController,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.topListViewManager = topListViewManager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.topListViewManager,
    (int32_t)topListViewManager,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.eventListViewManager = eventListViewManager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventListViewManager,
    (int32_t)eventListViewManager,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.buyItemListViewManager = buyItemListViewManager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.buyItemListViewManager,
    (int32_t)buyItemListViewManager,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.servantSellMenu = servantSellMenu;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantSellMenu,
    (int32_t)servantSellMenu,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.helpListViewManager = helpListViewManager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.helpListViewManager,
    (int32_t)helpListViewManager,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
}


int32_t ShopSceneListViewControlHelper__GetEventId(
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
      sub_1C7BD40(0, state);
    Item = ShopEventListViewManager__GetItem(eventListViewManager, index, 0);
    if ( Item )
      LODWORD(Item) = Item->fields.eventId;
  }
  else
  {
    LODWORD(Item) = 0;
  }
  return (int)Item;
}


int32_t ShopSceneListViewControlHelper__GetHierarchy(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( (unsigned int)(state - 1) > 0x15 )
    return 0;
  else
    return dword_D292E8[state - 1];
}


bool ShopSceneListViewControlHelper__GetIsBuyItemList(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( (unsigned int)(state - 2) > 0x14 )
    LOBYTE(v3) = 0;
  else
    return (0x1F765Fu >> (state - 2)) & 1;
  return v3;
}


ShopBuyItemListViewItem_o *ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
        ShopSceneListViewControlHelper_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0

  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    sub_1C7BD40(0, index);
  return ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0);
}


ShopEventListViewItem_o *ShopSceneListViewControlHelper__GetShopEventListViewItem(
        ShopSceneListViewControlHelper_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  eventListViewManager = this->fields.eventListViewManager;
  if ( !eventListViewManager )
    sub_1C7BD40(0, index);
  return ShopEventListViewManager__GetItem(eventListViewManager, index, 0);
}


void ShopSceneListViewControlHelper__SetBgm(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        bool isEnter,
        const MethodInfo *method)
{
  ShopRootConstants_c *v6; // x0
  System_String_o *SVT_COSTUME_BGM_NAME; // x19

  if ( (byte_4CEA915 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&ShopRootConstants_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEA915 = 1;
  }
  if ( state == 15 )
  {
    if ( isEnter )
    {
      v6 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v6 = ShopRootConstants_TypeInfo;
      }
      SVT_COSTUME_BGM_NAME = v6->static_fields->SVT_COSTUME_BGM_NAME;
    }
    else
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      SVT_COSTUME_BGM_NAME = BgmManager__GetMainBgmName(0, 0);
    }
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(SVT_COSTUME_BGM_NAME, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetBuyItemListView(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t eventId,
        const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *v6; // x19
  __int64 v7; // x1
  UnityEngine_GameObject_o *buyItemListViewBase; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x22
  TerminalPramsManager_c *v10; // x0
  ShopCurrencyInfoController_o *currencyInfoController; // x21

  v6 = this;
  if ( (byte_4CEA912 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopBuyItemListViewManager_TypeInfo);
    this = (ShopSceneListViewControlHelper_o *)sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEA912 = 1;
  }
  if ( ShopSceneListViewControlHelper__GetIsBuyItemList(this, state, *(const MethodInfo **)&eventId) )
  {
    buyItemListViewBase = v6->fields.buyItemListViewBase;
    if ( !buyItemListViewBase )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(buyItemListViewBase, 1, 0);
    buyItemListViewManager = v6->fields.buyItemListViewManager;
    if ( state == 8 )
    {
      if ( !buyItemListViewManager )
        goto LABEL_28;
      ShopBuyItemListViewManager__CreateList_35587508(v6->fields.buyItemListViewManager, eventId, 0);
    }
    else
    {
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0);
      if ( !buyItemListViewManager )
        goto LABEL_28;
      ShopBuyItemListViewManager__CreateList(buyItemListViewManager, (int32_t)buyItemListViewBase, 0);
      if ( state == 22 && eventId >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CEA7A3 )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          byte_4CEA7A3 = 1;
        }
        v10 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v10 = TerminalPramsManager_TypeInfo;
        }
        v10->static_fields->_ShopFocusItemId_k__BackingField = eventId;
      }
      buyItemListViewBase = (UnityEngine_GameObject_o *)v6->fields.buyItemListViewManager;
      if ( !buyItemListViewBase )
        goto LABEL_28;
      ShopBuyItemListViewManager__FocusTopItem((ShopBuyItemListViewManager_o *)buyItemListViewBase, state, 0);
      currencyInfoController = v6->fields.currencyInfoController;
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0);
      if ( !currencyInfoController )
        goto LABEL_28;
      ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, (int32_t)buyItemListViewBase, state, 0);
    }
    buyItemListViewBase = (UnityEngine_GameObject_o *)v6->fields.buyItemListViewManager;
    if ( buyItemListViewBase )
    {
      ShopBuyItemListViewManager__SetMode_35598120(
        (ShopBuyItemListViewManager_o *)buyItemListViewBase,
        1,
        v6->fields.onMoveEnd,
        0.1,
        0);
      return;
    }
LABEL_28:
    sub_1C7BD40(buyItemListViewBase, v7);
  }
}


void ShopSceneListViewControlHelper__SetBuyItemListViewClear(
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
      || (ListViewManager__DestroyList(buyItemListViewManager, 0),
          (buyItemListViewManager = (ListViewManager_o *)this->fields.buyItemListViewBase) == 0) )
    {
      sub_1C7BD40(buyItemListViewManager, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 0, 0);
  }
}


void ShopSceneListViewControlHelper__SetBuyItemListViewExit(
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
      sub_1C7BD40(0, v4);
    ShopBuyItemListViewManager__SetMode_35598120(buyItemListViewManager, 4, this->fields.onMoveEnd, 0.1, 0);
  }
}


void ShopSceneListViewControlHelper__SetBuyItemListViewInput(
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
      sub_1C7BD40(0, v4);
    ShopBuyItemListViewManager__SetMode(buyItemListViewManager, 2, this->fields.onSelectBuyItem, 0);
  }
}


void ShopSceneListViewControlHelper__SetBuyItemListViewModify(
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
    if ( ShopBuyItemListViewManager__ModifyList(buyItemListViewManager, 0) )
    {
      buyItemListViewManager = this->fields.buyItemListViewManager;
      if ( buyItemListViewManager )
      {
        ShopBuyItemListViewManager__SetMode_35596840(buyItemListViewManager, 5, 0);
        return;
      }
LABEL_7:
      sub_1C7BD40(buyItemListViewManager, v4);
    }
  }
}


void ShopSceneListViewControlHelper__SetCallbackEvents(
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
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7

  this->fields.onMoveEnd = onMoveEnd;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    (int32_t)onSelectTop,
    (int32_t)onSelectEvent,
    (System_String_o *)onSelectBuyItem,
    (int32_t)onSelectSellServant,
    (int64_t)onOpenHelp,
    (System_String_o *)method);
  this->fields.onSelectTop = onSelectTop;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelectTop,
    (int32_t)onSelectTop,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.onSelectEvent = onSelectEvent;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelectEvent,
    (int32_t)onSelectEvent,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.onSelectBuyItem = onSelectBuyItem;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelectBuyItem,
    (int32_t)onSelectBuyItem,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.onSelectSellServant = onSelectSellServant;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelectSellServant,
    (int32_t)onSelectSellServant,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.onOpenHelp = onOpenHelp;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onOpenHelp,
    (int32_t)onOpenHelp,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetEventListView(
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
    sub_1C7BD40(eventListViewManager, *(_QWORD *)&state);
  }
  if ( state == 7 )
  {
    eventListViewManager = this->fields.eventListViewBase;
    if ( eventListViewManager )
    {
      UnityEngine_GameObject__SetActive(eventListViewManager, 1, 0);
      eventListViewManager = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
      if ( eventListViewManager )
      {
        ShopEventListViewManager__CreateList((ShopEventListViewManager_o *)eventListViewManager, 0, 0);
        eventListViewManager = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
        if ( eventListViewManager )
        {
          onMoveEnd = this->fields.onMoveEnd;
          v6 = 1;
LABEL_9:
          ShopEventListViewManager__SetMode_35625012(
            (ShopEventListViewManager_o *)eventListViewManager,
            v6,
            onMoveEnd,
            0);
          return;
        }
      }
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetEventListViewClear(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  if ( state == 7 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager
      || (ShopEventListViewManager__DestroyList(eventListViewManager, 0),
          (eventListViewManager = (ShopEventListViewManager_o *)this->fields.eventListViewBase) == 0) )
    {
      sub_1C7BD40(eventListViewManager, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventListViewManager, 0, 0);
  }
}


void ShopSceneListViewControlHelper__SetEventListViewExit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  if ( state == 7 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager )
      sub_1C7BD40(0, state);
    ShopEventListViewManager__SetMode_35625012(eventListViewManager, 4, this->fields.onMoveEnd, 0);
  }
}


void ShopSceneListViewControlHelper__SetEventListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  if ( state == 7 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager )
      sub_1C7BD40(0, state);
    ShopEventListViewManager__SetMode(eventListViewManager, 2, this->fields.onSelectEvent, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetEventListViewOnInit(
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
  UnityEngine_GameObject__SetActive(eventListViewBase, 1, 0);
  eventListViewBase = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__CreateList((ShopEventListViewManager_o *)eventListViewBase, 0, 0);
  eventListViewBase = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
  if ( !eventListViewBase )
    goto LABEL_16;
  v9 = ShopEventListViewManager__SearchItem((ShopEventListViewManager_o *)eventListViewBase, eventId, 0);
  v10 = v9 ? v9->fields.index : 0;
  *selectedEventIndex = v10;
  eventListViewBase = this->fields.eventListViewBase;
  if ( !eventListViewBase )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(eventListViewBase, eventId < 1, 0);
  eventListViewBase = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__SearchItem((ShopEventListViewManager_o *)eventListViewBase, eventId, 0);
  eventListViewBase = (UnityEngine_GameObject_o *)this->fields.eventListViewManager;
  if ( eventId >= 1 )
  {
    if ( eventListViewBase )
    {
      ShopEventListViewManager__SetMode_35624848((ShopEventListViewManager_o *)eventListViewBase, 6, 0);
      return;
    }
LABEL_16:
    sub_1C7BD40(eventListViewBase, *(_QWORD *)&state);
  }
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__SetMode_35625012(
    (ShopEventListViewManager_o *)eventListViewBase,
    1,
    this->fields.onMoveEnd,
    0);
}


void ShopSceneListViewControlHelper__SetEventListViewRetry(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  if ( state == 8 )
  {
    eventListViewManager = this->fields.eventListViewManager;
    if ( !eventListViewManager )
      sub_1C7BD40(0, state);
    ShopEventListViewManager__SetMode_35625012(eventListViewManager, 5, this->fields.onMoveEnd, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetGiftButtonEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Component_o *giftButtonControl; // x0

  if ( (unsigned int)state <= 0x16 && ((1 << state) & 0x7D99DE) != 0 )
  {
    giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
    if ( !giftButtonControl
      || (giftButtonControl = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(giftButtonControl, 0)) == 0 )
    {
      sub_1C7BD40(giftButtonControl, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)giftButtonControl, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetGiftButtonPosition(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *giftButtonControl; // x0
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v9; // x2
  bool IsShowEventItemWindow; // w20
  UnityEngine_Vector3_o GiftButtonPos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA918 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C7BAE8(&ShopRootConstants_TypeInfo);
    byte_4CEA918 = 1;
  }
  giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
  if ( !giftButtonControl )
    goto LABEL_10;
  transform = UnityEngine_Component__get_transform(giftButtonControl, 0);
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  IsShowEventItemWindow = ShopBuyItemListViewManager__GetIsShowEventItemWindow(state, eventId, 0);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  GiftButtonPos = ShopRootConstants__GetGiftButtonPos(IsShowEventItemWindow, state, v9);
  if ( !transform )
LABEL_10:
    sub_1C7BD40(giftButtonControl, *(_QWORD *)&state);
  UnityEngine_Transform__set_localPosition(transform, GiftButtonPos, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetGiftButtonUnEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Component_o *giftButtonControl; // x0

  if ( (unsigned int)state <= 0x16 && ((1 << state) & 0x7D9B5C) != 0 )
  {
    giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
    if ( !giftButtonControl
      || (giftButtonControl = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(giftButtonControl, 0)) == 0 )
    {
      sub_1C7BD40(giftButtonControl, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)giftButtonControl, 0, 0);
  }
}


void ShopSceneListViewControlHelper__SetGuideDetail(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        System_Action_o *endSet,
        bool isEnter,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  GuideEntity_o *GuideData; // x21
  ShopRootConstants_c *v13; // x0
  int32_t *p_bgImageId; // x8
  int32_t v15; // w24
  System_String_o *BG_ROOT; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  ShopRootConstants_c *v19; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  ExUITexture_o *backgroundTexture; // x23
  ShopRootConstants_c *v24; // x0
  int32_t guideFaceId; // w4
  int32_t *p_guideImageId; // x8
  int32_t *p_guideLimitCount; // x9
  struct ShopRootConstants_StaticFields *v28; // x9
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEA914 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&ShopRootConstants_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA914 = 1;
  }
  if ( state == 15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_GuideMaster___);
    if ( !Instance )
      goto LABEL_32;
    v11 = isEnter ? 3 : 2;
    GuideData = GuideMaster__getGuideData((GuideMaster_o *)Instance, v11, 0);
    if ( GuideData )
    {
      v13 = ShopRootConstants_TypeInfo;
      p_bgImageId = &GuideData->fields.bgImageId;
    }
    else
    {
      v13 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v13 = ShopRootConstants_TypeInfo;
      }
      p_bgImageId = &v13->static_fields->DEFAULT_BG_ID;
    }
    v15 = *p_bgImageId;
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ShopRootConstants_TypeInfo;
    }
    BG_ROOT = v13->static_fields->BG_ROOT;
    v30 = v15;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    Instance = (DataManager_o *)System_String__Format(BG_ROOT, v17, 0);
    if ( !this->fields.backgroundTexture )
      goto LABEL_32;
    v18 = (System_String_o *)Instance;
    if ( !ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0, 0) )
    {
      v19 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v19 = ShopRootConstants_TypeInfo;
      }
      static_fields = v19->static_fields;
      v21 = static_fields->BG_ROOT;
      DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID);
      Instance = (DataManager_o *)System_String__Format(v21, v22, 0);
      if ( !this->fields.backgroundTexture )
        goto LABEL_32;
      v18 = (System_String_o *)Instance;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0, 0);
    }
    backgroundTexture = this->fields.backgroundTexture;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    FSUtility__SetUpBackTextureSize(backgroundTexture, v18, 0);
    v24 = ShopRootConstants_TypeInfo;
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
      v24 = ShopRootConstants_TypeInfo;
      if ( GuideData )
        goto LABEL_26;
    }
    v28 = v24->static_fields;
    guideFaceId = 0;
    p_guideImageId = &v28->DEFAULT_FIGURE_ID;
    p_guideLimitCount = &v28->DEFAULT_FIGURE_LIMIT_CNT;
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
        0);
      return;
    }
LABEL_32:
    sub_1C7BD40(Instance, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetHelpButtonEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  System_String_o *HelpSaveKey; // x20
  TitleInfoControl_o *Int; // x0
  __int64 v7; // x1
  struct System_Action_o *onOpenHelp; // x8

  if ( (byte_4CEA916 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopRootConstants_TypeInfo);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA916 = 1;
  }
  if ( (unsigned int)state <= 0x16 && ((1 << state) & 0x50006A) != 0 )
  {
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    HelpSaveKey = ShopRootConstants__GetHelpSaveKey(state, *(const MethodInfo **)&state);
    if ( System_String__op_Inequality(HelpSaveKey, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      Int = (TitleInfoControl_o *)UnityEngine_PlayerPrefs__GetInt(HelpSaveKey, 0, 0);
      if ( (_DWORD)Int )
        goto LABEL_9;
    }
    else
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      Int = (TitleInfoControl_o *)TutorialFlag__Get_40989036(103, 0);
      if ( ((unsigned __int8)Int & 1) != 0 )
      {
LABEL_9:
        Int = this->fields.titleInfo;
        if ( Int )
        {
          TitleInfoControl__SetHelpBtn(Int, 1, 0);
          return;
        }
LABEL_17:
        sub_1C7BD40(Int, v7);
      }
    }
    onOpenHelp = this->fields.onOpenHelp;
    if ( !onOpenHelp )
      goto LABEL_17;
    ((void (__fastcall *)(intptr_t, intptr_t))onOpenHelp->fields.invoke_impl)(
      onOpenHelp->fields.method_code,
      onOpenHelp->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetHelpButtonPosition(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o HelpButtonPos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA917 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopRootConstants_TypeInfo);
    byte_4CEA917 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  HelpButtonPos = ShopRootConstants__GetHelpButtonPos(state, *(const MethodInfo **)&state);
  if ( !titleInfo )
    sub_1C7BD40(v6, v7);
  TitleInfoControl__SetHelpBtnPos(titleInfo, HelpButtonPos, 0);
}


void ShopSceneListViewControlHelper__SetHelpButtonUnEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( state != 10 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      sub_1C7BD40(0, state);
    TitleInfoControl__SetHelpBtn(titleInfo, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetHelpListViewClose(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ListViewManager_o *helpListViewManager; // x0

  if ( state == 13 )
  {
    helpListViewManager = (ListViewManager_o *)this->fields.helpListViewManager;
    if ( !helpListViewManager
      || (ListViewManager__DestroyList(helpListViewManager, 0),
          (helpListViewManager = (ListViewManager_o *)this->fields.helpListViewBase) == 0) )
    {
      sub_1C7BD40(helpListViewManager, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpListViewManager, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetHelpListViewOpen(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpListViewBase; // x0

  if ( state == 13 )
  {
    helpListViewBase = this->fields.helpListViewBase;
    if ( !helpListViewBase
      || (UnityEngine_GameObject__SetActive(helpListViewBase, 1, 0),
          (helpListViewBase = (UnityEngine_GameObject_o *)this->fields.helpListViewManager) == 0) )
    {
      sub_1C7BD40(helpListViewBase, *(_QWORD *)&state);
    }
    ShopHelpListViewManager__CreateList((ShopHelpListViewManager_o *)helpListViewBase, *(const MethodInfo **)&state);
  }
}


void ShopSceneListViewControlHelper__SetListViewInvalidate(
        ShopSceneListViewControlHelper_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_17;
  buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buyItemListViewManager, 0);
  if ( !buyItemListViewManager )
    goto LABEL_17;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)buyItemListViewManager, 0) )
  {
    buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_17;
    ShopBuyItemListViewManager__InvalidateList((ShopBuyItemListViewManager_o *)buyItemListViewManager, 0);
  }
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.eventListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_17;
  buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buyItemListViewManager, 0);
  if ( !buyItemListViewManager )
    goto LABEL_17;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)buyItemListViewManager, 0) )
  {
    buyItemListViewManager = (UnityEngine_Component_o *)this->fields.eventListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_17;
    ShopEventListViewManager__InvalidateList((ShopEventListViewManager_o *)buyItemListViewManager, 0);
  }
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              buyItemListViewManager,
                                                              0)) == 0 )
  {
LABEL_17:
    sub_1C7BD40(buyItemListViewManager, method);
  }
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)buyItemListViewManager, 0) )
  {
    buyItemListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
    if ( buyItemListViewManager )
    {
      ShopTopListViewManager__InvalidateList((ShopTopListViewManager_o *)buyItemListViewManager, 0);
      return;
    }
    goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetListViewOnBackMenu(
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


void ShopSceneListViewControlHelper__SetListViewOnCloseBuyItemConfirm(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  ShopSceneListViewControlHelper__SetBuyItemListViewModify(this, state, method);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(this, state, v5);
}


void ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x19
  System_Action_o *v15; // x20

  if ( (byte_4CEA911 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ShopSceneListViewControlHelper___c__DisplayClass32_0__SetListViewOnCloseEventShop_b__0__);
    sub_1C7BAE8(&ShopSceneListViewControlHelper___c__DisplayClass32_0_TypeInfo);
    byte_4CEA911 = 1;
  }
  v5 = sub_1C7BD34(ShopSceneListViewControlHelper___c__DisplayClass32_0_TypeInfo);
  ShopSceneListViewControlHelper___c__DisplayClass32_0___ctor(
    (ShopSceneListViewControlHelper___c__DisplayClass32_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( state == 8 )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_ShopSceneListViewControlHelper___c__DisplayClass32_0__SetListViewOnCloseEventShop_b__0__,
      0);
    if ( buyItemListViewManager )
    {
      ShopBuyItemListViewManager__SetMode_35598120(buyItemListViewManager, 4, v15, 0.1, 0);
      return;
    }
LABEL_8:
    sub_1C7BD40(v6, v7);
  }
}


void ShopSceneListViewControlHelper__SetListViewOnCloseSellServantConfirm(
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


void ShopSceneListViewControlHelper__SetListViewOnCloseStonePurchase(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  ShopSceneListViewControlHelper__SetTopListViewInput(this, state, method);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(this, state, v5);
}


void ShopSceneListViewControlHelper__SetListViewOnOpenHelp(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *topListViewBase; // x0

  ShopSceneListViewControlHelper__SetHelpListViewOpen(this, state, method);
  topListViewBase = this->fields.topListViewBase;
  if ( !topListViewBase )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(topListViewBase, 0, 0);
}


void ShopSceneListViewControlHelper__SetListViewOnQuitHelp(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *topListViewBase; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  topListViewBase = this->fields.topListViewBase;
  if ( !topListViewBase )
    sub_1C7BD40(0, state);
  UnityEngine_GameObject__SetActive(topListViewBase, 1, 0);
  ShopSceneListViewControlHelper__SetTopListViewRetry(this, state, v6);
  ShopSceneListViewControlHelper__SetHelpListViewClose(this, state, v7);
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetListViewOnSceneInit(
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
    sub_1C7BD40(0, v16);
  ServantSellMenu__Init_35522344(servantSellMenu, jumpInfoId, 0);
  ShopSceneListViewControlHelper__SetSellServantMenuInput(this, state, v18);
}


void ShopSceneListViewControlHelper__SetListViewOnSceneQuit(
        ShopSceneListViewControlHelper_o *this,
        const MethodInfo *method)
{
  char *topListViewManager; // x0
  const MethodInfo *v4; // x2
  UnityEngine_Transform_o *transform; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_Vector3_o GiftButtonPos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA910 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopRootConstants_TypeInfo);
    byte_4CEA910 = 1;
  }
  topListViewManager = (char *)this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_21;
  ShopTopListViewManager__DestroyList((ShopTopListViewManager_o *)topListViewManager, 0);
  topListViewManager = (char *)this->fields.buyItemListViewManager;
  if ( !topListViewManager )
    goto LABEL_21;
  ListViewManager__DestroyList((ListViewManager_o *)topListViewManager, 0);
  topListViewManager = (char *)this->fields.eventListViewManager;
  if ( !topListViewManager )
    goto LABEL_21;
  ShopEventListViewManager__DestroyList((ShopEventListViewManager_o *)topListViewManager, 0);
  topListViewManager = (char *)this->fields.helpListViewManager;
  if ( !topListViewManager )
    goto LABEL_21;
  ListViewManager__DestroyList((ListViewManager_o *)topListViewManager, 0);
  topListViewManager = (char *)this->fields.topListViewBase;
  if ( !topListViewManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  topListViewManager = (char *)this->fields.buyItemListViewBase;
  if ( !topListViewManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  topListViewManager = (char *)this->fields.eventListViewBase;
  if ( !topListViewManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_21;
  topListViewManager = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)topListViewManager, 0);
  if ( !topListViewManager )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)topListViewManager, 0);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  GiftButtonPos = ShopRootConstants__GetGiftButtonPos(0, 1, v4);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(transform, GiftButtonPos, 0);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_21;
  topListViewManager = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)topListViewManager, 0);
  if ( !topListViewManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager
    || (*((_QWORD *)topListViewManager + 13) = 0,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(topListViewManager + 104), 0, v6, v7, v8, v9, v10, v11),
        (topListViewManager = (char *)this->fields.giftButtonControl) == 0)
    || (*((_QWORD *)topListViewManager + 12) = 0,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(topListViewManager + 96), 0, v12, v13, v14, v15, v16, v17),
        (topListViewManager = (char *)this->fields.helpListViewManager) == 0) )
  {
LABEL_21:
    sub_1C7BD40(topListViewManager, method);
  }
  ShopHelpListViewManager__ReleaseBaseSprite((ShopHelpListViewManager_o *)topListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
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
void ShopSceneListViewControlHelper__SetListViewOnStateInitEnd(
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
void ShopSceneListViewControlHelper__SetListViewOnStateQuitEnd(
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


void ShopSceneListViewControlHelper__SetOtherObjects(
        ShopSceneListViewControlHelper_o *this,
        TitleInfoControl_o *titleInfo,
        StandFigureBack_o *standFigureBack,
        GiftButtonCtrl_o *giftButtonControl,
        ExUITexture_o *backgroundTexture,
        ShopRootComponent_o *shopRootComponent,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  this->fields.titleInfo = titleInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.titleInfo,
    (int32_t)titleInfo,
    (int32_t)standFigureBack,
    (int32_t)giftButtonControl,
    (System_String_o *)backgroundTexture,
    (int32_t)shopRootComponent,
    (int64_t)method,
    v7);
  this->fields.standFigureBack = standFigureBack;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.standFigureBack,
    (int32_t)standFigureBack,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.giftButtonControl = giftButtonControl;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.giftButtonControl,
    (int32_t)giftButtonControl,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.backgroundTexture = backgroundTexture;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.backgroundTexture,
    (int32_t)backgroundTexture,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.shopRootComponent = shopRootComponent;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.shopRootComponent,
    (int32_t)shopRootComponent,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void ShopSceneListViewControlHelper__SetSellServantMenuClear(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  if ( state == 9 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      sub_1C7BD40(0, state);
    ServantSellMenu__Init(servantSellMenu, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetSellServantMenuExit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  if ( state == 9 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu
      || (ServantSellMenu__InitBackListView(servantSellMenu, 0), (servantSellMenu = this->fields.servantSellMenu) == 0) )
    {
      sub_1C7BD40(servantSellMenu, *(_QWORD *)&state);
    }
    ServantSellMenu__Close(servantSellMenu, this->fields.onMoveEnd, 0);
  }
}


void ShopSceneListViewControlHelper__SetSellServantMenuInit(
        ShopSceneListViewControlHelper_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    sub_1C7BD40(0, kind);
  ServantSellMenu__Init_35522344(servantSellMenu, kind, 0);
}


void ShopSceneListViewControlHelper__SetSellServantMenuInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 9 )
  {
    if ( !this->fields.servantSellMenu )
      sub_1C7BD40(this, state);
    ServantSellMenu__Open(this->fields.servantSellMenu, this->fields.onSelectSellServant, this->fields.onMoveEnd, 0);
  }
}


void ShopSceneListViewControlHelper__SetSellServantMenuModify(
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
      sub_1C7BD40(0, state);
    ServantSellMenu__ModifyListItem(servantSellMenu, servantIds, commandCodeIds, 0);
  }
}


void ShopSceneListViewControlHelper__SetStandFigureBackFadein(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  if ( state == 9 )
  {
    standFigureBack = this->fields.standFigureBack;
    if ( !standFigureBack )
      sub_1C7BD40(0, state);
    StandFigureBack__Fadein(standFigureBack, 0, 0);
  }
}


void ShopSceneListViewControlHelper__SetStandFigureBackFadeout(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  if ( state == 9 )
  {
    standFigureBack = this->fields.standFigureBack;
    if ( !standFigureBack )
      sub_1C7BD40(0, state);
    StandFigureBack__Fadeout(standFigureBack, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetTitleInfo(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  int32_t v6; // w2
  TitleInfoControl_o *v7; // x19
  TitleInfoControl_o *v8; // x20

  if ( (byte_4CEA913 & 1) == 0 )
  {
    sub_1C7BAE8(&ShopRootConstants_TypeInfo);
    byte_4CEA913 = 1;
  }
  if ( state == 15 )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      TitleInfoControl__changeTitleInfo_40477940(titleInfo, 1, 41, 0, 0, 0);
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
          0);
        return;
      }
    }
    goto LABEL_18;
  }
  if ( state != 9 )
  {
    titleInfo = (TitleInfoControl_o *)this->fields.shopRootComponent;
    v8 = this->fields.titleInfo;
    if ( titleInfo )
      titleInfo = (TitleInfoControl_o *)ShopRootComponent__IsExistBackClassBoardInfo(
                                          (ShopRootComponent_o *)titleInfo,
                                          *(const MethodInfo **)&state);
    if ( v8 )
    {
      TitleInfoControl__SetBackClassBoardButton(v8, (unsigned __int8)titleInfo & 1, 0);
      titleInfo = this->fields.titleInfo;
      if ( titleInfo )
      {
        v6 = 41;
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_1C7BD40(titleInfo, *(_QWORD *)&state);
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_18;
  v6 = 42;
LABEL_17:
  TitleInfoControl__changeTitleInfo_40477940(titleInfo, 1, v6, 0, 0, 0);
}


void ShopSceneListViewControlHelper__SetTopListViewEnter(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  if ( ShopSceneListViewControlHelper__GetHierarchy(this, state, method) == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1C7BD40(0, v4);
    ShopTopListViewManager__SetMode_35799112(topListViewManager, 3, this->fields.onMoveEnd, 0);
  }
}


void ShopSceneListViewControlHelper__SetTopListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopTopListViewManager_o *topListViewManager; // x0

  if ( state == 1 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1C7BD40(0, state);
    ShopTopListViewManager__SetMode(topListViewManager, 1, this->fields.onSelectTop, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetTopListViewOnInit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        float overrideScrollBarValue,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *topListViewBase; // x0
  System_Action_o *onMoveEnd; // x2
  int32_t v9; // w1

  topListViewBase = this->fields.topListViewBase;
  if ( !topListViewBase )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(topListViewBase, 1, 0);
  topListViewBase = (UnityEngine_GameObject_o *)this->fields.topListViewManager;
  if ( !topListViewBase )
    goto LABEL_10;
  ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)topListViewBase, 0, overrideScrollBarValue, 0);
  if ( (unsigned int)state > 0x16 || ((1 << state) & 0x5C431C) == 0 )
  {
    topListViewBase = (UnityEngine_GameObject_o *)this->fields.topListViewManager;
    if ( topListViewBase )
    {
      onMoveEnd = this->fields.onMoveEnd;
      v9 = 2;
      goto LABEL_7;
    }
LABEL_10:
    sub_1C7BD40(topListViewBase, *(_QWORD *)&state);
  }
  topListViewBase = (UnityEngine_GameObject_o *)this->fields.topListViewManager;
  if ( !topListViewBase )
    goto LABEL_10;
  onMoveEnd = this->fields.onMoveEnd;
  v9 = 6;
LABEL_7:
  ShopTopListViewManager__SetMode_35799112((ShopTopListViewManager_o *)topListViewBase, v9, onMoveEnd, 0);
}


void ShopSceneListViewControlHelper__SetTopListViewRetry(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  if ( ShopSceneListViewControlHelper__GetHierarchy(this, state, method) == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1C7BD40(0, v4);
    ShopTopListViewManager__SetMode_35799112(topListViewManager, 5, this->fields.onMoveEnd, 0);
  }
}


void ShopSceneListViewControlHelper___c__DisplayClass32_0___ctor(
        ShopSceneListViewControlHelper___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopSceneListViewControlHelper___c__DisplayClass32_0___SetListViewOnCloseEventShop_b__0(
        ShopSceneListViewControlHelper___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, method);
  ShopSceneListViewControlHelper__SetBuyItemListViewClear(_4__this, this->fields.state, 0);
}