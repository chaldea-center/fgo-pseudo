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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.topListViewBase = topListViewBase;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)topListViewBase, v20, v21, v22, v23, v24, v25);
  this->fields.eventListViewBase = eventListViewBase;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventListViewBase,
    (int32_t)eventListViewBase,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.buyItemListViewBase = buyItemListViewBase;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buyItemListViewBase,
    (int32_t)buyItemListViewBase,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.helpListViewBase = helpListViewBase;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.helpListViewBase,
    (int32_t)helpListViewBase,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.currencyInfoController = currencyInfoController;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currencyInfoController,
    (int32_t)currencyInfoController,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.topListViewManager = topListViewManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.topListViewManager,
    (int32_t)topListViewManager,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.eventListViewManager = eventListViewManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventListViewManager,
    (int32_t)eventListViewManager,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.buyItemListViewManager = buyItemListViewManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buyItemListViewManager,
    (int32_t)buyItemListViewManager,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.servantSellMenu = servantSellMenu;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantSellMenu,
    (int32_t)servantSellMenu,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.helpListViewManager = helpListViewManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.helpListViewManager,
    (int32_t)helpListViewManager,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, *(_QWORD *)&state);
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
    return dword_ED95E0[state - 1];
}


bool ShopSceneListViewControlHelper__GetIsBuyItemList(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  return ((unsigned int)state < 0x17) & (0x7DD97Cu >> state);
}


// local variable allocation has failed, the output may be wrong!
ShopBuyItemListViewItem_o *ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
        ShopSceneListViewControlHelper_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0

  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    sub_2213CDC(0, *(_QWORD *)&index);
  return ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0);
}


// local variable allocation has failed, the output may be wrong!
ShopEventListViewItem_o *ShopSceneListViewControlHelper__GetShopEventListViewItem(
        ShopSceneListViewControlHelper_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  eventListViewManager = this->fields.eventListViewManager;
  if ( !eventListViewManager )
    sub_2213CDC(0, *(_QWORD *)&index);
  return ShopEventListViewManager__GetItem(eventListViewManager, index, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetBgm(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        bool isEnter,
        const MethodInfo *method)
{
  ShopRootConstants_c *v6; // x0
  System_String_o *SVT_COSTUME_BGM_NAME; // x19

  if ( (byte_596C916 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596C916 = 1;
  }
  if ( state == 15 )
  {
    if ( isEnter )
    {
      v6 = ShopRootConstants_TypeInfo;
      if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state, isEnter);
        v6 = ShopRootConstants_TypeInfo;
      }
      SVT_COSTUME_BGM_NAME = v6->static_fields->SVT_COSTUME_BGM_NAME;
    }
    else
    {
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, *(_QWORD *)&state, isEnter);
      SVT_COSTUME_BGM_NAME = BgmManager__GetMainBgmName(0, 0);
    }
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&state, isEnter);
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
  __int64 v9; // x1
  __int64 v10; // x2
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x22
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  ShopCurrencyInfoController_o *currencyInfoController; // x21

  v6 = this;
  if ( (byte_596C913 & 1) == 0 )
  {
    sub_2213A60(&ShopBuyItemListViewManager_TypeInfo);
    this = (ShopSceneListViewControlHelper_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596C913 = 1;
  }
  if ( ShopSceneListViewControlHelper__GetIsBuyItemList(this, state, *(const MethodInfo **)&eventId) )
  {
    if ( state == 8 )
    {
      buyItemListViewBase = v6->fields.buyItemListViewBase;
      if ( !buyItemListViewBase )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(buyItemListViewBase, 1, 0);
      buyItemListViewBase = (UnityEngine_GameObject_o *)v6->fields.buyItemListViewManager;
      if ( !buyItemListViewBase )
        goto LABEL_31;
      ShopBuyItemListViewManager__CreateList_41945072((ShopBuyItemListViewManager_o *)buyItemListViewBase, eventId, 0);
    }
    else
    {
      if ( state == 2 )
        EventTutorialMaster__CheckTutorial(0, 109, 0, 0, 0, 0, 0, 0);
      buyItemListViewBase = v6->fields.buyItemListViewBase;
      if ( !buyItemListViewBase )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(buyItemListViewBase, 1, 0);
      buyItemListViewManager = v6->fields.buyItemListViewManager;
      if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v9, v10);
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0);
      if ( !buyItemListViewManager )
        goto LABEL_31;
      ShopBuyItemListViewManager__CreateList(buyItemListViewManager, (int32_t)buyItemListViewBase, 0);
      if ( state == 22 && eventId >= 1 )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v12);
        if ( !byte_596C85B )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596C85B = 1;
        }
        v13 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v12);
          v13 = TerminalPramsManager_TypeInfo;
        }
        v13->static_fields->_ShopFocusItemId_k__BackingField = eventId;
      }
      buyItemListViewBase = (UnityEngine_GameObject_o *)v6->fields.buyItemListViewManager;
      if ( !buyItemListViewBase )
        goto LABEL_31;
      ShopBuyItemListViewManager__FocusTopItem((ShopBuyItemListViewManager_o *)buyItemListViewBase, state, 0);
      currencyInfoController = v6->fields.currencyInfoController;
      if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v14, v15);
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0);
      if ( !currencyInfoController )
        goto LABEL_31;
      ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, (int32_t)buyItemListViewBase, state, 0);
    }
    buyItemListViewBase = (UnityEngine_GameObject_o *)v6->fields.buyItemListViewManager;
    if ( buyItemListViewBase )
    {
      ShopBuyItemListViewManager__SetMode_41958800(
        (ShopBuyItemListViewManager_o *)buyItemListViewBase,
        1,
        v6->fields.onMoveEnd,
        0.1,
        0);
      return;
    }
LABEL_31:
    sub_2213CDC(buyItemListViewBase, v7);
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
      sub_2213CDC(buyItemListViewManager, v4);
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
      sub_2213CDC(0, v4);
    ShopBuyItemListViewManager__SetMode_41958800(buyItemListViewManager, 4, this->fields.onMoveEnd, 0.1, 0);
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
      sub_2213CDC(0, v4);
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
        ShopBuyItemListViewManager__SetMode_41957520(buyItemListViewManager, 5, 0);
        return;
      }
LABEL_7:
      sub_2213CDC(buyItemListViewManager, v4);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  this->fields.onMoveEnd = onMoveEnd;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    (System_String_o *)onSelectTop,
    (System_String_o *)onSelectEvent,
    (int32_t)onSelectBuyItem,
    (int32_t)onSelectSellServant,
    (bool)onOpenHelp,
    (bool)method);
  this->fields.onSelectTop = onSelectTop;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectTop,
    (int32_t)onSelectTop,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.onSelectEvent = onSelectEvent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectEvent,
    (int32_t)onSelectEvent,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.onSelectBuyItem = onSelectBuyItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectBuyItem,
    (int32_t)onSelectBuyItem,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.onSelectSellServant = onSelectSellServant;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectSellServant,
    (int32_t)onSelectSellServant,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.onOpenHelp = onOpenHelp;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onOpenHelp,
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
    sub_2213CDC(eventListViewManager, *(_QWORD *)&state);
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
          ShopEventListViewManager__SetMode_41987660(
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
      sub_2213CDC(eventListViewManager, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventListViewManager, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetEventListViewExit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 7 )
  {
    if ( !this->fields.eventListViewManager )
      sub_2213CDC(this, *(_QWORD *)&state);
    ShopEventListViewManager__SetMode_41987660(this->fields.eventListViewManager, 4, this->fields.onMoveEnd, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetEventListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 7 )
  {
    if ( !this->fields.eventListViewManager )
      sub_2213CDC(this, *(_QWORD *)&state);
    ShopEventListViewManager__SetMode(this->fields.eventListViewManager, 2, this->fields.onSelectEvent, 0);
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
  eventListViewBase = this->fields.eventListViewBase;
  *selectedEventIndex = v10;
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
      ShopEventListViewManager__SetMode_41987496((ShopEventListViewManager_o *)eventListViewBase, 6, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(eventListViewBase, *(_QWORD *)&state);
  }
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__SetMode_41987660(
    (ShopEventListViewManager_o *)eventListViewBase,
    1,
    this->fields.onMoveEnd,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetEventListViewRetry(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 8 )
  {
    if ( !this->fields.eventListViewManager )
      sub_2213CDC(this, *(_QWORD *)&state);
    ShopEventListViewManager__SetMode_41987660(this->fields.eventListViewManager, 5, this->fields.onMoveEnd, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetExRoomShopButtonEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *exRoomShopButtonRoot; // x21
  bool v6; // w0
  __int64 v7; // x1
  struct UISprite_o *IsFeatureOpen; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_596C91B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C91B = 1;
  }
  exRoomShopButtonRoot = (UnityEngine_Object_o *)this->fields.exRoomShopButtonRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state, method);
  v6 = UnityEngine_Object__op_Equality(exRoomShopButtonRoot, 0, 0);
  if ( state == 1 && !v6 )
  {
    IsFeatureOpen = this->fields.exRoomShopButtonRoot;
    if ( !IsFeatureOpen
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsFeatureOpen, 0),
          IsFeatureOpen = (struct UISprite_o *)ExRoomRootComponent__IsFeatureOpen(1, 0),
          !gameObject) )
    {
      sub_2213CDC(IsFeatureOpen, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)IsFeatureOpen & 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetExRoomShopButtonUnEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *exRoomShopButtonRoot; // x21
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596C91A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C91A = 1;
  }
  exRoomShopButtonRoot = (UnityEngine_Object_o *)this->fields.exRoomShopButtonRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state, method);
  v6 = UnityEngine_Object__op_Equality(exRoomShopButtonRoot, 0, 0);
  if ( state != 10 && !v6 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.exRoomShopButtonRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
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
      sub_2213CDC(giftButtonControl, *(_QWORD *)&state);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Transform_o *transform; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  bool IsShowEventItemWindow; // w20
  UnityEngine_Vector3_o GiftButtonPos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C919 & 1) == 0 )
  {
    sub_2213A60(&ShopBuyItemListViewManager_TypeInfo);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    byte_596C919 = 1;
  }
  giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
  if ( !giftButtonControl )
    goto LABEL_10;
  transform = UnityEngine_Component__get_transform(giftButtonControl, 0);
  if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v8, v9);
  IsShowEventItemWindow = ShopBuyItemListViewManager__GetIsShowEventItemWindow(state, eventId, 0);
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v11, v12);
  GiftButtonPos = ShopRootConstants__GetGiftButtonPos(IsShowEventItemWindow, state, v12);
  if ( !transform )
LABEL_10:
    sub_2213CDC(giftButtonControl, *(_QWORD *)&state);
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
      sub_2213CDC(giftButtonControl, *(_QWORD *)&state);
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
  __int64 v12; // x1
  __int64 v13; // x2
  GuideEntity_o *GuideData; // x21
  ShopRootConstants_c *v15; // x0
  int32_t *p_bgImageId; // x8
  int32_t v17; // w24
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *BG_ROOT; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  ShopRootConstants_c *v24; // x0
  struct ShopRootConstants_StaticFields *v25; // x8
  System_String_o *v26; // x22
  Il2CppObject *v27; // x0
  ExUITexture_o *backgroundTexture; // x23
  __int64 v29; // x2
  ShopRootConstants_c *v30; // x0
  int32_t guideFaceId; // w4
  int32_t *p_guideImageId; // x8
  int32_t *p_guideLimitCount; // x9
  struct ShopRootConstants_StaticFields *v34; // x9
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-38h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596C915 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C915 = 1;
  }
  if ( state == 15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GuideMaster___);
    if ( isEnter )
    {
      if ( !Instance )
        goto LABEL_33;
      v11 = 3;
    }
    else
    {
      if ( !Instance )
        goto LABEL_33;
      v11 = 2;
    }
    GuideData = GuideMaster__getGuideData((GuideMaster_o *)Instance, v11, 0);
    if ( GuideData )
    {
      v15 = ShopRootConstants_TypeInfo;
      p_bgImageId = &GuideData->fields.bgImageId;
    }
    else
    {
      v15 = ShopRootConstants_TypeInfo;
      if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v12, v13);
        v15 = ShopRootConstants_TypeInfo;
      }
      p_bgImageId = &v15->static_fields->DEFAULT_BG_ID;
    }
    v17 = *p_bgImageId;
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v12, v13);
      v15 = ShopRootConstants_TypeInfo;
    }
    static_fields = v15->static_fields;
    v36 = v17;
    BG_ROOT = static_fields->BG_ROOT;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v36);
    Instance = (DataManager_o *)System_String__Format(BG_ROOT, v20, 0);
    if ( !this->fields.backgroundTexture )
LABEL_33:
      sub_2213CDC(Instance, v10);
    v21 = (System_String_o *)Instance;
    if ( !ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0, 0) )
    {
      v24 = ShopRootConstants_TypeInfo;
      if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v22, v23);
        v24 = ShopRootConstants_TypeInfo;
      }
      v25 = v24->static_fields;
      v26 = v25->BG_ROOT;
      DEFAULT_BG_ID = v25->DEFAULT_BG_ID;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &DEFAULT_BG_ID);
      Instance = (DataManager_o *)System_String__Format(v26, v27, 0);
      if ( !this->fields.backgroundTexture )
        goto LABEL_33;
      v21 = (System_String_o *)Instance;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0, 0);
    }
    backgroundTexture = this->fields.backgroundTexture;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v22, v23);
    FSUtility__SetUpBackTextureSize(backgroundTexture, v21, 0);
    v30 = ShopRootConstants_TypeInfo;
    if ( *(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    {
      if ( GuideData )
      {
LABEL_27:
        guideFaceId = GuideData->fields.guideFaceId;
        p_guideImageId = &GuideData->fields.guideImageId;
        p_guideLimitCount = &GuideData->fields.guideLimitCount;
        goto LABEL_30;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v10, v29);
      v30 = ShopRootConstants_TypeInfo;
      if ( GuideData )
        goto LABEL_27;
    }
    v34 = v30->static_fields;
    guideFaceId = 0;
    p_guideImageId = &v34->DEFAULT_FIGURE_ID;
    p_guideLimitCount = &v34->DEFAULT_FIGURE_LIMIT_CNT;
LABEL_30:
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
    goto LABEL_33;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetHelpButtonEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  System_String_o *HelpSaveKey; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoControl_o *Int; // x0
  __int64 v9; // x1
  struct System_Action_o *onOpenHelp; // x8

  if ( (byte_596C917 & 1) == 0 )
  {
    sub_2213A60(&ShopRootConstants_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C917 = 1;
  }
  if ( (unsigned int)state <= 0x16 && ((1 << state) & 0x50006A) != 0 )
  {
    if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state, method);
    HelpSaveKey = ShopRootConstants__GetHelpSaveKey(state, *(const MethodInfo **)&state);
    if ( System_String__op_Inequality(HelpSaveKey, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      Int = (TitleInfoControl_o *)UnityEngine_PlayerPrefs__GetInt(HelpSaveKey, 0, 0);
      if ( (_DWORD)Int )
        goto LABEL_9;
    }
    else
    {
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v6, v7);
      Int = (TitleInfoControl_o *)TutorialFlag__Get_47388504(103, 0);
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
        sub_2213CDC(Int, v9);
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

  if ( (byte_596C918 & 1) == 0 )
  {
    sub_2213A60(&ShopRootConstants_TypeInfo);
    byte_596C918 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state, method);
  HelpButtonPos = ShopRootConstants__GetHelpButtonPos(state, *(const MethodInfo **)&state);
  if ( !titleInfo )
    sub_2213CDC(v6, v7);
  TitleInfoControl__SetHelpBtnPos(titleInfo, HelpButtonPos, 0);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, *(_QWORD *)&state);
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
      sub_2213CDC(helpListViewManager, *(_QWORD *)&state);
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
      sub_2213CDC(helpListViewBase, *(_QWORD *)&state);
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
    sub_2213CDC(buyItemListViewManager, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x19
  System_Action_o *v15; // x20

  if ( (byte_596C912 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopSceneListViewControlHelper___c__DisplayClass33_0__SetListViewOnCloseEventShop_b__0__);
    sub_2213A60(&ShopSceneListViewControlHelper___c__DisplayClass33_0_TypeInfo);
    byte_596C912 = 1;
  }
  v5 = sub_2213CCC(ShopSceneListViewControlHelper___c__DisplayClass33_0_TypeInfo);
  ShopSceneListViewControlHelper___c__DisplayClass33_0___ctor(
    (ShopSceneListViewControlHelper___c__DisplayClass33_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( state == 8 )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_ShopSceneListViewControlHelper___c__DisplayClass33_0__SetListViewOnCloseEventShop_b__0__,
      0);
    if ( buyItemListViewManager )
    {
      ShopBuyItemListViewManager__SetMode_41958800(buyItemListViewManager, 4, v15, 0.1, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(v6, v7);
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
  const MethodInfo *v6; // x2

  ShopSceneListViewControlHelper__SetTopListViewInput(this, state, method);
  ShopSceneListViewControlHelper__SetExRoomShopButtonEnable(this, state, v5);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(this, state, v6);
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
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(topListViewBase, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(0, *(_QWORD *)&state);
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
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  const MethodInfo *v19; // x2

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
  ShopSceneListViewControlHelper__SetExRoomShopButtonUnEnable(this, state, v16);
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    sub_2213CDC(0, v17);
  ServantSellMenu__Init_41881708(servantSellMenu, jumpInfoId, 0);
  ShopSceneListViewControlHelper__SetSellServantMenuInput(this, state, v19);
}


void ShopSceneListViewControlHelper__SetListViewOnSceneQuit(
        ShopSceneListViewControlHelper_o *this,
        const MethodInfo *method)
{
  char *topListViewManager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v7; // x2
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Vector3_o GiftButtonPos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C911 & 1) == 0 )
  {
    sub_2213A60(&ShopRootConstants_TypeInfo);
    byte_596C911 = 1;
  }
  topListViewManager = (char *)this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_22;
  ShopTopListViewManager__DestroyList((ShopTopListViewManager_o *)topListViewManager, 0);
  topListViewManager = (char *)this->fields.buyItemListViewManager;
  if ( !topListViewManager )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)topListViewManager, 0);
  topListViewManager = (char *)this->fields.eventListViewManager;
  if ( !topListViewManager )
    goto LABEL_22;
  ShopEventListViewManager__DestroyList((ShopEventListViewManager_o *)topListViewManager, 0);
  topListViewManager = (char *)this->fields.helpListViewManager;
  if ( !topListViewManager )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)topListViewManager, 0);
  topListViewManager = (char *)this->fields.topListViewBase;
  if ( !topListViewManager )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  topListViewManager = (char *)this->fields.buyItemListViewBase;
  if ( !topListViewManager )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  topListViewManager = (char *)this->fields.eventListViewBase;
  if ( !topListViewManager )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_22;
  topListViewManager = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)topListViewManager, 0);
  if ( !topListViewManager )
    goto LABEL_22;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)topListViewManager, 0);
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v4, v5);
  GiftButtonPos = ShopRootConstants__GetGiftButtonPos(0, 1, v5);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(transform, GiftButtonPos, 0);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_22;
  topListViewManager = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)topListViewManager, 0);
  if ( !topListViewManager )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
  ShopSceneListViewControlHelper__SetExRoomShopButtonUnEnable(this, 1, v7);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_22;
  *((_QWORD *)topListViewManager + 13) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(topListViewManager + 104), 0, v8, v9, v10, v11, v12, v13);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager
    || (*((_QWORD *)topListViewManager + 12) = 0,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(topListViewManager + 96), 0, v14, v15, v16, v17, v18, v19),
        (topListViewManager = (char *)this->fields.giftButtonControl) == 0)
    || (*((_QWORD *)topListViewManager + 14) = 0,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(topListViewManager + 112), 0, v20, v21, v22, v23, v24, v25),
        (topListViewManager = (char *)this->fields.helpListViewManager) == 0) )
  {
LABEL_22:
    sub_2213CDC(topListViewManager, method);
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
  const MethodInfo *v21; // x2

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
  ShopSceneListViewControlHelper__SetExRoomShopButtonUnEnable(this, state, v21);
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
  const MethodInfo *v15; // x2

  ShopSceneListViewControlHelper__SetGiftButtonEnable(this, state, *(const MethodInfo **)&selectedEventIndex);
  EventId = ShopSceneListViewControlHelper__GetEventId(this, state, selectedEventIndex, v7);
  ShopSceneListViewControlHelper__SetGiftButtonPosition(this, state, EventId, v9);
  ShopSceneListViewControlHelper__SetExRoomShopButtonEnable(this, state, v10);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(this, state, v11);
  ShopSceneListViewControlHelper__SetHelpButtonPosition(this, state, v12);
  ShopSceneListViewControlHelper__SetTopListViewInput(this, state, v13);
  ShopSceneListViewControlHelper__SetEventListViewInput(this, state, v14);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(this, state, v15);
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
  const MethodInfo *v20; // x2

  ShopSceneListViewControlHelper__SetEventListViewClear(this, state, *(const MethodInfo **)&backedState);
  ShopSceneListViewControlHelper__SetBuyItemListViewClear(this, state, v9);
  ShopSceneListViewControlHelper__SetSellServantMenuClear(this, state, v10);
  ShopSceneListViewControlHelper__SetGiftButtonEnable(this, backedState, v11);
  EventId = ShopSceneListViewControlHelper__GetEventId(this, backedState, selectedEventIndex, v12);
  ShopSceneListViewControlHelper__SetGiftButtonPosition(this, backedState, EventId, v14);
  ShopSceneListViewControlHelper__SetExRoomShopButtonEnable(this, backedState, v15);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(this, backedState, v16);
  ShopSceneListViewControlHelper__SetHelpButtonPosition(this, backedState, v17);
  ShopSceneListViewControlHelper__SetTopListViewInput(this, backedState, v18);
  ShopSceneListViewControlHelper__SetEventListViewInput(this, backedState, v19);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(this, backedState, v20);
}


void ShopSceneListViewControlHelper__SetOtherObjects(
        ShopSceneListViewControlHelper_o *this,
        TitleInfoControl_o *titleInfo,
        StandFigureBack_o *standFigureBack,
        GiftButtonCtrl_o *giftButtonControl,
        UISprite_o *exRoomShopButtonRoot,
        ExUITexture_o *backgroundTexture,
        ShopRootComponent_o *shopRootComponent,
        const MethodInfo *method)
{
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  this->fields.titleInfo = titleInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.titleInfo,
    (int32_t)titleInfo,
    (System_String_o *)standFigureBack,
    (System_String_o *)giftButtonControl,
    (int32_t)exRoomShopButtonRoot,
    (int32_t)backgroundTexture,
    (bool)shopRootComponent,
    (bool)method);
  this->fields.standFigureBack = standFigureBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.standFigureBack,
    (int32_t)standFigureBack,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.giftButtonControl = giftButtonControl;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.giftButtonControl,
    (int32_t)giftButtonControl,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.exRoomShopButtonRoot = exRoomShopButtonRoot;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exRoomShopButtonRoot,
    (int32_t)exRoomShopButtonRoot,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.backgroundTexture = backgroundTexture;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.backgroundTexture,
    (int32_t)backgroundTexture,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.shopRootComponent = shopRootComponent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.shopRootComponent,
    (int32_t)shopRootComponent,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, *(_QWORD *)&state);
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
      sub_2213CDC(servantSellMenu, *(_QWORD *)&state);
    }
    ServantSellMenu__Close(servantSellMenu, this->fields.onMoveEnd, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetSellServantMenuInit(
        ShopSceneListViewControlHelper_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    sub_2213CDC(0, *(_QWORD *)&kind);
  ServantSellMenu__Init_41881708(servantSellMenu, kind, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetSellServantMenuInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 9 )
  {
    if ( !this->fields.servantSellMenu )
      sub_2213CDC(this, *(_QWORD *)&state);
    ServantSellMenu__Open(this->fields.servantSellMenu, this->fields.onSelectSellServant, this->fields.onMoveEnd, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, *(_QWORD *)&state);
    ServantSellMenu__ModifyListItem(servantSellMenu, servantIds, commandCodeIds, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, *(_QWORD *)&state);
    StandFigureBack__Fadein(standFigureBack, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, *(_QWORD *)&state);
    StandFigureBack__Fadeout(standFigureBack, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetTitleInfo(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *v4; // x19
  TitleInfoControl_o *titleInfo; // x20
  int32_t v6; // w2
  __int64 v7; // x2
  TitleInfoControl_o *v8; // x19

  v4 = this;
  if ( (byte_596C914 & 1) == 0 )
  {
    this = (ShopSceneListViewControlHelper_o *)sub_2213A60(&ShopRootConstants_TypeInfo);
    byte_596C914 = 1;
  }
  titleInfo = v4->fields.titleInfo;
  if ( state == 15 )
  {
    if ( titleInfo )
    {
      TitleInfoControl__changeTitleInfo_46863248(v4->fields.titleInfo, 1, 41, 0, 0);
      v8 = v4->fields.titleInfo;
      this = (ShopSceneListViewControlHelper_o *)ShopRootConstants_TypeInfo;
      if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state, v7);
      if ( v8 )
      {
        TitleInfoControl__setTitleImgFromBanner(
          v8,
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
    this = (ShopSceneListViewControlHelper_o *)v4->fields.shopRootComponent;
    if ( this )
      this = (ShopSceneListViewControlHelper_o *)ShopRootComponent__IsExistBackClassBoardInfo(
                                                   (ShopRootComponent_o *)this,
                                                   *(const MethodInfo **)&state);
    if ( titleInfo )
    {
      TitleInfoControl__SetBackClassBoardButton(titleInfo, (unsigned __int8)this & 1, 0);
      this = (ShopSceneListViewControlHelper_o *)v4->fields.titleInfo;
      if ( this )
      {
        v6 = 41;
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_2213CDC(this, *(_QWORD *)&state);
  }
  if ( !titleInfo )
    goto LABEL_18;
  this = (ShopSceneListViewControlHelper_o *)v4->fields.titleInfo;
  v6 = 42;
LABEL_17:
  TitleInfoControl__changeTitleInfo_46863248((TitleInfoControl_o *)this, 1, v6, 0, 0);
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
      sub_2213CDC(0, v4);
    ShopTopListViewManager__SetMode_42084148(topListViewManager, 3, this->fields.onMoveEnd, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopSceneListViewControlHelper__SetTopListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 1 )
  {
    if ( !this->fields.topListViewManager )
      sub_2213CDC(this, *(_QWORD *)&state);
    ShopTopListViewManager__SetMode(this->fields.topListViewManager, 1, this->fields.onSelectTop, 0);
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
    sub_2213CDC(topListViewBase, *(_QWORD *)&state);
  }
  topListViewBase = (UnityEngine_GameObject_o *)this->fields.topListViewManager;
  if ( !topListViewBase )
    goto LABEL_10;
  onMoveEnd = this->fields.onMoveEnd;
  v9 = 6;
LABEL_7:
  ShopTopListViewManager__SetMode_42084148((ShopTopListViewManager_o *)topListViewBase, v9, onMoveEnd, 0);
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
      sub_2213CDC(0, v4);
    ShopTopListViewManager__SetMode_42084148(topListViewManager, 5, this->fields.onMoveEnd, 0);
  }
}


void ShopSceneListViewControlHelper___c__DisplayClass33_0___ctor(
        ShopSceneListViewControlHelper___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopSceneListViewControlHelper___c__DisplayClass33_0___SetListViewOnCloseEventShop_b__0(
        ShopSceneListViewControlHelper___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  ShopSceneListViewControlHelper__SetBuyItemListViewClear(_4__this, this->fields.state, 0);
}