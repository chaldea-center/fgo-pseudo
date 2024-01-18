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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.topListViewBase = topListViewBase;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)topListViewBase,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.eventListViewBase = eventListViewBase;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventListViewBase,
    (System_Int32_array **)eventListViewBase,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.buyItemListViewBase = buyItemListViewBase;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.buyItemListViewBase,
    (System_Int32_array **)buyItemListViewBase,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.helpListViewBase = helpListViewBase;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.helpListViewBase,
    (System_Int32_array **)helpListViewBase,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.currencyInfoController = currencyInfoController;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currencyInfoController,
    (System_Int32_array **)currencyInfoController,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.topListViewManager = topListViewManager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.topListViewManager,
    (System_Int32_array **)topListViewManager,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.eventListViewManager = eventListViewManager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventListViewManager,
    (System_Int32_array **)eventListViewManager,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.buyItemListViewManager = buyItemListViewManager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.buyItemListViewManager,
    (System_Int32_array **)buyItemListViewManager,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.servantSellMenu = servantSellMenu;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantSellMenu,
    (System_Int32_array **)servantSellMenu,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.helpListViewManager = helpListViewManager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.helpListViewManager,
    (System_Int32_array **)helpListViewManager,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
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
      sub_B2C434(0LL, state);
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
    return dword_31A39A0[state - 1];
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
    sub_B2C434(0LL, index);
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
    sub_B2C434(0LL, index);
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

  if ( (byte_418920E & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&ShopRootConstants_TypeInfo, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_418920E = 1;
  }
  if ( state == 15 )
  {
    if ( isEnter )
    {
      v8 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v8 = ShopRootConstants_TypeInfo;
      }
      SVT_COSTUME_BGM_NAME = v8->static_fields->SVT_COSTUME_BGM_NAME;
    }
    else
    {
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      SVT_COSTUME_BGM_NAME = BgmManager__GetMainBgmName(0LL);
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
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
  UnityEngine_GameObject_o *buyItemListViewBase; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x22
  ShopCurrencyInfoController_o *currencyInfoController; // x21

  if ( (unsigned int)state <= 0x15 && ((1 << state) & 0x3DD97C) != 0 )
  {
    buyItemListViewBase = this->fields.buyItemListViewBase;
    if ( !buyItemListViewBase )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(buyItemListViewBase, 1, 0LL);
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( state == 8 )
    {
      if ( !buyItemListViewManager )
        goto LABEL_13;
      ShopBuyItemListViewManager__CreateList_34844180(this->fields.buyItemListViewManager, eventId, 0LL);
    }
    else
    {
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0LL);
      if ( !buyItemListViewManager )
        goto LABEL_13;
      ShopBuyItemListViewManager__CreateList(buyItemListViewManager, (int32_t)buyItemListViewBase, 0LL);
      currencyInfoController = this->fields.currencyInfoController;
      buyItemListViewBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0LL);
      if ( !currencyInfoController )
        goto LABEL_13;
      ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, (int32_t)buyItemListViewBase, state, 0LL);
    }
    buyItemListViewBase = (UnityEngine_GameObject_o *)this->fields.buyItemListViewManager;
    if ( buyItemListViewBase )
    {
      ShopBuyItemListViewManager__SetMode_34850072(
        (ShopBuyItemListViewManager_o *)buyItemListViewBase,
        1,
        this->fields.onMoveEnd,
        0.1,
        0LL);
      return;
    }
LABEL_13:
    sub_B2C434(buyItemListViewBase, *(_QWORD *)&state);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetBuyItemListViewClear(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ListViewManager_o *buyItemListViewManager; // x0

  if ( (unsigned int)state <= 0x15 && ((1 << state) & 0x3DD97C) != 0 )
  {
    buyItemListViewManager = (ListViewManager_o *)this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager
      || (ListViewManager__DestroyList(buyItemListViewManager, 0LL),
          (buyItemListViewManager = (ListViewManager_o *)this->fields.buyItemListViewBase) == 0LL) )
    {
      sub_B2C434(buyItemListViewManager, *(_QWORD *)&state);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 0, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetBuyItemListViewExit(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( (unsigned int)state <= 0x15 && ((1 << state) & 0x3DD97C) != 0 )
  {
    if ( !this->fields.buyItemListViewManager )
      sub_B2C434(this, state);
    ShopBuyItemListViewManager__SetMode_34850072(
      this->fields.buyItemListViewManager,
      4,
      this->fields.onMoveEnd,
      0.1,
      0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetBuyItemListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( (unsigned int)state <= 0x15 && ((1 << state) & 0x3DD97C) != 0 )
  {
    if ( !this->fields.buyItemListViewManager )
      sub_B2C434(this, state);
    ShopBuyItemListViewManager__SetMode(this->fields.buyItemListViewManager, 2, this->fields.onSelectBuyItem, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetBuyItemListViewModify(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0

  if ( (unsigned int)state <= 0x15 && ((1 << state) & 0x3DD97C) != 0 )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_8;
    if ( ShopBuyItemListViewManager__ModifyList(buyItemListViewManager, 0LL) )
    {
      buyItemListViewManager = this->fields.buyItemListViewManager;
      if ( buyItemListViewManager )
      {
        ShopBuyItemListViewManager__SetMode_34848696(buyItemListViewManager, 5, 0LL);
        return;
      }
LABEL_8:
      sub_B2C434(buyItemListViewManager, *(_QWORD *)&state);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  this->fields.onMoveEnd = onMoveEnd;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    (System_String_array **)onSelectTop,
    (System_String_array **)onSelectEvent,
    (System_Boolean_array **)onSelectBuyItem,
    (System_Int32_array **)onSelectSellServant,
    (System_Int32_array *)onOpenHelp,
    (System_Int32_array *)method);
  this->fields.onSelectTop = onSelectTop;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onSelectTop,
    (System_Int32_array **)onSelectTop,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.onSelectEvent = onSelectEvent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onSelectEvent,
    (System_Int32_array **)onSelectEvent,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.onSelectBuyItem = onSelectBuyItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onSelectBuyItem,
    (System_Int32_array **)onSelectBuyItem,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.onSelectSellServant = onSelectSellServant;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
    (System_Int32_array **)onSelectSellServant,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.onOpenHelp = onOpenHelp;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onOpenHelp,
    (System_Int32_array **)onOpenHelp,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
    sub_B2C434(eventListViewManager, *(_QWORD *)&state);
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
          ShopEventListViewManager__SetMode_34884912(
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
      sub_B2C434(eventListViewManager, *(_QWORD *)&state);
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
      sub_B2C434(0LL, state);
    ShopEventListViewManager__SetMode_34884912(eventListViewManager, 4, this->fields.onMoveEnd, 0LL);
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
      sub_B2C434(0LL, state);
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
      ShopEventListViewManager__SetMode_34884744((ShopEventListViewManager_o *)eventListViewBase, 6, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(eventListViewBase, *(_QWORD *)&state);
  }
  if ( !eventListViewBase )
    goto LABEL_16;
  ShopEventListViewManager__SetMode_34884912(
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
      sub_B2C434(0LL, state);
    ShopEventListViewManager__SetMode_34884912(eventListViewManager, 5, this->fields.onMoveEnd, 0LL);
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
      sub_B2C434(giftButtonControl, *(_QWORD *)&state);
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

  if ( (byte_4189211 & 1) == 0 )
  {
    sub_B2C35C(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    byte_4189211 = 1;
  }
  giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
  if ( !giftButtonControl )
    goto LABEL_9;
  transform = UnityEngine_Component__get_transform(giftButtonControl, 0LL);
  IsShowEventItemWindow = ShopBuyItemListViewManager__GetIsShowEventItemWindow(state, eventId, 0LL);
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  }
  *(UnityEngine_Vector3_o *)&v11 = ShopRootConstants__GetGiftButtonPos(IsShowEventItemWindow, v9);
  if ( !transform )
LABEL_9:
    sub_B2C434(giftButtonControl, *(_QWORD *)&state);
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
      sub_B2C434(giftButtonControl, *(_QWORD *)&state);
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
  GuideEntity_o *GuideData; // x21
  ShopRootConstants_c *v17; // x0
  int *p_bgImageId; // x8
  int v19; // w24
  System_String_o *BG_ROOT; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x22
  ShopRootConstants_c *v23; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  ExUITexture_o *backgroundTexture; // x23
  ShopRootConstants_c *v28; // x0
  int32_t guideFaceId; // w4
  int32_t *p_guideImageId; // x8
  int32_t *p_guideLimitCount; // x9
  struct ShopRootConstants_StaticFields *v32; // x9
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-38h] BYREF
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418920D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GuideMaster___, *(_QWORD *)&state);
    sub_B2C35C(&FSUtility_TypeInfo, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&ShopRootConstants_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418920D = 1;
  }
  if ( state == 15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GuideMaster___);
    if ( !Instance )
      goto LABEL_37;
    v15 = isEnter ? 3 : 2;
    GuideData = GuideMaster__getGuideData((GuideMaster_o *)Instance, v15, 0LL);
    if ( GuideData )
    {
      v17 = ShopRootConstants_TypeInfo;
      p_bgImageId = &GuideData->fields.bgImageId;
    }
    else
    {
      v17 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v17 = ShopRootConstants_TypeInfo;
      }
      p_bgImageId = &v17->static_fields->DEFAULT_BG_ID;
    }
    v19 = *p_bgImageId;
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ShopRootConstants_TypeInfo;
    }
    BG_ROOT = v17->static_fields->BG_ROOT;
    v34 = v19;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    Instance = (DataManager_o *)System_String__Format(BG_ROOT, v21, 0LL);
    if ( !this->fields.backgroundTexture )
      goto LABEL_37;
    v22 = (System_String_o *)Instance;
    if ( !ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0LL, 0LL) )
    {
      v23 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
        v23 = ShopRootConstants_TypeInfo;
      }
      static_fields = v23->static_fields;
      v25 = static_fields->BG_ROOT;
      DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID);
      Instance = (DataManager_o *)System_String__Format(v25, v26, 0LL);
      if ( !this->fields.backgroundTexture )
        goto LABEL_37;
      v22 = (System_String_o *)Instance;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)Instance, 0LL, 0LL);
    }
    backgroundTexture = this->fields.backgroundTexture;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    FSUtility__SetUpBackTextureSize(backgroundTexture, v22, 0LL);
    v28 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v28 = ShopRootConstants_TypeInfo;
      if ( GuideData )
        goto LABEL_31;
    }
    else if ( GuideData )
    {
LABEL_31:
      guideFaceId = GuideData->fields.guideFaceId;
      p_guideImageId = &GuideData->fields.guideImageId;
      p_guideLimitCount = &GuideData->fields.guideLimitCount;
      goto LABEL_34;
    }
    v32 = v28->static_fields;
    guideFaceId = 0;
    p_guideImageId = &v32->DEFAULT_FIGURE_ID;
    p_guideLimitCount = &v32->DEFAULT_FIGURE_LIMIT_CNT;
LABEL_34:
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
LABEL_37:
    sub_B2C434(Instance, v14);
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
  __int64 v8; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_418920F & 1) == 0 )
  {
    sub_B2C35C(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&TutorialFlag_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418920F = 1;
  }
  if ( (unsigned int)state <= 0x14 && ((1 << state) & 0x10006A) != 0 )
  {
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    }
    HelpSaveKey = ShopRootConstants__GetHelpSaveKey(state, *(const MethodInfo **)&state);
    if ( System_String__op_Inequality(HelpSaveKey, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( UnityEngine_PlayerPrefs__GetInt(HelpSaveKey, 0, 0LL) )
        goto LABEL_10;
    }
    else
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_28617756(103, 0LL) )
      {
LABEL_10:
        titleInfo = this->fields.titleInfo;
        if ( titleInfo )
        {
          TitleInfoControl__SetHelpBtn(titleInfo, 1, 0LL);
          return;
        }
LABEL_19:
        sub_B2C434(titleInfo, v8);
      }
    }
    titleInfo = (TitleInfoControl_o *)this->fields.onOpenHelp;
    if ( !titleInfo )
      goto LABEL_19;
    System_Action__Invoke((System_Action_o *)titleInfo, 0LL);
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

  if ( (byte_4189210 & 1) == 0 )
  {
    sub_B2C35C(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    byte_4189210 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  }
  *(UnityEngine_Vector3_o *)&v8 = ShopRootConstants__GetHelpButtonPos(state, *(const MethodInfo **)&state);
  if ( !titleInfo )
    sub_B2C434(v6, v7);
  TitleInfoControl__SetHelpBtnPos(titleInfo, *(UnityEngine_Vector3_o *)&v8, 0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetHelpButtonUnEnable(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, state);
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopSceneListViewControlHelper__SetHelpListViewClose(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ListViewManager_o *helpListViewManager; // x0

  if ( state == 13 )
  {
    helpListViewManager = (ListViewManager_o *)this->fields.helpListViewManager;
    if ( !helpListViewManager
      || (ListViewManager__DestroyList(helpListViewManager, 0LL),
          (helpListViewManager = (ListViewManager_o *)this->fields.helpListViewBase) == 0LL) )
    {
      sub_B2C434(helpListViewManager, *(_QWORD *)&state);
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
      sub_B2C434(helpListViewBase, *(_QWORD *)&state);
    }
    ShopHelpListViewManager__CreateList((ShopHelpListViewManager_o *)helpListViewBase, *(const MethodInfo **)&state);
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
    sub_B2C434(buyItemListViewManager, method);
  }
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)buyItemListViewManager, 0LL) )
  {
    buyItemListViewManager = (UnityEngine_Component_o *)this->fields.topListViewManager;
    if ( buyItemListViewManager )
    {
      ShopTopListViewManager__InvalidateList((ShopTopListViewManager_o *)buyItemListViewManager, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x19
  System_Action_o *v17; // x20

  if ( (byte_418920B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&Method_ShopSceneListViewControlHelper___c__DisplayClass31_0__SetListViewOnCloseEventShop_b__0__, v5);
    sub_B2C35C(&ShopSceneListViewControlHelper___c__DisplayClass31_0_TypeInfo, v6);
    byte_418920B = 1;
  }
  v7 = sub_B2C42C(ShopSceneListViewControlHelper___c__DisplayClass31_0_TypeInfo);
  ShopSceneListViewControlHelper___c__DisplayClass31_0___ctor(
    (ShopSceneListViewControlHelper___c__DisplayClass31_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = state;
  if ( state == 8 )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v7,
      Method_ShopSceneListViewControlHelper___c__DisplayClass31_0__SetListViewOnCloseEventShop_b__0__,
      0LL);
    if ( buyItemListViewManager )
    {
      ShopBuyItemListViewManager__SetMode_34850072(buyItemListViewManager, 4, v17, 0.1, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(v8, v9);
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
    sub_B2C434(0LL, v4);
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
    sub_B2C434(0LL, state);
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
  __int64 v13; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  ShopSceneListViewControlHelper__SetTopListViewOnInit(
    this,
    state,
    overrideScrollBarValue,
    *(const MethodInfo **)&jumpInfoId);
  ShopSceneListViewControlHelper__SetEventListViewOnInit(this, state, jumpInfoId, selectedEventIndex, v10);
  ShopSceneListViewControlHelper__SetBuyItemListView(this, state, jumpInfoId, v11);
  ShopSceneListViewControlHelper__SetTitleInfo(this, state, v12);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL),
        ShopSceneListViewControlHelper__SetGiftButtonUnEnable(this, state, v15),
        ShopSceneListViewControlHelper__SetStandFigureBackFadeout(this, state, v16),
        (titleInfo = (TitleInfoControl_o *)this->fields.servantSellMenu) == 0LL) )
  {
    sub_B2C434(titleInfo, v13);
  }
  ServantSellMenu__Init_28886352((ServantSellMenu_o *)titleInfo, jumpInfoId, 0LL);
  ShopSceneListViewControlHelper__SetSellServantMenuInput(this, state, v17);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418920A & 1) == 0 )
  {
    sub_B2C35C(&ShopRootConstants_TypeInfo, method);
    byte_418920A = 1;
  }
  topListViewManager = (char *)this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_22;
  ShopTopListViewManager__DestroyList((ShopTopListViewManager_o *)topListViewManager, 0LL);
  topListViewManager = (char *)this->fields.buyItemListViewManager;
  if ( !topListViewManager )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)topListViewManager, 0LL);
  topListViewManager = (char *)this->fields.eventListViewManager;
  if ( !topListViewManager )
    goto LABEL_22;
  ShopEventListViewManager__DestroyList((ShopEventListViewManager_o *)topListViewManager, 0LL);
  topListViewManager = (char *)this->fields.helpListViewManager;
  if ( !topListViewManager )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)topListViewManager, 0LL);
  topListViewManager = (char *)this->fields.topListViewBase;
  if ( !topListViewManager )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  topListViewManager = (char *)this->fields.buyItemListViewBase;
  if ( !topListViewManager )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  topListViewManager = (char *)this->fields.eventListViewBase;
  if ( !topListViewManager )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_22;
  topListViewManager = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)topListViewManager, 0LL);
  if ( !topListViewManager )
    goto LABEL_22;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)topListViewManager, 0LL);
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  }
  *(UnityEngine_Vector3_o *)&v6 = ShopRootConstants__GetGiftButtonPos(0, v4);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager )
    goto LABEL_22;
  topListViewManager = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)topListViewManager, 0LL);
  if ( !topListViewManager )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0LL);
  topListViewManager = (char *)this->fields.giftButtonControl;
  if ( !topListViewManager
    || (*((_QWORD *)topListViewManager + 12) = 0LL,
        sub_B2C2F8((BattleServantConfConponent_o *)(topListViewManager + 96), 0LL, v9, v10, v11, v12, v13, v14),
        (topListViewManager = (char *)this->fields.giftButtonControl) == 0LL)
    || (*((_QWORD *)topListViewManager + 11) = 0LL,
        sub_B2C2F8((BattleServantConfConponent_o *)(topListViewManager + 88), 0LL, v15, v16, v17, v18, v19, v20),
        (topListViewManager = (char *)this->fields.helpListViewManager) == 0LL) )
  {
LABEL_22:
    sub_B2C434(topListViewManager, method);
  }
  ShopHelpListViewManager__ReleaseBaseSprite((ShopHelpListViewManager_o *)topListViewManager, method);
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
  __int64 v19; // x1
  TitleInfoControl_o *titleInfo; // x0
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
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, v19);
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
  ShopSceneListViewControlHelper__SetGiftButtonUnEnable(this, state, v21);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  this->fields.titleInfo = titleInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.titleInfo,
    (System_Int32_array **)titleInfo,
    (System_String_array **)standFigureBack,
    (System_String_array **)giftButtonControl,
    (System_Boolean_array **)backgroundTexture,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.standFigureBack = standFigureBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.standFigureBack,
    (System_Int32_array **)standFigureBack,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.giftButtonControl = giftButtonControl;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.giftButtonControl,
    (System_Int32_array **)giftButtonControl,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.backgroundTexture = backgroundTexture;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.backgroundTexture,
    (System_Int32_array **)backgroundTexture,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
      sub_B2C434(0LL, state);
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
      sub_B2C434(servantSellMenu, *(_QWORD *)&state);
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
    sub_B2C434(0LL, kind);
  ServantSellMenu__Init_28886352(servantSellMenu, kind, 0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetSellServantMenuInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 9 )
  {
    if ( !this->fields.servantSellMenu )
      sub_B2C434(this, state);
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
      sub_B2C434(0LL, state);
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
      sub_B2C434(0LL, state);
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
      sub_B2C434(0LL, state);
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
  TitleInfoControl_o *v6; // x19

  if ( (byte_418920C & 1) == 0 )
  {
    sub_B2C35C(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    byte_418920C = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( state == 9 )
  {
    if ( titleInfo )
    {
      TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 38, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(titleInfo, *(_QWORD *)&state);
  }
  if ( !titleInfo )
    goto LABEL_14;
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 37, 0, 0LL);
  if ( state == 15 )
  {
    v6 = this->fields.titleInfo;
    titleInfo = (TitleInfoControl_o *)ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    }
    if ( !v6 )
      goto LABEL_14;
    TitleInfoControl__setTitleImgFromBanner(
      v6,
      ShopRootConstants_TypeInfo->static_fields->SVT_COSTUME_TITLE_ID,
      0,
      1,
      0,
      0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetTopListViewEnter(
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
      sub_B2C434(0LL, v4);
    ShopTopListViewManager__SetMode_23732248(topListViewManager, 3, this->fields.onMoveEnd, 0LL);
  }
}


void __fastcall ShopSceneListViewControlHelper__SetTopListViewInput(
        ShopSceneListViewControlHelper_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopTopListViewManager_o *topListViewManager; // x0

  if ( state == 1 )
  {
    topListViewManager = this->fields.topListViewManager;
    if ( !topListViewManager )
      sub_B2C434(0LL, state);
    ShopTopListViewManager__SetMode(topListViewManager, 1, this->fields.onSelectTop, 0LL);
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
  System_Action_o *onMoveEnd; // x2
  int32_t v9; // w1

  topListViewBase = this->fields.topListViewBase;
  if ( !topListViewBase )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(topListViewBase, 1, 0LL);
  topListViewBase = (UnityEngine_GameObject_o *)this->fields.topListViewManager;
  if ( !topListViewBase )
    goto LABEL_10;
  ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)topListViewBase, 0, overrideScrollBarValue, 0LL);
  if ( (unsigned int)state > 0x14 || ((1 << state) & 0x100310) == 0 )
  {
    topListViewBase = (UnityEngine_GameObject_o *)this->fields.topListViewManager;
    if ( topListViewBase )
    {
      onMoveEnd = this->fields.onMoveEnd;
      v9 = 2;
      goto LABEL_7;
    }
LABEL_10:
    sub_B2C434(topListViewBase, *(_QWORD *)&state);
  }
  topListViewBase = (UnityEngine_GameObject_o *)this->fields.topListViewManager;
  if ( !topListViewBase )
    goto LABEL_10;
  onMoveEnd = this->fields.onMoveEnd;
  v9 = 6;
LABEL_7:
  ShopTopListViewManager__SetMode_23732248((ShopTopListViewManager_o *)topListViewBase, v9, onMoveEnd, 0LL);
}


void __fastcall ShopSceneListViewControlHelper__SetTopListViewRetry(
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
      sub_B2C434(0LL, v4);
    ShopTopListViewManager__SetMode_23732248(topListViewManager, 5, this->fields.onMoveEnd, 0LL);
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
  ShopSceneListViewControlHelper_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  ShopSceneListViewControlHelper__SetBuyItemListViewClear(_4__this, this->fields.state, 0LL);
}