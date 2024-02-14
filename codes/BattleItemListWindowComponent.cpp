void __fastcall BattleItemListWindowComponent___ctor(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.isFromBattleMenu = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__CloseWindow(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleItemListWindowComponent_o *v2; // x19
  __int64 v3; // x1
  struct System_String_o **v4; // x8
  struct System_String_o *v5; // x1

  v2 = this;
  if ( (byte_4211824 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3123/*"CLOSE_TO_TACTICAL"*/, method);
    this = (BattleItemListWindowComponent_o *)sub_B0D8A4(&StringLiteral_3122/*"CLOSE_TO_MENU"*/, v3);
    byte_4211824 = 1;
  }
  if ( v2->fields.isFromBattleMenu )
    v4 = (struct System_String_o **)&StringLiteral_3122/*"CLOSE_TO_MENU"*/;
  else
    v4 = (struct System_String_o **)&StringLiteral_3123/*"CLOSE_TO_TACTICAL"*/;
  if ( !v2
    || (v5 = *v4,
        v2->fields.closeFsmEvent = *v4,
        sub_B0D840(&v2->fields.closeFsmEvent, v5),
        (this = (BattleItemListWindowComponent_o *)v2->fields.itemList) == 0LL) )
  {
    sub_B0D97C(this);
  }
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)this, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)v2, 0LL, 0LL);
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
    sub_B0D97C(masterFsm);
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
    sub_B0D97C(0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  BattleDropItemComponent_ClickDelegate_o *v13; // x24

  if ( (byte_4211823 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleItemListWindowComponent_OnItemClick__, fromBattleMenu);
    sub_B0D8A4(&BattleDropItemComponent_ClickDelegate_TypeInfo, v7);
    byte_4211823 = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0LL),
        v13 = (BattleDropItemComponent_ClickDelegate_o *)sub_B0D974(
                                                           BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                           v11,
                                                           v12),
        BattleDropItemComponent_ClickDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleItemListWindowComponent_OnItemClick__,
          0LL),
        !itemList)
    || (BattleViewItemlistComponent__setListDataCustomColumn(
          itemList,
          DropItems,
          v13,
          this->fields.itemColumnCount,
          0LL),
        (battleData = (BattleData_o *)this->fields.itemList) == 0LL) )
  {
    sub_B0D97C(battleData);
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
  this->fields.battleData = data;
  sub_B0D840(&this->fields.battleData, data);
}


System_String_o *__fastcall BattleItemListWindowComponent__get_closeBtnPath(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211825 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12667/*"Scroll Bar/item_list_close"*/, method);
    byte_4211825 = 1;
  }
  return (System_String_o *)StringLiteral_12667/*"Scroll Bar/item_list_close"*/;
}