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
  int32_t v3; // w3
  struct System_String_o **v5; // x8
  struct System_String_o *v6; // x1
  __int64 v7; // x1
  BattleViewItemlistComponent_o *itemList; // x0

  if ( (byte_4A5DF8C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3603/*"CLOSE_TO_TACTICAL"*/);
    sub_1B885B0(&StringLiteral_3602/*"CLOSE_TO_MENU"*/);
    byte_4A5DF8C = 1;
  }
  if ( this->fields.isFromBattleMenu )
    v5 = (struct System_String_o **)&StringLiteral_3602/*"CLOSE_TO_MENU"*/;
  else
    v5 = (struct System_String_o **)&StringLiteral_3603/*"CLOSE_TO_TACTICAL"*/;
  v6 = *v5;
  this->fields.closeFsmEvent = *v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFsmEvent, (int32_t)v6, v2, v3);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, v7);
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
    sub_1B8880C(masterFsm, method);
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
    sub_1B8880C(0LL, method);
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
  BattleData_o *battleData; // x0
  BattleViewItemlistComponent_o *itemList; // x22
  BattleDropItem_array *DropItems; // x23
  BattleDropItemComponent_ClickDelegate_o *v10; // x24

  if ( (byte_4A5DF8B & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleItemListWindowComponent_OnItemClick__);
    sub_1B885B0(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_4A5DF8B = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0LL),
        v10 = (BattleDropItemComponent_ClickDelegate_o *)sub_1B887FC(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattleItemListWindowComponent_OnItemClick__,
          0LL),
        !itemList)
    || (BattleViewItemlistComponent__setListDataCustomColumn(
          itemList,
          DropItems,
          v10,
          this->fields.itemColumnCount,
          0LL),
        (battleData = (BattleData_o *)this->fields.itemList) == 0LL) )
  {
    sub_1B8880C(battleData, fromBattleMenu);
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
  int32_t v3; // w3

  this->fields.battleData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleData, (int32_t)data, (int32_t)method, v3);
}


System_String_o *__fastcall BattleItemListWindowComponent__get_closeBtnPath(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5DF8D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12542/*"Scroll Bar/item_list_close"*/);
    byte_4A5DF8D = 1;
  }
  return (System_String_o *)StringLiteral_12542/*"Scroll Bar/item_list_close"*/;
}