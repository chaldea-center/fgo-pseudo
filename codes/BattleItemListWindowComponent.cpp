void __fastcall BattleItemListWindowComponent___ctor(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.isFromBattleMenu = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__CloseWindow(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  struct System_String_o **v6; // x8
  struct System_String_o *v7; // x1
  __int64 v8; // x1
  BattleViewItemlistComponent_o *itemList; // x0

  if ( (byte_4B05217 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3486/*"CLOSE_TO_TACTICAL"*/, method);
    sub_1BC3008(&StringLiteral_3485/*"CLOSE_TO_MENU"*/, v5);
    byte_4B05217 = 1;
  }
  if ( this->fields.isFromBattleMenu )
    v6 = (struct System_String_o **)&StringLiteral_3485/*"CLOSE_TO_MENU"*/;
  else
    v6 = (struct System_String_o **)&StringLiteral_3486/*"CLOSE_TO_TACTICAL"*/;
  v7 = *v6;
  this->fields.closeFsmEvent = *v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeFsmEvent, (int32_t)v7, v2, v3);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BC3264(0LL, v8);
  BattleViewItemlistComponent__setHide(itemList, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
}


void __fastcall BattleItemListWindowComponent__CompClose(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *masterFsm; // x0

  masterFsm = this->fields.masterFsm;
  if ( !masterFsm
    || (PlayMakerFSM__SendEvent(masterFsm, this->fields.closeFsmEvent, 0LL),
        (masterFsm = (PlayMakerFSM_o *)this->fields.itemList) == 0LL) )
  {
    sub_1BC3264(masterFsm, method);
  }
  BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)masterFsm, 0LL);
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__CompOpen(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemList; // x0

  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BC3264(0LL, method);
  BattleViewItemlistComponent__setShow(itemList, 0LL);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__OnItemClick(
        BattleItemListWindowComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleItemListWindowComponent__Open(
        BattleItemListWindowComponent_o *this,
        bool fromBattleMenu,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleData_o *battleData; // x0
  BattleViewItemlistComponent_o *itemList; // x22
  BattleDropItem_array *DropItems; // x23
  BattleDropItemComponent_ClickDelegate_o *v11; // x24

  if ( (byte_4B05216 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleItemListWindowComponent_OnItemClick__, fromBattleMenu);
    sub_1BC3008(&BattleDropItemComponent_ClickDelegate_TypeInfo, v7);
    byte_4B05216 = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0LL),
        v11 = (BattleDropItemComponent_ClickDelegate_o *)sub_1BC3254(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleItemListWindowComponent_OnItemClick__,
          0LL),
        !itemList)
    || (BattleViewItemlistComponent__setListDataCustomColumn(
          itemList,
          DropItems,
          v11,
          this->fields.itemColumnCount,
          0LL),
        (battleData = (BattleData_o *)this->fields.itemList) == 0LL) )
  {
    sub_1BC3264(battleData, fromBattleMenu);
  }
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)battleData, 0LL);
  this->fields.isFromBattleMenu = fromBattleMenu;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleItemListWindowComponent__SetBattleData(
        BattleItemListWindowComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battleData = data;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.battleData, (int32_t)data, (int32_t)method, v3);
}


System_String_o *__fastcall BattleItemListWindowComponent__get_closeBtnPath(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B05218 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12517/*"Scroll Bar/item_list_close"*/, method);
    byte_4B05218 = 1;
  }
  return (System_String_o *)StringLiteral_12517/*"Scroll Bar/item_list_close"*/;
}