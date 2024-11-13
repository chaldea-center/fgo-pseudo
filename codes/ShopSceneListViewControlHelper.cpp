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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.topListViewBase = topListViewBase;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)topListViewBase, v20, v21, v22, v23, v24, v25);
  this->fields.eventListViewBase = eventListViewBase;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventListViewBase,
    (int64_t)eventListViewBase,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.buyItemListViewBase = buyItemListViewBase;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.buyItemListViewBase,
    (int64_t)buyItemListViewBase,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.helpListViewBase = helpListViewBase;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.helpListViewBase,
    (int64_t)helpListViewBase,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.currencyInfoController = currencyInfoController;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currencyInfoController,
    (int64_t)currencyInfoController,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.topListViewManager = topListViewManager;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.topListViewManager,
    (int64_t)topListViewManager,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.eventListViewManager = eventListViewManager;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventListViewManager,
    (int64_t)eventListViewManager,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.buyItemListViewManager = buyItemListViewManager;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.buyItemListViewManager,
    (int64_t)buyItemListViewManager,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.servantSellMenu = servantSellMenu;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantSellMenu,
    (int64_t)servantSellMenu,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.helpListViewManager = helpListViewManager;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.helpListViewManager,
    (int64_t)helpListViewManager,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
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
    return dword_C0C438[state - 1];
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


// local variable allocation has failed, the output may be wrong!
ShopBuyItemListViewItem_o *__fastcall ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
        ShopSceneListViewControlHelper_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0

  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  return ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ShopEventListViewItem_o *__fastcall ShopSceneListViewControlHelper__GetShopEventListViewItem(
        ShopSceneListViewControlHelper_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0

  eventListViewManager = this->fields.eventListViewManager;
  if ( !eventListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ShopRootConstants_c *v10; // x0
  System_String_o *SVT_COSTUME_BGM_NAME; // x19

  if ( (byte_4B127E8 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, *(_QWORD *)&state, isEnter);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    byte_4B127E8 = 1;
  }
  if ( state == 15 )
  {
    if ( isEnter )
    {
      v10 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state);
        v10 = ShopRootConstants_TypeInfo;
      }
      SVT_COSTUME_BGM_NAME = v10->static_fields->SVT_COSTUME_BGM_NAME;
    }
    else
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, *(_QWORD *)&state);
      SVT_COSTUME_BGM_NAME = BgmManager__GetMainBgmName(0LL);
    }
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&state);
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
  ShopSceneListViewControlHelper_o *v6; // x19
  __int64 v7; // x1
  UnityEngine_GameObject_o *buyItemListViewBase; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x22
  ShopCurrencyInfoController_o *currencyInfoController; // x21

  v6 = this;
  if ( (byte_4B127E5 & 1) == 0 )
  {
    this = (ShopSceneListViewControlHelper_o *)sub_1BCA7E0(
                                                 &ShopBuyItemListViewManager_TypeInfo,
                                                 *(_QWORD *)&state,
                                                 *(_QWORD *)&eventId);
    byte_4B127E5 = 1;
  }
  if ( ShopSceneListViewControlHelper__GetIsBuyItemList(this, state, *(const MethodInfo **)&eventId) )
  {
    buyItemListViewBase = v6->fields.buyItemListViewBase;
    if ( !buyItemListViewBase )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(buyItemListViewBase, 1, 0LL);
    buyItemListViewManager = v6->fields.buyItemListViewManager;
    if ( state == 8 )
    {
      if ( !buyItemListViewManager )
        goto LABEL_17;
      ShopBuyItemListViewManager__CreateList_33464912(v6->fields.buyItemListViewManager, eventId, 0LL);
    }
    else
    {
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v7);
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0LL);
      if ( !buyItemListViewManager )
        goto LABEL_17;
      ShopBuyItemListViewManager__CreateList(buyItemListViewManager, (int32_t)buyItemListViewBase, 0LL);
      buyItemListViewBase = (UnityEngine_GameObject_o *)v6->fields.buyItemListViewManager;
      if ( !buyItemListViewBase )
        goto LABEL_17;
      ShopBuyItemListViewManager__FocusTopItem((ShopBuyItemListViewManager_o *)buyItemListViewBase, 0LL);
      currencyInfoController = v6->fields.currencyInfoController;
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0LL);
      if ( !currencyInfoController )
        goto LABEL_17;
      ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, (int32_t)buyItemListViewBase, state, 0LL);
    }
    buyItemListViewBase = (UnityEngine_GameObject_o *)v6->fields.buyItemListViewManager;
    if ( buyItemListViewBase )
    {
      ShopBuyItemListViewManager__SetMode_33470956(
        (ShopBuyItemListViewManager_o *)buyItemListViewBase,
        1,
        v6->fields.onMoveEnd,
        0.1,
        0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(buyItemListViewBase, v7);
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
      sub_1BCAA3C(buyItemListViewManager, v4);
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
      sub_1BCAA3C(0LL, v4);
    ShopBuyItemListViewManager__SetMode_33470956(buyItemListViewManager, 4, this->fields.onMoveEnd, 0.1, 0LL);
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
      sub_1BCAA3C(0LL, v4);
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
        ShopBuyItemListViewManager__SetMode_33469684(buyItemListViewManager, 5, 0LL);
        return;
      }
LABEL_7:
      sub_1BCAA3C(buyItemListViewManager, v4);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  this->fields.onMoveEnd = onMoveEnd;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onMoveEnd,
    (int64_t)onMoveEnd,
    (int64_t)onSelectTop,
    (int32_t)onSelectEvent,
    (System_String_o *)onSelectBuyItem,
    (BattleSetupInfo_o *)onSelectSellServant,
    (FollowerInfo_o *)onOpenHelp,
    (PartyListViewItem_o *)method);
  this->fields.onSelectTop = onSelectTop;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelectTop,
    (int64_t)onSelectTop,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.onSelectEvent = onSelectEvent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelectEvent,
    (int64_t)onSelectEvent,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.onSelectBuyItem = onSelectBuyItem;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelectBuyItem,
    (int64_t)onSelectBuyItem,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.onSelectSellServant = onSelectSellServant;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelectSellServant,
    (int64_t)onSelectSellServant,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.onOpenHelp = onOpenHelp;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onOpenHelp, (int64_t)onOpenHelp, v38, v39, v40, v41, v42, v43);
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
    sub_1BCAA3C(eventListViewManager, *(_QWORD *)&state);
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
          ShopEventListViewManager__SetMode_33495028(
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
      sub_1BCAA3C(eventListViewManager, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventListViewManager, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
    ShopEventListViewManager__SetMode_33495028(eventListViewManager, 4, this->fields.onMoveEnd, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
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
      ShopEventListViewManager__SetMode_33494864((ShopEventListViewManager_o *)eventListViewBase, 6, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(eventListViewBase, *(_QWORD *)&state);
  }
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__SetMode_33495028(
    (ShopEventListViewManager_o *)eventListViewBase,
    1,
    this->fields.onMoveEnd,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
    ShopEventListViewManager__SetMode_33495028(eventListViewManager, 5, this->fields.onMoveEnd, 0LL);
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
      sub_1BCAA3C(giftButtonControl, *(_QWORD *)&state);
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *giftButtonControl; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v12; // x1
  bool IsShowEventItemWindow; // w19
  int v14; // s0

  if ( (byte_4B127EB & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state, *(_QWORD *)&eventId);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v7, v8);
    byte_4B127EB = 1;
  }
  giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
  if ( !giftButtonControl )
    goto LABEL_10;
  transform = UnityEngine_Component__get_transform(giftButtonControl, 0LL);
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v10);
  IsShowEventItemWindow = ShopBuyItemListViewManager__GetIsShowEventItemWindow(state, eventId, 0LL);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v12);
  *(UnityEngine_Vector3_o *)&v14 = ShopRootConstants__GetGiftButtonPos(IsShowEventItemWindow, v12);
  if ( !transform )
LABEL_10:
    sub_1BCAA3C(giftButtonControl, *(_QWORD *)&state);
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
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
      sub_1BCAA3C(giftButtonControl, *(_QWORD *)&state);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int32_t v19; // w1
  __int64 v20; // x1
  GuideEntity_o *GuideData; // x21
  ShopRootConstants_c *v22; // x0
  int *p_bgImageId; // x8
  int v24; // w24
  System_String_o *BG_ROOT; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x22
  __int64 v28; // x1
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

  if ( (byte_4B127E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GuideMaster___, *(_QWORD *)&state, endSet);
    sub_1BCA7E0(&FSUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B127E7 = 1;
  }
  if ( state == 15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GuideMaster___);
    if ( !Instance )
      goto LABEL_32;
    v19 = isEnter ? 3 : 2;
    GuideData = GuideMaster__getGuideData((GuideMaster_o *)Instance, v19, 0LL);
    if ( GuideData )
    {
      v22 = ShopRootConstants_TypeInfo;
      p_bgImageId = &GuideData->fields.bgImageId;
    }
    else
    {
      v22 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v20);
        v22 = ShopRootConstants_TypeInfo;
      }
      p_bgImageId = &v22->static_fields->DEFAULT_BG_ID;
    }
    v24 = *p_bgImageId;
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, v20);
      v22 = ShopRootConstants_TypeInfo;
    }
    BG_ROOT = v22->static_fields->BG_ROOT;
    v40 = v24;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    Instance = (DataManager_o *)System_String__Format(BG_ROOT, v26, 0LL);
    if ( !this->fields.backgroundTexture )
      goto LABEL_32;
    v27 = (System_String_o *)Instance;
    if ( !ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0LL, 0LL) )
    {
      v29 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v28);
        v29 = ShopRootConstants_TypeInfo;
      }
      static_fields = v29->static_fields;
      v31 = static_fields->BG_ROOT;
      DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID);
      Instance = (DataManager_o *)System_String__Format(v31, v32, 0LL);
      if ( !this->fields.backgroundTexture )
        goto LABEL_32;
      v27 = (System_String_o *)Instance;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0LL, 0LL);
    }
    backgroundTexture = this->fields.backgroundTexture;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v28);
    FSUtility__SetUpBackTextureSize(backgroundTexture, v27, 0LL);
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
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v18);
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
    sub_1BCAA3C(Instance, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetHelpButtonEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *HelpSaveKey; // x20
  __int64 v10; // x1
  TitleInfoControl_o *Int; // x0
  __int64 v12; // x1
  struct System_Action_o *onOpenHelp; // x8

  if ( (byte_4B127E9 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B127E9 = 1;
  }
  if ( (unsigned int)state <= 0x14 && ((1 << state) & 0x10006A) != 0 )
  {
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state);
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
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v10);
      Int = (TitleInfoControl_o *)TutorialFlag__Get_38402052(103, 0LL);
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
        sub_1BCAA3C(Int, v12);
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

  if ( (byte_4B127EA & 1) == 0 )
  {
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, *(_QWORD *)&state, method);
    byte_4B127EA = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state);
  *(UnityEngine_Vector3_o *)&v8 = ShopRootConstants__GetHelpButtonPos(state, *(const MethodInfo **)&state);
  if ( !titleInfo )
    sub_1BCAA3C(v6, v7);
  TitleInfoControl__SetHelpBtnPos(titleInfo, *(UnityEngine_Vector3_o *)&v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
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
      sub_1BCAA3C(helpListViewManager, *(_QWORD *)&state);
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
      sub_1BCAA3C(helpListViewBase, *(_QWORD *)&state);
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
    sub_1BCAA3C(buyItemListViewManager, method);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x19
  System_Action_o *v23; // x20

  if ( (byte_4B127E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(
      &Method_ShopSceneListViewControlHelper___c__DisplayClass31_0__SetListViewOnCloseEventShop_b__0__,
      v6,
      v7);
    sub_1BCA7E0(&ShopSceneListViewControlHelper___c__DisplayClass31_0_TypeInfo, v8, v9);
    byte_4B127E4 = 1;
  }
  v10 = sub_1BCAA2C(ShopSceneListViewControlHelper___c__DisplayClass31_0_TypeInfo, *(_QWORD *)&state, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_8;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = state;
  if ( state == 8 )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v10,
      Method_ShopSceneListViewControlHelper___c__DisplayClass31_0__SetListViewOnCloseEventShop_b__0__,
      0LL);
    if ( buyItemListViewManager )
    {
      ShopBuyItemListViewManager__SetMode_33470956(buyItemListViewManager, 4, v23, 0.1, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(v11, v12);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(topListViewBase, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
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
    sub_1BCAA3C(0LL, v16);
  ServantSellMenu__Init_33406024(servantSellMenu, jumpInfoId, 0LL);
  ShopSceneListViewControlHelper__SetSellServantMenuInput(this, state, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetListViewOnSceneQuit(
        ShopSceneListViewControlHelper_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  char *topListViewManager; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *transform; // x20
  int v7; // s0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B127E3 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, method, v2);
    byte_4B127E3 = 1;
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
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v5);
  *(UnityEngine_Vector3_o *)&v7 = ShopRootConstants__GetGiftButtonPos(0, v5);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
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
        sub_1BCA784((PartyOrganizationUtility_o *)(topListViewManager + 104), 0LL, v10, v11, v12, v13, v14, v15),
        (topListViewManager = (char *)this->fields.giftButtonControl) == 0LL)
    || (*((_QWORD *)topListViewManager + 12) = 0LL,
        sub_1BCA784((PartyOrganizationUtility_o *)(topListViewManager + 96), 0LL, v16, v17, v18, v19, v20, v21),
        (topListViewManager = (char *)this->fields.helpListViewManager) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(topListViewManager, method);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  this->fields.titleInfo = titleInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.titleInfo,
    (int64_t)titleInfo,
    (int64_t)standFigureBack,
    (int32_t)giftButtonControl,
    (System_String_o *)backgroundTexture,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.standFigureBack = standFigureBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.standFigureBack,
    (int64_t)standFigureBack,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.giftButtonControl = giftButtonControl;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.giftButtonControl,
    (int64_t)giftButtonControl,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.backgroundTexture = backgroundTexture;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.backgroundTexture,
    (int64_t)backgroundTexture,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
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
      sub_1BCAA3C(servantSellMenu, *(_QWORD *)&state);
    }
    ServantSellMenu__Close(servantSellMenu, this->fields.onMoveEnd, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetSellServantMenuInit(
        ShopSceneListViewControlHelper_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0

  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    sub_1BCAA3C(0LL, *(_QWORD *)&kind);
  ServantSellMenu__Init_33406024(servantSellMenu, kind, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetSellServantMenuInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 9 )
  {
    if ( !this->fields.servantSellMenu )
      sub_1BCAA3C(this, *(_QWORD *)&state);
    ServantSellMenu__Open(this->fields.servantSellMenu, this->fields.onSelectSellServant, this->fields.onMoveEnd, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
    ServantSellMenu__ModifyListItem(servantSellMenu, servantIds, commandCodeIds, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
    StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
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

  if ( (byte_4B127E6 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, *(_QWORD *)&state, method);
    byte_4B127E6 = 1;
  }
  if ( state == 15 )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, 38, 0, 0LL);
      v7 = this->fields.titleInfo;
      titleInfo = (TitleInfoControl_o *)ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state);
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
      v6 = 38;
      goto LABEL_14;
    }
LABEL_15:
    sub_1BCAA3C(titleInfo, *(_QWORD *)&state);
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  v6 = 39;
LABEL_14:
  TitleInfoControl__changeTitleInfo_37891656(titleInfo, 1, v6, 0, 0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetTopListViewEnter(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 Hierarchy; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct ShopTopListViewManager_o *topListViewManager; // x19
  struct System_Action_o *onMoveEnd; // x1
  const MethodInfo *v14; // x2

  Hierarchy = ShopSceneListViewControlHelper__GetHierarchy(this, state, method);
  if ( (_DWORD)Hierarchy == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1BCAA3C(Hierarchy, v5);
    onMoveEnd = this->fields.onMoveEnd;
    topListViewManager->fields.onMoveEnd = onMoveEnd;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&topListViewManager->fields.onMoveEnd,
      (int64_t)onMoveEnd,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    ShopTopListViewManager__SetMode_33584092(topListViewManager, 3, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetTopListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ShopTopListViewManager_o *topListViewManager; // x19
  struct System_Action_ShopRootConstants_State__o *onSelectTop; // x1
  const MethodInfo *v10; // x2

  if ( state == 1 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1BCAA3C(this, *(_QWORD *)&state);
    onSelectTop = this->fields.onSelectTop;
    topListViewManager->fields.onClickListViewItem = onSelectTop;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&topListViewManager->fields.onClickListViewItem,
      (int64_t)onSelectTop,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    topListViewManager->fields.initMode = 1;
    ListViewManager__set_IsInput((ListViewManager_o *)topListViewManager, 1, 0LL);
    ShopTopListViewManager__RequestListObject(topListViewManager, 1, v10);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int v15; // w8
  int v16; // w9
  struct ShopTopListViewManager_o *topListViewManager; // x20
  struct System_Action_o *v18; // x1
  const MethodInfo *v19; // x2
  int32_t v20; // w1
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
    v15 = 1 << state;
    v16 = 796;
  }
  else
  {
    if ( (unsigned int)state > 0x14 )
      goto LABEL_12;
    v15 = 1 << state;
    v16 = 1851392;
  }
  if ( (v15 & v16) == 0 )
  {
LABEL_12:
    topListViewManager = this->fields.topListViewManager;
    if ( topListViewManager )
    {
      onMoveEnd = this->fields.onMoveEnd;
      topListViewManager->fields.onMoveEnd = onMoveEnd;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&topListViewManager->fields.onMoveEnd,
        (int64_t)onMoveEnd,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      v20 = 2;
      goto LABEL_11;
    }
LABEL_14:
    sub_1BCAA3C(topListViewBase, *(_QWORD *)&state);
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_14;
  v18 = this->fields.onMoveEnd;
  topListViewManager->fields.onMoveEnd = v18;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&topListViewManager->fields.onMoveEnd,
    (int64_t)v18,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v20 = 6;
LABEL_11:
  ShopTopListViewManager__SetMode_33584092(topListViewManager, v20, v19);
}


void __fastcall ShopSceneListViewControlHelper__SetTopListViewRetry(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 Hierarchy; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct ShopTopListViewManager_o *topListViewManager; // x19
  struct System_Action_o *onMoveEnd; // x1
  const MethodInfo *v14; // x2

  Hierarchy = ShopSceneListViewControlHelper__GetHierarchy(this, state, method);
  if ( (_DWORD)Hierarchy == 2 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_1BCAA3C(Hierarchy, v5);
    onMoveEnd = this->fields.onMoveEnd;
    topListViewManager->fields.onMoveEnd = onMoveEnd;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&topListViewManager->fields.onMoveEnd,
      (int64_t)onMoveEnd,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    ShopTopListViewManager__SetMode_33584092(topListViewManager, 5, v14);
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
    sub_1BCAA3C(this, method);
  ShopSceneListViewControlHelper__SetBuyItemListViewClear(this->fields.__4__this, this->fields.state, v2);
}