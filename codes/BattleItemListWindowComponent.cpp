void BattleItemListWindowComponent___ctor(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.isFromBattleMenu = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleItemListWindowComponent__CloseWindow(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1
  __int64 v11; // x1
  BattleViewItemlistComponent_o *itemList; // x0

  if ( (byte_4CF1B62 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3528/*"CLOSE_TO_TACTICAL"*/);
    sub_1C7BAE8(&StringLiteral_3527/*"CLOSE_TO_MENU"*/);
    byte_4CF1B62 = 1;
  }
  if ( this->fields.isFromBattleMenu )
    v9 = (struct System_String_o **)&StringLiteral_3527/*"CLOSE_TO_MENU"*/;
  else
    v9 = (struct System_String_o **)&StringLiteral_3528/*"CLOSE_TO_TACTICAL"*/;
  v10 = *v9;
  this->fields.closeFsmEvent = *v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.closeFsmEvent, (int32_t)v10, v2, v3, v4, v5, v6, v7);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C7BD40(0, v11);
  BattleViewItemlistComponent__setHide(itemList, 0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0, 0);
}


void BattleItemListWindowComponent__CompClose(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *masterFsm; // x0

  masterFsm = this->fields.masterFsm;
  if ( !masterFsm
    || (PlayMakerFSM__SendEvent(masterFsm, this->fields.closeFsmEvent, 0),
        (masterFsm = (PlayMakerFSM_o *)this->fields.itemList) == 0) )
  {
    sub_1C7BD40(masterFsm, method);
  }
  BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)masterFsm, 0);
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0);
}


void BattleItemListWindowComponent__CompOpen(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemList; // x0

  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C7BD40(0, method);
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

  if ( (byte_4CF1B61 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleItemListWindowComponent_OnItemClick__);
    sub_1C7BAE8(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_4CF1B61 = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0),
        v10 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C7BD34(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattleItemListWindowComponent_OnItemClick__,
          0),
        !itemList)
    || (BattleViewItemlistComponent__setListDataCustomColumn(itemList, DropItems, v10, this->fields.itemColumnCount, 0),
        (battleData = (BattleData_o *)this->fields.itemList) == 0) )
  {
    sub_1C7BD40(battleData, fromBattleMenu);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.battleData = data;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleData,
    (int32_t)data,
    (int32_t)method,
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
  if ( (byte_4CF1B63 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_12698/*"Scroll Bar/item_list_close"*/);
    byte_4CF1B63 = 1;
  }
  return (System_String_o *)StringLiteral_12698/*"Scroll Bar/item_list_close"*/;
}