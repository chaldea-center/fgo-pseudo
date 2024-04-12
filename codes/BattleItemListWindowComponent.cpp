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
  struct System_String_o **v3; // x8

  v2 = this;
  if ( (byte_42AD209 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3143/*"CLOSE_TO_TACTICAL"*/);
    this = (BattleItemListWindowComponent_o *)sub_B52984(&StringLiteral_3142/*"CLOSE_TO_MENU"*/);
    byte_42AD209 = 1;
  }
  if ( v2->fields.isFromBattleMenu )
    v3 = (struct System_String_o **)&StringLiteral_3142/*"CLOSE_TO_MENU"*/;
  else
    v3 = (struct System_String_o **)&StringLiteral_3143/*"CLOSE_TO_TACTICAL"*/;
  if ( !v2
    || (v2->fields.closeFsmEvent = *v3,
        sub_B52920(&v2->fields.closeFsmEvent),
        (this = (BattleItemListWindowComponent_o *)v2->fields.itemList) == 0LL) )
  {
    sub_B52A5C(this, method);
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
    sub_B52A5C(masterFsm, method);
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42AD208 & 1) == 0 )
  {
    sub_B52984(&Method_BattleItemListWindowComponent_OnItemClick__);
    sub_B52984(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_42AD208 = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0LL),
        v10 = (BattleDropItemComponent_ClickDelegate_o *)sub_B52A54(BattleDropItemComponent_ClickDelegate_TypeInfo),
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
    sub_B52A5C(battleData, fromBattleMenu);
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
  sub_B52920(&this->fields.battleData);
}


System_String_o *__fastcall BattleItemListWindowComponent__get_closeBtnPath(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD20A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12720/*"Scroll Bar/item_list_close"*/);
    byte_42AD20A = 1;
  }
  return (System_String_o *)StringLiteral_12720/*"Scroll Bar/item_list_close"*/;
}