void BattleItemListWindowComponent___ctor(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.isFromBattleMenu = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleItemListWindowComponent__CloseWindow(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleItemListWindowComponent_o *v8; // x19
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1

  v8 = this;
  if ( (byte_593BD4C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3660/*"CLOSE_TO_TACTICAL"*/);
    this = (BattleItemListWindowComponent_o *)sub_21FFC50(&StringLiteral_3659/*"CLOSE_TO_MENU"*/);
    byte_593BD4C = 1;
  }
  if ( !v8 )
    goto LABEL_8;
  v9 = (struct System_String_o **)&StringLiteral_3660/*"CLOSE_TO_TACTICAL"*/;
  if ( v8->fields.isFromBattleMenu )
    v9 = (struct System_String_o **)&StringLiteral_3659/*"CLOSE_TO_MENU"*/;
  v10 = *v9;
  v8->fields.closeFsmEvent = *v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.closeFsmEvent, (int32_t)v10, v2, v3, v4, v5, v6, v7);
  this = (BattleItemListWindowComponent_o *)v8->fields.itemList;
  if ( !this )
LABEL_8:
    sub_21FFECC(this, method);
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)this, 0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)v8, 0, 0);
}


void BattleItemListWindowComponent__CompClose(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *masterFsm; // x0

  masterFsm = this->fields.masterFsm;
  if ( !masterFsm
    || (PlayMakerFSM__SendEvent(masterFsm, this->fields.closeFsmEvent, 0),
        (masterFsm = (PlayMakerFSM_o *)this->fields.itemList) == 0) )
  {
    sub_21FFECC(masterFsm, method);
  }
  BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)masterFsm, 0);
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0);
}


void BattleItemListWindowComponent__CompOpen(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemList; // x0

  itemList = this->fields.itemList;
  if ( !itemList )
    sub_21FFECC(0, method);
  BattleViewItemlistComponent__setShow(itemList, 0);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0);
}


void BattleItemListWindowComponent__OnItemClick(
        BattleItemListWindowComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void BattleItemListWindowComponent__Open(
        BattleItemListWindowComponent_o *this,
        bool fromBattleMenu,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  BattleViewItemlistComponent_o *itemList; // x22
  BattleDropItem_array *DropItems; // x23
  BattleDropItemComponent_ClickDelegate_o *v10; // x24

  if ( (byte_593BD4B & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleItemListWindowComponent_OnItemClick__);
    sub_21FFC50(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_593BD4B = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0),
        v10 = (BattleDropItemComponent_ClickDelegate_o *)sub_21FFEBC(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattleItemListWindowComponent_OnItemClick__,
          0),
        !itemList)
    || (BattleViewItemlistComponent__setListDataCustomColumn(itemList, DropItems, v10, this->fields.itemColumnCount, 0),
        (battleData = (BattleData_o *)this->fields.itemList) == 0) )
  {
    sub_21FFECC(battleData, fromBattleMenu);
  }
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)battleData, 0);
  this->fields.isFromBattleMenu = fromBattleMenu;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


void BattleItemListWindowComponent__SetBattleData(
        BattleItemListWindowComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.battleData = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *BattleItemListWindowComponent__get_closeBtnPath(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_593BD4D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13148/*"Scroll Bar/item_list_close"*/);
    byte_593BD4D = 1;
  }
  return (System_String_o *)StringLiteral_13148/*"Scroll Bar/item_list_close"*/;
}